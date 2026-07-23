/*
 * XREFs of HalpInterruptSetIdtEntry @ 0x14037D410
 * Callers:
 *     HalpTimerInitializeProfiling @ 0x14037AE60 (HalpTimerInitializeProfiling.c)
 *     HalpTimerClockActivate @ 0x14037B500 (HalpTimerClockActivate.c)
 *     HalpConnectThermalInterrupt @ 0x14037C060 (HalpConnectThermalInterrupt.c)
 *     HalpTimerConfigureInterrupt @ 0x14037D134 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerInitializeClockPn @ 0x14037D25C (HalpTimerInitializeClockPn.c)
 *     HalpInitializeInterruptsPn @ 0x14037D2FC (HalpInitializeInterruptsPn.c)
 *     HalpTimerInitializeClock @ 0x1403B1B90 (HalpTimerInitializeClock.c)
 *     HalpTimerTestHypervisorTimer @ 0x14050B2CC (HalpTimerTestHypervisorTimer.c)
 *     HalpIommuInitInterrupts @ 0x140A89DCC (HalpIommuInitInterrupts.c)
 *     HalpInitializeInterrupts @ 0x140B48390 (HalpInitializeInterrupts.c)
 *     IommupHvInitializeLibrary @ 0x140B92694 (IommupHvInitializeLibrary.c)
 * Callees:
 *     HalpCreateInterrupt @ 0x14037D448 (HalpCreateInterrupt.c)
 */

__int64 __fastcall HalpInterruptSetIdtEntry(unsigned __int8 a1, int a2, char a3, __int64 a4, __int64 a5)
{
  if ( !a3 )
    a3 = a1 >> 4;
  return HalpCreateInterrupt(a2, a1, a3, a2, a5);
}
