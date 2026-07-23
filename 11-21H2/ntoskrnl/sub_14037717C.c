/*
 * XREFs of sub_14037717C @ 0x14037717C
 * Callers:
 *     sub_14025E9D0 @ 0x14025E9D0 (sub_14025E9D0.c)
 * Callees:
 *     RtlSetAllBits @ 0x140262CA0 (RtlSetAllBits.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14037717C(__int64 a1)
{
  char *PoolWithTag; // rax
  signed __int64 v3; // rsi

  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6568), -1LL, 0LL) )
    return 3221226614LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(
                          NonPagedPoolNx,
                          4 * (((unsigned __int64)*(unsigned int *)(a1 + 6212) + 31) >> 5) + 24,
                          0x77536D73u);
  v3 = (signed __int64)PoolWithTag;
  if ( PoolWithTag )
  {
    *(_OWORD *)PoolWithTag = 0LL;
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    *((_DWORD *)PoolWithTag + 2) = *(_DWORD *)(a1 + 6212);
    *((_QWORD *)PoolWithTag + 2) = PoolWithTag + 24;
    RtlSetAllBits((PRTL_BITMAP)(PoolWithTag + 8));
    _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6568), v3, -1LL);
    return 0LL;
  }
  else
  {
    _InterlockedExchange64((volatile __int64 *)(a1 + 6568), 0LL);
    return 3221225626LL;
  }
}
