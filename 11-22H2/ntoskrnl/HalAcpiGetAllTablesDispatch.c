/*
 * XREFs of HalAcpiGetAllTablesDispatch @ 0x14037DD50
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiGetAllTables @ 0x14037DD68 (HalpAcpiGetAllTables.c)
 */

__int64 HalAcpiGetAllTablesDispatch()
{
  return HalpAcpiGetAllTables();
}
