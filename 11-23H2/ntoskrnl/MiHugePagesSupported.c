/*
 * XREFs of MiHugePagesSupported @ 0x1403C78A4
 * Callers:
 *     MiAllocateVirtualMemoryPrepare @ 0x1406F6BB0 (MiAllocateVirtualMemoryPrepare.c)
 *     MiInitializeCreateSectionPacket @ 0x140723010 (MiInitializeCreateSectionPacket.c)
 *     MiAllocateUserPhysicalPages @ 0x140A40358 (MiAllocateUserPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x140A44CA0 (MiHotAddPartitionMemory.c)
 *     MmManagePartitionMoveMemory @ 0x140A457B8 (MmManagePartitionMoveMemory.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MiHugePagesSupported()
{
  return ((unsigned __int64)KeFeatureBits >> 37) & 1;
}
