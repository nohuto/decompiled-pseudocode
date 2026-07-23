/*
 * XREFs of sub_140961F3C @ 0x140961F3C
 * Callers:
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 * Callees:
 *     sub_1402481DC @ 0x1402481DC (sub_1402481DC.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140571770 @ 0x140571770 (sub_140571770.c)
 */

__int64 __fastcall sub_140961F3C(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD *PoolWithQuotaTag; // rax
  _QWORD *v10; // rdi

  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 360) )
    return 3221226243LL;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x1A8uLL, 0x666F7250u);
  v10 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return 3221225495LL;
  memset(PoolWithQuotaTag, 0, 0x1A8uLL);
  v10[1] = a4;
  *((_DWORD *)v10 + 4) = a2;
  v10[4] = a3;
  *(_QWORD *)(a1 + 360) = v10;
  _interlockedbittestandset((volatile signed __int32 *)a1, 0x10u);
  v10[3] = sub_1402481DC(a1, 0LL);
  if ( (a2 & 1) != 0 || a3 )
  {
    sub_140571770(a1, 0);
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x11u);
  }
  return 0LL;
}
