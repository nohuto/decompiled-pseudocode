/*
 * XREFs of MiGetLargestPageIndex @ 0x14023A8F8
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x140968AF4 (MiAddPhysicalMemoryChunks.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140978430 (MiQueryMemoryPhysicalContiguity.c)
 *     MmBuildLargePages @ 0x14097F59C (MmBuildLargePages.c)
 *     MmManagePartitionCreateLargePages @ 0x1409824A4 (MmManagePartitionCreateLargePages.c)
 *     MiFindLargePageMemory @ 0x140982F64 (MiFindLargePageMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiGetLargestPageIndex()
{
  return (KeFeatureBits & 0x2000000000LL) == 0;
}
