/*
 * XREFs of HalpAcpiPmRegisterAvailable @ 0x140364940
 * Callers:
 *     HalpAcpiPostSleep @ 0x140A96600 (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x140A968A0 (HalpAcpiPreSleep.c)
 *     HalpCheckFixedWakeSources @ 0x140A96AFC (HalpCheckFixedWakeSources.c)
 *     HalpDpPostReplace @ 0x140A97488 (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x140A97780 (HalpDpPreReplace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpAcpiPmRegisterAvailable(int a1)
{
  return PmRegisters[48 * a1] == 0 ? 0xC00000BB : 0;
}
