/*
 * XREFs of sub_1409B8ECC @ 0x1409B8ECC
 * Callers:
 *     sub_1409E1E64 @ 0x1409E1E64 (sub_1409E1E64.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 */

__int64 __fastcall sub_1409B8ECC(__int64 a1, __int64 a2, char *a3, _QWORD *a4)
{
  char *PoolWithQuotaTag; // rax
  __int64 v9; // rcx
  signed __int64 v10; // r8

  PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x10uLL, 0x62507452u);
  if ( !PoolWithQuotaTag )
    return 3221225495LL;
  *PoolWithQuotaTag = 1;
  v9 = 2LL;
  *(_DWORD *)(PoolWithQuotaTag + 2) = *(_DWORD *)a1;
  v10 = PoolWithQuotaTag - a3;
  *((_WORD *)PoolWithQuotaTag + 3) = *(_WORD *)(a1 + 4);
  PoolWithQuotaTag[1] = 2;
  do
  {
    *(_DWORD *)&a3[v10 + 8] = *(_DWORD *)a3;
    a3 += 4;
    --v9;
  }
  while ( v9 );
  *a4 = PoolWithQuotaTag;
  return 0LL;
}
