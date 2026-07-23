/*
 * XREFs of MiPageToNode @ 0x140617D40
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x140A2C13C (MiAddPhysicalMemoryChunks.c)
 *     MiMapNewPfns @ 0x140A2CBC0 (MiMapNewPfns.c)
 *     MiAddRuns @ 0x140A2DFA4 (MiAddRuns.c)
 *     MiZeroHugeRangeCore @ 0x140A2E1AC (MiZeroHugeRangeCore.c)
 *     MiMapSystemImageWithLargePage @ 0x140A49E14 (MiMapSystemImageWithLargePage.c)
 *     MiCreateKernelHalSlabRange @ 0x140B466A0 (MiCreateKernelHalSlabRange.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x14026ED60 (MiSearchNumaNodeTable.c)
 */

__int64 __fastcall MiPageToNode(ULONG_PTR a1)
{
  return *((unsigned int *)MiSearchNumaNodeTable(a1) + 2);
}
