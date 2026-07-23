/*
 * XREFs of MmFreePagesFromMdl @ 0x1402EC240
 * Callers:
 *     sub_1403F1BE0 @ 0x1403F1BE0 (sub_1403F1BE0.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140934150 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x140934438 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140934720 (HalpDmaGrowContiguousMapBuffers.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140934824 (HalpDmaGrowScatterMapBuffers.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x14094DA24 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14094E228 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpWriteDumpFile @ 0x14094F684 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14094FB58 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     PopFreeHiberContext @ 0x1409887F0 (PopFreeHiberContext.c)
 *     MmAllocateNonCachedMemory @ 0x140A2DBC0 (MmAllocateNonCachedMemory.c)
 *     MmFreeNonCachedMemory @ 0x140A2DDB0 (MmFreeNonCachedMemory.c)
 *     ResFwFreeContext @ 0x140AF1EE4 (ResFwFreeContext.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x1402EBE10 (MiFreePagesFromMdl.c)
 */

void __stdcall MmFreePagesFromMdl(PMDL MemoryDescriptorList)
{
  MiFreePagesFromMdl((ULONG_PTR)MemoryDescriptorList, 0);
}
