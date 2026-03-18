/*
 * XREFs of MiPageToNode @ 0x1406177F0
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x140A2BE8C (MiAddPhysicalMemoryChunks.c)
 *     MiMapNewPfns @ 0x140A2C910 (MiMapNewPfns.c)
 *     MiAddRuns @ 0x140A2DCF4 (MiAddRuns.c)
 *     MiZeroHugeRangeCore @ 0x140A2DEFC (MiZeroHugeRangeCore.c)
 *     MiMapSystemImageWithLargePage @ 0x140A49B64 (MiMapSystemImageWithLargePage.c)
 *     MiCreateKernelHalSlabRange @ 0x140B466A0 (MiCreateKernelHalSlabRange.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x14026EAD0 (MiSearchNumaNodeTable.c)
 */

__int64 __fastcall MiPageToNode(ULONG_PTR a1)
{
  return *((unsigned int *)MiSearchNumaNodeTable(a1) + 2);
}
