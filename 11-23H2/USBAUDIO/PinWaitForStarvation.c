/*
 * XREFs of PinWaitForStarvation @ 0x1C0009708
 * Callers:
 *     USBHwDataPipeReset @ 0x1C0031DF0 (USBHwDataPipeReset.c)
 *     USBMidiOutStateChangePin @ 0x1C00376B0 (USBMidiOutStateChangePin.c)
 * Callees:
 *     PinWaitForStarvationTimeout @ 0x1C000508C (PinWaitForStarvationTimeout.c)
 */

__int64 __fastcall PinWaitForStarvation(__int64 a1)
{
  return PinWaitForStarvationTimeout(a1, 0LL);
}
