/*
 * XREFs of KeAbPostReleaseEx @ 0x140353BB0
 * Callers:
 *     KiWaitForAllObjects @ 0x1402175B8 (KiWaitForAllObjects.c)
 *     ExTryAcquirePushLockSharedEx @ 0x140220540 (ExTryAcquirePushLockSharedEx.c)
 *     MiLockControlAreaSectionExtend @ 0x14022CA54 (MiLockControlAreaSectionExtend.c)
 *     ExTryToAcquireFastMutex @ 0x140233370 (ExTryToAcquireFastMutex.c)
 *     MiTryLockVad @ 0x140259A00 (MiTryLockVad.c)
 *     MiWaitForCollidedFaultComplete @ 0x14027FEF8 (MiWaitForCollidedFaultComplete.c)
 *     MiReferenceControlArea @ 0x140287C84 (MiReferenceControlArea.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     MiCoalesceFreePages @ 0x1402C7DF0 (MiCoalesceFreePages.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x1402F62C0 (ExTryAcquirePushLockExclusiveEx.c)
 *     MiLockAddressSpaceToo @ 0x140310450 (MiLockAddressSpaceToo.c)
 *     PfLockSharedTryAcquire @ 0x140360258 (PfLockSharedTryAcquire.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x14037CE7C (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     ExAcquireFastResourceShared @ 0x14039B6B0 (ExAcquireFastResourceShared.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14039BA90 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x14039BDE0 (ExAcquireFastResourceExclusive.c)
 *     ExDisownFastResource @ 0x14039C100 (ExDisownFastResource.c)
 *     ExpReleaseFastResourceShared @ 0x14039D010 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x14039D3E4 (ExpReleaseFastResourceExclusive.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x14039E320 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x14039E660 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     IopProcessIoTracking @ 0x140559C3C (IopProcessIoTracking.c)
 *     MiChangingSubsectionProtos @ 0x14059D69C (MiChangingSubsectionProtos.c)
 *     MiWaitForExtentDeletions @ 0x1405A1AE8 (MiWaitForExtentDeletions.c)
 *     MiProcessTransitionHeatBatch @ 0x1405B7EB4 (MiProcessTransitionHeatBatch.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x14063C300 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x14063C3D0 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x140661FA0 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     ObpLockUnrelatedDirectoryShared @ 0x14069A534 (ObpLockUnrelatedDirectoryShared.c)
 *     CmpTryToLockKcbExclusive @ 0x1406D1790 (CmpTryToLockKcbExclusive.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1406DA700 (CmpTryToLockHashEntryExclusive.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140709FAC (IopWaitAndAcquireFileObjectLock.c)
 *     ObpCloseHandle @ 0x140734160 (ObpCloseHandle.c)
 *     ObpDeleteNameCheck @ 0x1407A3190 (ObpDeleteNameCheck.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x1407A91A0 (AlpcpTryLockForCachedReferenceBlob.c)
 *     CmpCreateKeyControlBlock @ 0x1407C3850 (CmpCreateKeyControlBlock.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1408654C0 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140919170 (CmpWaitOnHiveWriteQueue.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140927128 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     KiForceSymbolReferences @ 0x140B50C78 (KiForceSymbolReferences.c)
 * Callees:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x140351DF0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall KeAbPostReleaseEx(ULONG_PTR BugCheckParameter2, unsigned __int64 a2)
{
  unsigned __int64 v2; // r10
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v4; // r8

  v2 = a2;
  if ( (a2 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = 96LL * (unsigned __int8)(v2 >> 1);
    v2 = (unsigned __int64)&CurrentThread[1].Process + v4;
    if ( (*(_QWORD *)v2 & 0x7FFFFFFFFFFFFFFCLL | 0x8000000000000000uLL) != BugCheckParameter2 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, (ULONG_PTR)&CurrentThread[1].Process + v4, 0LL);
  }
  else
  {
    CurrentThread = (struct _KTHREAD *)(a2 - 96LL * *(unsigned __int8 *)(a2 + 16) - 1696);
  }
  _disable();
  *(_BYTE *)(v2 + 18) = 0;
  return KiAbEntryFreeAndEnableInterrupts(v2, (ULONG_PTR)CurrentThread, BugCheckParameter2, 1);
}
