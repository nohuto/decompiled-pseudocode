/*
 * XREFs of KeAbPreWait @ 0x1402FD270
 * Callers:
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     MiReferenceControlArea @ 0x1402882B8 (MiReferenceControlArea.c)
 *     MiLockControlAreaSectionExtend @ 0x140293144 (MiLockControlAreaSectionExtend.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402EF008 (MiWaitForCollidedFaultComplete.c)
 *     ExpAcquireFastMutexContended @ 0x1402FCD4C (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD040 (ExfAcquirePushLockSharedEx.c)
 *     KeWaitForMultipleObjects @ 0x1403111A0 (KeWaitForMultipleObjects.c)
 *     KiWaitForAllObjects @ 0x14034AEFC (KiWaitForAllObjects.c)
 *     ExAcquireFastResourceShared @ 0x1403C9180 (ExAcquireFastResourceShared.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x1403C98E0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x1403C9DC0 (ExAcquireFastResourceExclusive.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x14041478C (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140414B10 (ExpAcquireFastResourceSharedSlow.c)
 *     MiChangingSubsectionProtos @ 0x14063BDF4 (MiChangingSubsectionProtos.c)
 *     MiWaitForExtentDeletions @ 0x140640274 (MiWaitForExtentDeletions.c)
 *     PfpPrefetchSharedConflictNotifyStart @ 0x140682F80 (PfpPrefetchSharedConflictNotifyStart.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140765200 (IopWaitAndAcquireFileObjectLock.c)
 *     CmpWaitOnHiveWriteQueue @ 0x1408604D8 (CmpWaitOnHiveWriteQueue.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140A730B0 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14024B550 (KiAbEntryRemoveFromTree.c)
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
