/*
 * XREFs of HalAcpiGetTable @ 0x140396AC0
 * Callers:
 *     HalpAddDevice @ 0x140834F20 (HalpAddDevice.c)
 *     HalpDbgInitSystem @ 0x140A8F140 (HalpDbgInitSystem.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140337280 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalAcpiGetTable(__int64 a1, int a2)
{
  return HalpAcpiGetTable(a1, a2, 0, 0);
}
