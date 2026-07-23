/*
 * XREFs of MmGetHighestPhysicalPage @ 0x1402F8BC8
 * Callers:
 *     ExpQuerySystemInformation @ 0x140726A50 (ExpQuerySystemInformation.c)
 *     PfpCopyUserPfnPrioRequest @ 0x14075E100 (PfpCopyUserPfnPrioRequest.c)
 *     PopPreallocateHibernateMemory @ 0x1408010C4 (PopPreallocateHibernateMemory.c)
 *     PopEnableHiberFile @ 0x1408019AC (PopEnableHiberFile.c)
 *     PopAllocateHiberContext @ 0x140987F38 (PopAllocateHiberContext.c)
 *     PopBuildMemoryImageHeader @ 0x140AA1A28 (PopBuildMemoryImageHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetHighestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C673C8 + 8LL * a1) + 17032LL);
}
