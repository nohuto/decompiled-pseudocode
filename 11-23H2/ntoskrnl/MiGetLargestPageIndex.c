/*
 * XREFs of MiGetLargestPageIndex @ 0x1402C8C50
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x140A2C13C (MiAddPhysicalMemoryChunks.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140A3FC00 (MiQueryMemoryPhysicalContiguity.c)
 *     MmManagePartitionCreateLargePages @ 0x140A45884 (MmManagePartitionCreateLargePages.c)
 *     MmBuildLargePages @ 0x140A46218 (MmBuildLargePages.c)
 *     MiFindLargePageMemory @ 0x140A49A18 (MiFindLargePageMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiGetLargestPageIndex()
{
  return (KeFeatureBits & 0x2000000000LL) == 0;
}
