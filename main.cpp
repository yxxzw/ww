#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"

int main()
{
	int x;
	scanf("%d",&x);
	long long* en = new long long[x];
	int* sn = new int[x];
	int* kn = new int[x];
	for (int a = 0; a < x; a++)
	{
		scanf("%lld %d %d",&en[a],&sn[a],&kn[a]);
	}
	int n;
	scanf("%d",&n);
	int* pn = new int[n];
	for (int b = 0; b < n; b++)
	{
		scanf("%d", &pn[b]);
	}
	for (int c= 0; c < n; c++)
	{
		for (int j = 0; j < x; j++)
		{
			if (pn[c] == sn[j])printf("%lld %d\n",en[j],kn[j]);
		}
	}

	return 0;

}