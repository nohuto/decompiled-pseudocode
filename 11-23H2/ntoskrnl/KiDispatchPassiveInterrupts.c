/*
 * XREFs of KiDispatchPassiveInterrupts @ 0x140462D70
 * Callers:
 *     KiScanInterruptObjectList @ 0x140420A70 (KiScanInterruptObjectList.c)
 * Callees:
 *     IoProcessPassiveInterrupts @ 0x1403A3684 (IoProcessPassiveInterrupts.c)
 */

__int64 KiDispatchPassiveInterrupts()
{
  return IoProcessPassiveInterrupts();
}
