/*
 * XREFs of MmFreePagesFromMdl @ 0x140221A10
 * Callers:
 *     PpmHeteroInitializeHgsSupport @ 0x1403DCA14 (PpmHeteroInitializeHgsSupport.c)
 *     sub_1403F94E0 @ 0x1403F94E0 (sub_1403F94E0.c)
 *     HvlpWithdrawPages @ 0x14054599C (HvlpWithdrawPages.c)
 *     MmFreeSecureKernelPages @ 0x1405B1D98 (MmFreeSecureKernelPages.c)
 *     PopFreeHiberContext @ 0x140800338 (PopFreeHiberContext.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140908F2C (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x140909214 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x1409094F8 (HalpDmaGrowContiguousMapBuffers.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x1409095FC (HalpDmaGrowScatterMapBuffers.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x14093BBD8 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14093C2FC (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpWriteDumpFile @ 0x14093D590 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14093DA18 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     MmAllocateNonCachedMemory @ 0x14096A490 (MmAllocateNonCachedMemory.c)
 *     MmFreeNonCachedMemory @ 0x14096A680 (MmFreeNonCachedMemory.c)
 *     ResFwFreeContext @ 0x140AAB07C (ResFwFreeContext.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140221A30 (MiFreePagesFromMdl.c)
 */

void __stdcall MmFreePagesFromMdl(PMDL MemoryDescriptorList)
{
  MiFreePagesFromMdl((ULONG_PTR)MemoryDescriptorList);
}
