/*
 * XREFs of HalpAcpiGetFacsMapping @ 0x140396A18
 * Callers:
 *     HalAcpiGetFacsMappingDispatch @ 0x140396A00 (HalAcpiGetFacsMappingDispatch.c)
 *     HaliInitPowerManagement @ 0x140834D70 (HaliInitPowerManagement.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     DbgPrint @ 0x14032A980 (DbgPrint.c)
 *     HalpAcpiCheckAndMapTable @ 0x140335A7C (HalpAcpiCheckAndMapTable.c)
 *     HalpAcpiGetTableWork @ 0x140337300 (HalpAcpiGetTableWork.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpAcpiGetFacsMapping(__int64 a1)
{
  unsigned int *TableWork; // rax
  int v3; // [rsp+50h] [rbp+8h] BYREF
  int v4; // [rsp+54h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  ExAcquireFastMutex(&HalpAcpiTableCacheLock);
  if ( !HalpAcpiFacsMapping )
  {
    TableWork = (unsigned int *)HalpAcpiGetTableWork(0LL, 0x50434146u, 0LL, 0LL);
    if ( !TableWork )
    {
      DbgPrint("**** HalpAcpiGetFacsMapping: No FADT found.\n");
      KeBugCheckEx(0xA5u, 0x10009uLL, 0LL, 0LL, 0LL);
    }
    HalpAcpiFacsMapping = HalpAcpiCheckAndMapTable(0LL, TableWork[9], 0x21u, 1396916550, 0LL, 0LL, 0, &v3);
  }
  ExReleaseFastMutex(&HalpAcpiTableCacheLock);
  return HalpAcpiFacsMapping;
}
