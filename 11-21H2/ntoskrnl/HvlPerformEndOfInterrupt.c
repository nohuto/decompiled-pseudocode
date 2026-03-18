/*
 * XREFs of HvlPerformEndOfInterrupt @ 0x140459C10
 * Callers:
 *     HvlDummyInterruptCallback @ 0x140543130 (HvlDummyInterruptCallback.c)
 * Callees:
 *     HalPerformEndOfInterrupt @ 0x140222670 (HalPerformEndOfInterrupt.c)
 */

__int64 HvlPerformEndOfInterrupt()
{
  __int64 result; // rax

  _disable();
  result = HalPerformEndOfInterrupt(0LL);
  _enable();
  return result;
}
