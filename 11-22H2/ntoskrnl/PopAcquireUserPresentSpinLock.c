/*
 * XREFs of PopAcquireUserPresentSpinLock @ 0x14058DF0C
 * Callers:
 *     PopSetSystemAwayMode @ 0x14098A940 (PopSetSystemAwayMode.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 */

KIRQL __fastcall PopAcquireUserPresentSpinLock(KIRQL *a1)
{
  KIRQL result; // al

  result = KeAcquireSpinLockRaiseToDpc(&PopUserPresentLock);
  *a1 = result;
  return result;
}
