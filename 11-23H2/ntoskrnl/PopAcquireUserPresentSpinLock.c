/*
 * XREFs of PopAcquireUserPresentSpinLock @ 0x14058DE7C
 * Callers:
 *     PopSetSystemAwayMode @ 0x14098A890 (PopSetSystemAwayMode.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250E80 (KeAcquireSpinLockRaiseToDpc.c)
 */

KIRQL __fastcall PopAcquireUserPresentSpinLock(KIRQL *a1)
{
  KIRQL result; // al

  result = KeAcquireSpinLockRaiseToDpc(&PopUserPresentLock);
  *a1 = result;
  return result;
}
