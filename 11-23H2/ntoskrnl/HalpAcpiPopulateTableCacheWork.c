/*
 * XREFs of HalpAcpiPopulateTableCacheWork @ 0x1403B6B60
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiGetAllTables @ 0x14037D718 (HalpAcpiGetAllTables.c)
 *     HalpMmAllocCtxFree @ 0x1403A56C0 (HalpMmAllocCtxFree.c)
 */

__int64 __fastcall HalpAcpiPopulateTableCacheWork(__int64 a1)
{
  HalpMmAllocCtxFree(a1, a1);
  return HalpAcpiGetAllTables();
}
