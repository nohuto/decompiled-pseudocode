/*
 * XREFs of MmGetHighestPhysicalPage @ 0x1402F8938
 * Callers:
 *     ExpQuerySystemInformation @ 0x140726850 (ExpQuerySystemInformation.c)
 *     PfpCopyUserPfnPrioRequest @ 0x14075DF10 (PfpCopyUserPfnPrioRequest.c)
 *     PopPreallocateHibernateMemory @ 0x140800DF4 (PopPreallocateHibernateMemory.c)
 *     PopEnableHiberFile @ 0x1408016DC (PopEnableHiberFile.c)
 *     PopAllocateHiberContext @ 0x140987D38 (PopAllocateHiberContext.c)
 *     PopBuildMemoryImageHeader @ 0x140AA1BB8 (PopBuildMemoryImageHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetHighestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C673C8 + 8LL * a1) + 17032LL);
}
