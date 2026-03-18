/*
 * XREFs of MiGetLargestPageIndex @ 0x1402C89C0
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x140A2BE8C (MiAddPhysicalMemoryChunks.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140A3F950 (MiQueryMemoryPhysicalContiguity.c)
 *     MmManagePartitionCreateLargePages @ 0x140A455D4 (MmManagePartitionCreateLargePages.c)
 *     MmBuildLargePages @ 0x140A45F68 (MmBuildLargePages.c)
 *     MiFindLargePageMemory @ 0x140A49768 (MiFindLargePageMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiGetLargestPageIndex()
{
  return (KeFeatureBits & 0x2000000000LL) == 0;
}
