/*
 * XREFs of MmFreePagesFromMdl @ 0x1402EBFB0
 * Callers:
 *     sub_1403F1A00 @ 0x1403F1A00 (sub_1403F1A00.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140933F50 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x140934238 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140934520 (HalpDmaGrowContiguousMapBuffers.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140934624 (HalpDmaGrowScatterMapBuffers.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x14094D824 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14094E028 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpWriteDumpFile @ 0x14094F484 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14094F958 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     PopFreeHiberContext @ 0x1409885F0 (PopFreeHiberContext.c)
 *     MmAllocateNonCachedMemory @ 0x140A2D910 (MmAllocateNonCachedMemory.c)
 *     MmFreeNonCachedMemory @ 0x140A2DB00 (MmFreeNonCachedMemory.c)
 *     ResFwFreeContext @ 0x140AF1ED4 (ResFwFreeContext.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x1402EBB80 (MiFreePagesFromMdl.c)
 */

void __stdcall MmFreePagesFromMdl(PMDL MemoryDescriptorList)
{
  MiFreePagesFromMdl((ULONG_PTR)MemoryDescriptorList, 0);
}
