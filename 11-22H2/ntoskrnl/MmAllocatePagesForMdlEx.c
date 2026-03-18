/*
 * XREFs of MmAllocatePagesForMdlEx @ 0x1402F8740
 * Callers:
 *     EtwpAllocateTraceBuffer @ 0x140370EEC (EtwpAllocateTraceBuffer.c)
 *     BgpFwAllocateMemory @ 0x14038682C (BgpFwAllocateMemory.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x14038F344 (HalpAllocateCommonBufferDmaThin.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403ABC14 (PpmHeteroInitializeHgsSupport.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x14050F530 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140512490 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x140513C18 (HalpAllocateCommonBufferDmarThin.c)
 *     PopGenerateMdl @ 0x14058EB68 (PopGenerateMdl.c)
 *     PopGenerateScratchMdl @ 0x14058EC04 (PopGenerateScratchMdl.c)
 *     ?SmStAllocatePhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x1405C04E8 (-SmStAllocatePhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     DifMmAllocatePagesForMdlExWrapper @ 0x1405E6CD0 (DifMmAllocatePagesForMdlExWrapper.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x140952A70 (IoReserveKsrPersistentMemoryEx.c)
 *     ResFwGetContext @ 0x140AF3010 (ResFwGetContext.c)
 * Callees:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1402F87A0 (MmAllocatePartitionNodePagesForMdlEx.c)
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
