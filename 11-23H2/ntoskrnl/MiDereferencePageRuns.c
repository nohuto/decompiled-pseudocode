/*
 * XREFs of MiDereferencePageRuns @ 0x140357BC8
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x1406F9D10 (MiCombineAllPhysicalMemory.c)
 *     MiGetPhysicalMemoryRanges @ 0x140834478 (MiGetPhysicalMemoryRanges.c)
 *     MmGetNodeChannelRanges @ 0x1408520E8 (MmGetNodeChannelRanges.c)
 *     MiAddPhysicalMemory @ 0x140A2B6C8 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140A2CC4C (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x140A2ED08 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x140A32BE0 (MiScanPagefileSpace.c)
 *     MmScrubMemory @ 0x140A46AC4 (MmScrubMemory.c)
 * Callees:
 *     MiDereferencePageRunsEx @ 0x140357BE4 (MiDereferencePageRunsEx.c)
 */

__int64 __fastcall MiDereferencePageRuns(__int64 a1)
{
  return MiDereferencePageRunsEx(a1, 1LL);
}
