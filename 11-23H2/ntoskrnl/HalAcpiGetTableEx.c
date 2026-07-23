/*
 * XREFs of HalAcpiGetTableEx @ 0x1405012F0
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiGetTable @ 0x140337280 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalAcpiGetTableEx(__int64 a1, int a2, int a3, int a4)
{
  return HalpAcpiGetTable(a1, a2, a3, a4);
}
