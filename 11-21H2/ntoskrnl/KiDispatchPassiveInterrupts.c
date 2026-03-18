/*
 * XREFs of KiDispatchPassiveInterrupts @ 0x14045B710
 * Callers:
 *     KiScanInterruptObjectList @ 0x140421050 (KiScanInterruptObjectList.c)
 * Callees:
 *     IoProcessPassiveInterrupts @ 0x140560798 (IoProcessPassiveInterrupts.c)
 */

__int64 __fastcall KiDispatchPassiveInterrupts(__int64 a1)
{
  return IoProcessPassiveInterrupts(*(unsigned int *)(a1 + 88));
}
