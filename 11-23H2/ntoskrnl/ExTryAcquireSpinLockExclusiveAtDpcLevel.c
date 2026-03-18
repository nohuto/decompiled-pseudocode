/*
 * XREFs of ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1403121F0
 * Callers:
 *     MiLockSectionControlArea @ 0x1402100C8 (MiLockSectionControlArea.c)
 *     MiLockPageTableInternal @ 0x140237700 (MiLockPageTableInternal.c)
 *     MiGetPerfectColorHeadPage @ 0x14026DC10 (MiGetPerfectColorHeadPage.c)
 *     MiSynchronizeFastPageInsert @ 0x14026DF10 (MiSynchronizeFastPageInsert.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x1402878E0 (MmDoesFileHaveUserWritableReferences.c)
 *     MiComputeFlushRange @ 0x140287A28 (MiComputeFlushRange.c)
 *     MiReferenceControlArea @ 0x1402882B8 (MiReferenceControlArea.c)
 *     MiCopyDataPageToImagePage @ 0x14028B470 (MiCopyDataPageToImagePage.c)
 *     MiCanFileBeTruncatedInternal @ 0x14028B9A0 (MiCanFileBeTruncatedInternal.c)
 *     PopPepWork @ 0x140311E5C (PopPepWork.c)
 *     MmFlushImageSection @ 0x14034E400 (MmFlushImageSection.c)
 *     MiDeleteEmptySubsections @ 0x140361A68 (MiDeleteEmptySubsections.c)
 *     CcBcbProfiler @ 0x1403E3340 (CcBcbProfiler.c)
 *     PspIumReplenishPartitionPages @ 0x1405A6200 (PspIumReplenishPartitionPages.c)
 *     MiDeleteCachedSegment @ 0x140623954 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140623B48 (MiDeleteCachedSubsection.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140624BC8 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x140624E0C (MiProcessDeleteOnClose.c)
 *     MiProcessDereferenceList @ 0x1406250B4 (MiProcessDereferenceList.c)
 *     MiFreezeIoPfnNode @ 0x14062E108 (MiFreezeIoPfnNode.c)
 *     MiDbgMarkPfnModified @ 0x140643BD0 (MiDbgMarkPfnModified.c)
 *     MiReferencePfBackedSection @ 0x140669AF0 (MiReferencePfBackedSection.c)
 *     sub_14067E010 @ 0x14067E010 (sub_14067E010.c)
 *     KiForceSymbolReferences @ 0x140B95628 (KiForceSymbolReferences.c)
 * Callees:
 *     TRY_ACQUIRE_EXLOCK_EXCLUSIVE @ 0x140312218 (TRY_ACQUIRE_EXLOCK_EXCLUSIVE.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14046B5B6 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 ExTryAcquireSpinLockExclusiveAtDpcLevel()
{
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented();
  else
    return TRY_ACQUIRE_EXLOCK_EXCLUSIVE();
}
