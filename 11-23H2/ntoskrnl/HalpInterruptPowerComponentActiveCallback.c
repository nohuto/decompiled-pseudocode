/*
 * XREFs of HalpInterruptPowerComponentActiveCallback @ 0x14051ADC0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptPowerChange @ 0x14051AD24 (HalpInterruptPowerChange.c)
 */

__int64 __fastcall HalpInterruptPowerComponentActiveCallback(ULONG_PTR a1)
{
  return HalpInterruptPowerChange(a1, 1);
}
