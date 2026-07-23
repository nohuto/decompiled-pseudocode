/*
 * XREFs of MiDeletePartitionPageNode @ 0x140659918
 * Callers:
 *     MiClearRangeInPartitionTree @ 0x14065976C (MiClearRangeInPartitionTree.c)
 *     MiDeletePartitionPageNodes @ 0x140659944 (MiDeletePartitionPageNodes.c)
 *     MiFreePartitionTree @ 0x14065A3E8 (MiFreePartitionTree.c)
 *     MiPartitionDeleteMemoryNode @ 0x14065B6DC (MiPartitionDeleteMemoryNode.c)
 *     MiHotAddPartitionMemory @ 0x140A44F50 (MiHotAddPartitionMemory.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePartitionPageNode(PVOID *P)
{
  ExFreePoolWithTag(P[5], 0);
  ExFreePoolWithTag(P, 0);
}
