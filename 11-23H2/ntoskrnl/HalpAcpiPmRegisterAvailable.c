/*
 * XREFs of HalpAcpiPmRegisterAvailable @ 0x140364AE0
 * Callers:
 *     HalpAcpiPostSleep @ 0x140A96470 (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x140A96710 (HalpAcpiPreSleep.c)
 *     HalpCheckFixedWakeSources @ 0x140A9696C (HalpCheckFixedWakeSources.c)
 *     HalpDpPostReplace @ 0x140A972F8 (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x140A975F0 (HalpDpPreReplace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpAcpiPmRegisterAvailable(int a1)
{
  return PmRegisters[48 * a1] == 0 ? 0xC00000BB : 0;
}
