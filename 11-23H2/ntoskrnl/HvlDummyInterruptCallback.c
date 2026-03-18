/*
 * XREFs of HvlDummyInterruptCallback @ 0x14053F5A0
 * Callers:
 *     KiHvInterruptSubDispatch @ 0x140426860 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1404269C0 (KiVmbusInterruptSubDispatch.c)
 * Callees:
 *     HvlPerformEndOfInterrupt @ 0x14045F4A0 (HvlPerformEndOfInterrupt.c)
 */

__int64 HvlDummyInterruptCallback()
{
  return HvlPerformEndOfInterrupt();
}
