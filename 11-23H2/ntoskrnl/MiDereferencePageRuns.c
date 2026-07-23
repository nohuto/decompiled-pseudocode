/*
 * XREFs of MiDereferencePageRuns @ 0x140357D68
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x1406F9F20 (MiCombineAllPhysicalMemory.c)
 *     MiGetPhysicalMemoryRanges @ 0x140834778 (MiGetPhysicalMemoryRanges.c)
 *     MmGetNodeChannelRanges @ 0x1408523E8 (MmGetNodeChannelRanges.c)
 *     MiAddPhysicalMemory @ 0x140A2B978 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140A2CEFC (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x140A2EFB8 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x140A32E90 (MiScanPagefileSpace.c)
 *     MmScrubMemory @ 0x140A46D74 (MmScrubMemory.c)
 * Callees:
 *     MiDereferencePageRunsEx @ 0x140357D84 (MiDereferencePageRunsEx.c)
 */

__int64 __fastcall MiDereferencePageRuns(__int64 a1)
{
  return MiDereferencePageRunsEx(a1, 1LL);
}
