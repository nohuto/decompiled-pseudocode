/*
 * XREFs of KiDispatchPassiveInterrupts @ 0x140462970
 * Callers:
 *     KiScanInterruptObjectList @ 0x1404206E0 (KiScanInterruptObjectList.c)
 * Callees:
 *     IoProcessPassiveInterrupts @ 0x1403A34A4 (IoProcessPassiveInterrupts.c)
 */

__int64 KiDispatchPassiveInterrupts()
{
  return IoProcessPassiveInterrupts();
}
