/*
 * XREFs of KeAbPreWait @ 0x1402FD270
 * Callers:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     MiReferenceControlArea @ 0x140288198 (MiReferenceControlArea.c)
 *     MiLockControlAreaSectionExtend @ 0x140293024 (MiLockControlAreaSectionExtend.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402EF008 (MiWaitForCollidedFaultComplete.c)
 *     ExpAcquireFastMutexContended @ 0x1402FCD4C (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD040 (ExfAcquirePushLockSharedEx.c)
 *     KeWaitForMultipleObjects @ 0x140310FC0 (KeWaitForMultipleObjects.c)
 *     KiWaitForAllObjects @ 0x14034A8FC (KiWaitForAllObjects.c)
 *     ExAcquireFastResourceShared @ 0x1403C8B20 (ExAcquireFastResourceShared.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x1403C9280 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x1403C9760 (ExAcquireFastResourceExclusive.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1404140DC (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140414460 (ExpAcquireFastResourceSharedSlow.c)
 *     MiChangingSubsectionProtos @ 0x14063BE64 (MiChangingSubsectionProtos.c)
 *     MiWaitForExtentDeletions @ 0x1406402E4 (MiWaitForExtentDeletions.c)
 *     PfpPrefetchSharedConflictNotifyStart @ 0x140682F80 (PfpPrefetchSharedConflictNotifyStart.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140765710 (IopWaitAndAcquireFileObjectLock.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140860638 (CmpWaitOnHiveWriteQueue.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140A73120 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14024B530 (KiAbEntryRemoveFromTree.c)
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
