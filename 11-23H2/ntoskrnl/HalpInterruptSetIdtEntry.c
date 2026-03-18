/*
 * XREFs of HalpInterruptSetIdtEntry @ 0x14037D270
 * Callers:
 *     HalpTimerInitializeProfiling @ 0x14037ACC0 (HalpTimerInitializeProfiling.c)
 *     HalpTimerClockActivate @ 0x14037B360 (HalpTimerClockActivate.c)
 *     HalpConnectThermalInterrupt @ 0x14037BEC0 (HalpConnectThermalInterrupt.c)
 *     HalpTimerConfigureInterrupt @ 0x14037CF94 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerInitializeClockPn @ 0x14037D0BC (HalpTimerInitializeClockPn.c)
 *     HalpInitializeInterruptsPn @ 0x14037D15C (HalpInitializeInterruptsPn.c)
 *     HalpTimerInitializeClock @ 0x1403B19B0 (HalpTimerInitializeClock.c)
 *     HalpTimerTestHypervisorTimer @ 0x14050AD7C (HalpTimerTestHypervisorTimer.c)
 *     HalpIommuInitInterrupts @ 0x140A89DCC (HalpIommuInitInterrupts.c)
 *     HalpInitializeInterrupts @ 0x140B48390 (HalpInitializeInterrupts.c)
 *     IommupHvInitializeLibrary @ 0x140B92694 (IommupHvInitializeLibrary.c)
 * Callees:
 *     HalpCreateInterrupt @ 0x14037D2A8 (HalpCreateInterrupt.c)
 */

__int64 __fastcall HalpInterruptSetIdtEntry(unsigned __int8 a1, int a2, char a3, __int64 a4, __int64 a5)
{
  if ( !a3 )
    a3 = a1 >> 4;
  return HalpCreateInterrupt(a2, a1, a3, a2, a5);
}
