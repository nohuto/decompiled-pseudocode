/*
 * XREFs of MmAllocatePagesForMdlEx @ 0x1402F89D0
 * Callers:
 *     EtwpAllocateTraceBuffer @ 0x1403716DC (EtwpAllocateTraceBuffer.c)
 *     BgpFwAllocateMemory @ 0x14038780C (BgpFwAllocateMemory.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x1403910A4 (HalpAllocateCommonBufferDmaThin.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403AC5D4 (PpmHeteroInitializeHgsSupport.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x14050F9C0 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140512920 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x1405140A8 (HalpAllocateCommonBufferDmarThin.c)
 *     PopGenerateMdl @ 0x14058EFC8 (PopGenerateMdl.c)
 *     PopGenerateScratchMdl @ 0x14058F064 (PopGenerateScratchMdl.c)
 *     ?SmStAllocatePhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x1405C09C8 (-SmStAllocatePhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     DifMmAllocatePagesForMdlExWrapper @ 0x1405E71B0 (DifMmAllocatePagesForMdlExWrapper.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x140952BC0 (IoReserveKsrPersistentMemoryEx.c)
 *     ResFwGetContext @ 0x140AF2020 (ResFwGetContext.c)
 * Callees:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1402F8A30 (MmAllocatePartitionNodePagesForMdlEx.c)
 */

PMDL __stdcall MmAllocatePagesForMdlEx(
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        PHYSICAL_ADDRESS SkipBytes,
        SIZE_T TotalBytes,
        MEMORY_CACHING_TYPE CacheType,
        ULONG Flags)
{
  return (PMDL)MmAllocatePartitionNodePagesForMdlEx(
                 LowAddress.LowPart,
                 HighAddress.LowPart,
                 SkipBytes.LowPart,
                 TotalBytes,
                 CacheType,
                 *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 138LL),
                 Flags,
                 0LL);
}
