/*
 * XREFs of KiDispatchPassiveInterrupts @ 0x140462310
 * Callers:
 *     KiScanInterruptObjectList @ 0x140420020 (KiScanInterruptObjectList.c)
 * Callees:
 *     IoProcessPassiveInterrupts @ 0x1403A2D64 (IoProcessPassiveInterrupts.c)
 */

__int64 KiDispatchPassiveInterrupts()
{
  return IoProcessPassiveInterrupts();
}
