/*
 * XREFs of ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140312480
 * Callers:
 *     MiLockSectionControlArea @ 0x1402100C8 (MiLockSectionControlArea.c)
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiGetPerfectColorHeadPage @ 0x14026DEA0 (MiGetPerfectColorHeadPage.c)
 *     MiSynchronizeFastPageInsert @ 0x14026E1A0 (MiSynchronizeFastPageInsert.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x140287B70 (MmDoesFileHaveUserWritableReferences.c)
 *     MiComputeFlushRange @ 0x140287CB8 (MiComputeFlushRange.c)
 *     MiReferenceControlArea @ 0x140288548 (MiReferenceControlArea.c)
 *     MiCopyDataPageToImagePage @ 0x14028B700 (MiCopyDataPageToImagePage.c)
 *     MiCanFileBeTruncatedInternal @ 0x14028BC30 (MiCanFileBeTruncatedInternal.c)
 *     PopPepWork @ 0x1403120EC (PopPepWork.c)
 *     MmFlushImageSection @ 0x14034E5A0 (MmFlushImageSection.c)
 *     MiDeleteEmptySubsections @ 0x140361C08 (MiDeleteEmptySubsections.c)
 *     CcBcbProfiler @ 0x1403E3520 (CcBcbProfiler.c)
 *     PspIumReplenishPartitionPages @ 0x1405A6770 (PspIumReplenishPartitionPages.c)
 *     MiDeleteCachedSegment @ 0x140623EA4 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140624098 (MiDeleteCachedSubsection.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140625118 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x14062535C (MiProcessDeleteOnClose.c)
 *     MiProcessDereferenceList @ 0x140625604 (MiProcessDereferenceList.c)
 *     MiFreezeIoPfnNode @ 0x14062E658 (MiFreezeIoPfnNode.c)
 *     MiDbgMarkPfnModified @ 0x140644120 (MiDbgMarkPfnModified.c)
 *     MiReferencePfBackedSection @ 0x14066A040 (MiReferencePfBackedSection.c)
 *     sub_14067E010 @ 0x14067E010 (sub_14067E010.c)
 *     KiForceSymbolReferences @ 0x140B95628 (KiForceSymbolReferences.c)
 * Callees:
 *     TRY_ACQUIRE_EXLOCK_EXCLUSIVE @ 0x1403124A8 (TRY_ACQUIRE_EXLOCK_EXCLUSIVE.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14046B9B6 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 ExTryAcquireSpinLockExclusiveAtDpcLevel()
{
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented();
  else
    return TRY_ACQUIRE_EXLOCK_EXCLUSIVE();
}
