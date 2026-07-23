/*
 * XREFs of HalpInterruptPowerComponentIdleCallback @ 0x14051ADE0
 * Callers:
 *     <none>
 * Callees:
 *     PoFxCompleteIdleCondition @ 0x1403574A0 (PoFxCompleteIdleCondition.c)
 *     HalpInterruptPowerChange @ 0x14051AD24 (HalpInterruptPowerChange.c)
 */

__int64 __fastcall HalpInterruptPowerComponentIdleCallback(ULONG_PTR a1, unsigned int a2)
{
  HalpInterruptPowerChange(a1, 0);
  return PoFxCompleteIdleCondition(*(_QWORD **)(a1 + 368), a2);
}
