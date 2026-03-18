/*
 * XREFs of HalpAcpiGetAllTables @ 0x14037D718
 * Callers:
 *     HalAcpiGetAllTablesDispatch @ 0x14037D700 (HalAcpiGetAllTablesDispatch.c)
 *     HalpAcpiPopulateTableCacheWork @ 0x1403B6B60 (HalpAcpiPopulateTableCacheWork.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     HalpAcpiGetAllTablesWork @ 0x14037DC28 (HalpAcpiGetAllTablesWork.c)
 */

__int64 HalpAcpiGetAllTables()
{
  __int64 AllTablesWork; // rbx

  ExAcquireFastMutex(&HalpAcpiTableCacheLock);
  AllTablesWork = HalpAcpiGetAllTablesWork();
  ExReleaseFastMutex(&HalpAcpiTableCacheLock);
  return AllTablesWork;
}
