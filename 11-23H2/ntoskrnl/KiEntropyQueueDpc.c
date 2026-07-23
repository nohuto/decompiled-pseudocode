/*
 * XREFs of KiEntropyQueueDpc @ 0x14035E990
 * Callers:
 *     KiScanInterruptObjectList @ 0x140420A70 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x140420C50 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140420DA0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x140420EF0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiHvInterruptSubDispatch @ 0x140426BF0 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x140426D50 (KiVmbusInterruptSubDispatch.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140254850 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiEntropyQueueDpc(__int64 a1)
{
  __int64 result; // rax

  if ( KiEntropyTimingRoutine )
    return KiInsertQueueDpc(a1 + 35560, 0LL, 0LL, 0LL, 0);
  return result;
}
