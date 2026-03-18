/*
 * XREFs of HalpInterruptPowerComponentIdleCallback @ 0x14051A890
 * Callers:
 *     <none>
 * Callees:
 *     PoFxCompleteIdleCondition @ 0x140357300 (PoFxCompleteIdleCondition.c)
 *     HalpInterruptPowerChange @ 0x14051A7D4 (HalpInterruptPowerChange.c)
 */

__int64 __fastcall HalpInterruptPowerComponentIdleCallback(ULONG_PTR a1, unsigned int a2)
{
  HalpInterruptPowerChange(a1, 0);
  return PoFxCompleteIdleCondition(*(_QWORD **)(a1 + 368), a2);
}
