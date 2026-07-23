/*
 * XREFs of sub_14056E6FC @ 0x14056E6FC
 * Callers:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_140212E00 @ 0x140212E00 (sub_140212E00.c)
 *     sub_14021A7D0 @ 0x14021A7D0 (sub_14021A7D0.c)
 *     sub_14021CA70 @ 0x14021CA70 (sub_14021CA70.c)
 *     sub_140221790 @ 0x140221790 (sub_140221790.c)
 *     sub_140224210 @ 0x140224210 (sub_140224210.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcCanIWrite @ 0x140283F40 (CcCanIWrite.c)
 *     sub_1402844A0 @ 0x1402844A0 (sub_1402844A0.c)
 *     sub_14029D860 @ 0x14029D860 (sub_14029D860.c)
 *     IoReleaseCancelSpinLock @ 0x1402A23F0 (IoReleaseCancelSpinLock.c)
 *     sub_1402A4C30 @ 0x1402A4C30 (sub_1402A4C30.c)
 *     sub_1402A6E00 @ 0x1402A6E00 (sub_1402A6E00.c)
 *     sub_1402A7190 @ 0x1402A7190 (sub_1402A7190.c)
 *     sub_1402A7720 @ 0x1402A7720 (sub_1402A7720.c)
 *     sub_1402A7910 @ 0x1402A7910 (sub_1402A7910.c)
 *     sub_1402AE9D0 @ 0x1402AE9D0 (sub_1402AE9D0.c)
 *     sub_1402B02B0 @ 0x1402B02B0 (sub_1402B02B0.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B0DF0 (KeReleaseInStackQueuedSpinLock.c)
 *     sub_1402B1170 @ 0x1402B1170 (sub_1402B1170.c)
 *     sub_1402B1740 @ 0x1402B1740 (sub_1402B1740.c)
 *     sub_1402BA130 @ 0x1402BA130 (sub_1402BA130.c)
 *     sub_1402D4530 @ 0x1402D4530 (sub_1402D4530.c)
 *     sub_1402F8040 @ 0x1402F8040 (sub_1402F8040.c)
 *     sub_1402F8420 @ 0x1402F8420 (sub_1402F8420.c)
 *     sub_14030BBF0 @ 0x14030BBF0 (sub_14030BBF0.c)
 *     sub_14032BD70 @ 0x14032BD70 (sub_14032BD70.c)
 *     sub_140343010 @ 0x140343010 (sub_140343010.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14039B280 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     sub_140282C20 @ 0x140282C20 (sub_140282C20.c)
 *     sub_140632CBC @ 0x140632CBC (sub_140632CBC.c)
 */

__int64 __fastcall sub_14056E6FC(volatile signed __int64 **a1, __int64 a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rax

  v4 = __rdtsc();
  _m_prefetchw(a1);
  v5 = (__int64)*a1;
  if ( *a1 )
    goto LABEL_4;
  if ( a1 != (volatile signed __int64 **)_InterlockedCompareExchange64(a1[1], 0LL, (signed __int64)a1) )
  {
    v5 = sub_140282C20((__int64 *)a1);
LABEL_4:
    *a1 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v5 + 8), 1uLL);
  }
  return sub_140632CBC(a1[1], a2, v4);
}
