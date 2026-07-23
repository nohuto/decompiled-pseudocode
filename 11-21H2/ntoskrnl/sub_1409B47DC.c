/*
 * XREFs of sub_1409B47DC @ 0x1409B47DC
 * Callers:
 *     sub_1409B35D0 @ 0x1409B35D0 (sub_1409B35D0.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 */

__int64 __fastcall sub_1409B47DC(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  char *PoolWithQuotaTag; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rcx

  if ( !*(_DWORD *)(a1 + 40) )
    return 3221226770LL;
  PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x30uLL, 0x57457350u);
  v6 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return 3221225626LL;
  KeInitializeEvent((PRKEVENT)(PoolWithQuotaTag + 16), SynchronizationEvent, 0);
  v7 = *(_QWORD **)(a1 + 64);
  if ( *v7 != a1 + 56 )
    __fastfail(3u);
  *v6 = a1 + 56;
  v6[1] = v7;
  *v7 = v6;
  *(_QWORD *)(a1 + 64) = v6;
  result = 0LL;
  *a2 = v6;
  return result;
}
