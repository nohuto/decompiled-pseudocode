/*
 * XREFs of HalpAcpiGetAllTables @ 0x14037D8B8
 * Callers:
 *     HalAcpiGetAllTablesDispatch @ 0x14037D8A0 (HalAcpiGetAllTablesDispatch.c)
 *     HalpAcpiPopulateTableCacheWork @ 0x1403B6D40 (HalpAcpiPopulateTableCacheWork.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     HalpAcpiGetAllTablesWork @ 0x14037DDC8 (HalpAcpiGetAllTablesWork.c)
 */

__int64 HalpAcpiGetAllTables()
{
  __int64 AllTablesWork; // rbx

  ExAcquireFastMutex(&HalpAcpiTableCacheLock);
  AllTablesWork = HalpAcpiGetAllTablesWork();
  ExReleaseFastMutex(&HalpAcpiTableCacheLock);
  return AllTablesWork;
}
