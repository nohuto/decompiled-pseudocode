/*
 * XREFs of MiHugePagesSupported @ 0x1403C7A84
 * Callers:
 *     MiAllocateVirtualMemoryPrepare @ 0x1406F6DC0 (MiAllocateVirtualMemoryPrepare.c)
 *     MiInitializeCreateSectionPacket @ 0x140723210 (MiInitializeCreateSectionPacket.c)
 *     MiAllocateUserPhysicalPages @ 0x140A40608 (MiAllocateUserPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x140A44F50 (MiHotAddPartitionMemory.c)
 *     MmManagePartitionMoveMemory @ 0x140A45A68 (MmManagePartitionMoveMemory.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MiHugePagesSupported()
{
  return ((unsigned __int64)KeFeatureBits >> 37) & 1;
}
