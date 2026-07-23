/*
 * XREFs of HvlDummyInterruptCallback @ 0x14053FC60
 * Callers:
 *     KiHvInterruptSubDispatch @ 0x140426BF0 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x140426D50 (KiVmbusInterruptSubDispatch.c)
 * Callees:
 *     HvlPerformEndOfInterrupt @ 0x14045F8A0 (HvlPerformEndOfInterrupt.c)
 */

__int64 HvlDummyInterruptCallback()
{
  return HvlPerformEndOfInterrupt();
}
