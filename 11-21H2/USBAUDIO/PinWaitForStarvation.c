/*
 * XREFs of PinWaitForStarvation @ 0x1C0002258
 * Callers:
 *     USBHwDataPipeReset @ 0x1C0033508 (USBHwDataPipeReset.c)
 *     USBMidiOutStateChangePin @ 0x1C003BDA0 (USBMidiOutStateChangePin.c)
 * Callees:
 *     PinWaitForStarvationTimeout @ 0x1C0002270 (PinWaitForStarvationTimeout.c)
 */

__int64 __fastcall PinWaitForStarvation(__int64 a1)
{
  return PinWaitForStarvationTimeout(a1, 0LL);
}
