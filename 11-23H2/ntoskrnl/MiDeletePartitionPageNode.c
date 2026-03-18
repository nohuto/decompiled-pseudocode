/*
 * XREFs of MiDeletePartitionPageNode @ 0x1406593C8
 * Callers:
 *     MiClearRangeInPartitionTree @ 0x14065921C (MiClearRangeInPartitionTree.c)
 *     MiDeletePartitionPageNodes @ 0x1406593F4 (MiDeletePartitionPageNodes.c)
 *     MiFreePartitionTree @ 0x140659E98 (MiFreePartitionTree.c)
 *     MiPartitionDeleteMemoryNode @ 0x14065B18C (MiPartitionDeleteMemoryNode.c)
 *     MiHotAddPartitionMemory @ 0x140A44CA0 (MiHotAddPartitionMemory.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePartitionPageNode(PVOID *P)
{
  ExFreePoolWithTag(P[5], 0);
  ExFreePoolWithTag(P, 0);
}
