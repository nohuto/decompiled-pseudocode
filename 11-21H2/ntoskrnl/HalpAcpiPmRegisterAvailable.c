/*
 * XREFs of HalpAcpiPmRegisterAvailable @ 0x1403B2F00
 * Callers:
 *     HaliAcpiSleep @ 0x140390D20 (HaliAcpiSleep.c)
 *     HalpAcpiPostSleep @ 0x140A50388 (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x140A5072C (HalpAcpiPreSleep.c)
 *     HalpCheckFixedWakeSources @ 0x140A508E0 (HalpCheckFixedWakeSources.c)
 *     HalpDpPostReplace @ 0x140A622EC (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x140A625DC (HalpDpPreReplace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpAcpiPmRegisterAvailable(int a1)
{
  return PmRegisters[48 * a1] == 0 ? 0xC00000BB : 0;
}
