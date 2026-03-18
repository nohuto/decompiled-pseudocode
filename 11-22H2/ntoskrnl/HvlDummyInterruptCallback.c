/*
 * XREFs of HvlDummyInterruptCallback @ 0x14053F650
 * Callers:
 *     KiHvInterruptSubDispatch @ 0x1404261A0 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x140426300 (KiVmbusInterruptSubDispatch.c)
 * Callees:
 *     HvlPerformEndOfInterrupt @ 0x14045EE40 (HvlPerformEndOfInterrupt.c)
 */

__int64 HvlDummyInterruptCallback()
{
  return HvlPerformEndOfInterrupt();
}
