/*
 * XREFs of HalpAcpiAllocateMemory @ 0x14037E520
 * Callers:
 *     HalpAcpiGetAllTablesWork @ 0x14037E278 (HalpAcpiGetAllTablesWork.c)
 *     HalpAcpiCopyBiosTable @ 0x14037E498 (HalpAcpiCopyBiosTable.c)
 *     HalpAcpiTableCacheInit @ 0x140B4C428 (HalpAcpiTableCacheInit.c)
 *     HalpAcpiFindRsdp @ 0x140B707BC (HalpAcpiFindRsdp.c)
 * Callees:
 *     HalpMap @ 0x14037E878 (HalpMap.c)
 *     HalpMmAllocCtxAlloc @ 0x14039AB30 (HalpMmAllocCtxAlloc.c)
 *     HalpAllocPhysicalMemory @ 0x140B4C03C (HalpAllocPhysicalMemory.c)
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
