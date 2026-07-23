/*
 * XREFs of KeAbPreWait @ 0x1402FD500
 * Callers:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     MiReferenceControlArea @ 0x140288548 (MiReferenceControlArea.c)
 *     MiLockControlAreaSectionExtend @ 0x1402933D4 (MiLockControlAreaSectionExtend.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402EF298 (MiWaitForCollidedFaultComplete.c)
 *     ExpAcquireFastMutexContended @ 0x1402FCFDC (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     KeWaitForMultipleObjects @ 0x140311430 (KeWaitForMultipleObjects.c)
 *     KiWaitForAllObjects @ 0x14034B09C (KiWaitForAllObjects.c)
 *     ExAcquireFastResourceShared @ 0x1403C9360 (ExAcquireFastResourceShared.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x1403C9AC0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x1403C9FA0 (ExAcquireFastResourceExclusive.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x140414B20 (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140414EA4 (ExpAcquireFastResourceSharedSlow.c)
 *     MiChangingSubsectionProtos @ 0x14063C344 (MiChangingSubsectionProtos.c)
 *     MiWaitForExtentDeletions @ 0x1406407C4 (MiWaitForExtentDeletions.c)
 *     PfpPrefetchSharedConflictNotifyStart @ 0x140682F80 (PfpPrefetchSharedConflictNotifyStart.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1407653F0 (IopWaitAndAcquireFileObjectLock.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140860718 (CmpWaitOnHiveWriteQueue.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140A73360 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14024B620 (KiAbEntryRemoveFromTree.c)
 */

char __fastcall KeAbPreWait(__int64 *a1)
{
  char result; // al

  *(_BYTE *)a1 |= 2u;
  if ( *a1 < 0 )
    KiAbEntryRemoveFromTree((__int64)a1);
  *((_BYTE *)a1 + 17) = 1;
  result = *(_BYTE *)a1 & 0xFD;
  *(_BYTE *)a1 = result;
  return result;
}
