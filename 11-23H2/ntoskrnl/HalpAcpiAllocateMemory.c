/*
 * XREFs of HalpAcpiAllocateMemory @ 0x14037DED0
 * Callers:
 *     HalpAcpiGetAllTablesWork @ 0x14037DC28 (HalpAcpiGetAllTablesWork.c)
 *     HalpAcpiCopyBiosTable @ 0x14037DE48 (HalpAcpiCopyBiosTable.c)
 *     HalpAcpiTableCacheInit @ 0x140B48D28 (HalpAcpiTableCacheInit.c)
 *     HalpAcpiFindRsdp @ 0x140B6F7D0 (HalpAcpiFindRsdp.c)
 * Callees:
 *     HalpMap @ 0x14037E228 (HalpMap.c)
 *     HalpMmAllocCtxAlloc @ 0x14039AE20 (HalpMmAllocCtxAlloc.c)
 *     HalpAllocPhysicalMemory @ 0x140B4893C (HalpAllocPhysicalMemory.c)
 */

__int64 __fastcall HalpAcpiAllocateMemory(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  if ( !a1 )
    return HalpMmAllocCtxAlloc(0LL, a2);
  v7 = 0x1000000LL;
  v5 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v6 = HalpAllocPhysicalMemory(a1, &v7, v5, 0LL);
  if ( !v6 )
    return v2;
  return HalpMap(v6, v5, 1, 0, 4);
}
