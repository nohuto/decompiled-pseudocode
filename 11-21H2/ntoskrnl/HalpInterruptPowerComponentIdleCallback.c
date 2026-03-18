/*
 * XREFs of HalpInterruptPowerComponentIdleCallback @ 0x14051DFE0
 * Callers:
 *     <none>
 * Callees:
 *     PoFxCompleteIdleCondition @ 0x14024E680 (PoFxCompleteIdleCondition.c)
 *     HalpInterruptPowerChange @ 0x14051DF24 (HalpInterruptPowerChange.c)
 */

__int64 __fastcall HalpInterruptPowerComponentIdleCallback(ULONG_PTR a1, unsigned int a2)
{
  HalpInterruptPowerChange(a1, 0);
  return PoFxCompleteIdleCondition(*(_QWORD *)(a1 + 352), a2);
}
