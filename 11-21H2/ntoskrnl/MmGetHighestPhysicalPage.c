/*
 * XREFs of MmGetHighestPhysicalPage @ 0x14020DB30
 * Callers:
 *     PfpCopyUserPfnPrioRequest @ 0x14068FCB0 (PfpCopyUserPfnPrioRequest.c)
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 *     PopAllocateHiberContext @ 0x140802068 (PopAllocateHiberContext.c)
 *     PopPreallocateHibernateMemory @ 0x14080751C (PopPreallocateHibernateMemory.c)
 *     PopEnableHiberFile @ 0x140818E88 (PopEnableHiberFile.c)
 *     PopBuildMemoryImageHeader @ 0x140A4E8E4 (PopBuildMemoryImageHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetHighestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8LL * a1) + 16712LL);
}
