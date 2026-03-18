/*
 * XREFs of KiEntropyQueueDpc @ 0x14035E7F0
 * Callers:
 *     KiScanInterruptObjectList @ 0x1404206E0 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1404208C0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140420A10 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x140420B60 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiHvInterruptSubDispatch @ 0x140426860 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1404269C0 (KiVmbusInterruptSubDispatch.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140254790 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiEntropyQueueDpc(__int64 a1)
{
  __int64 result; // rax

  if ( KiEntropyTimingRoutine )
    return KiInsertQueueDpc(a1 + 35560, 0LL, 0LL, 0LL, 0);
  return result;
}
