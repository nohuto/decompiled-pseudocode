/*
 * XREFs of RtlReleaseSRWLockShared @ 0x18003AB90
 * Callers:
 *     EtwDeliverDataBlock @ 0x180007500 (EtwDeliverDataBlock.c)
 *     EtwpGetNextRegistration @ 0x180007898 (EtwpGetNextRegistration.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180016194 (EtwpCheckForPrivatePreEnable.c)
 *     TppWorkerThread @ 0x180016A00 (TppWorkerThread.c)
 *     TppPoolpReferenceGlobalPool @ 0x18001E58C (TppPoolpReferenceGlobalPool.c)
 *     RtlpHpTagReAllocateHeap @ 0x180021E40 (RtlpHpTagReAllocateHeap.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180028470 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSlotAllocate @ 0x18002A1C0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x18002D268 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpComputeDllPath @ 0x180032AE0 (RtlpComputeDllPath.c)
 *     RtlpxLookupFunctionTable @ 0x18003A100 (RtlpxLookupFunctionTable.c)
 *     LdrpGetFromMUIMemCache @ 0x18003AC48 (LdrpGetFromMUIMemCache.c)
 *     LdrpAllocateTls @ 0x180042A74 (LdrpAllocateTls.c)
 *     LdrpCallTlsInitializers @ 0x180042C6C (LdrpCallTlsInitializers.c)
 *     SbAtomicCaptureContextGuid @ 0x180052308 (SbAtomicCaptureContextGuid.c)
 *     RtlpFlsDataCleanup @ 0x180054714 (RtlpFlsDataCleanup.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x180055C78 (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpCSparseBitmapUnlock @ 0x18005656C (RtlpCSparseBitmapUnlock.c)
 *     RtlpHpLfhSubsegmentWalk @ 0x1800593B4 (RtlpHpLfhSubsegmentWalk.c)
 *     RtlpCreateWnfNameSubscription @ 0x180059EFC (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateSerializationGroup @ 0x18005A284 (RtlpCreateSerializationGroup.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18005A7BC (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpHpLfhContextCompact @ 0x18005F56C (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x18005F5FC (RtlpHpLfhOwnerCompact.c)
 *     TpTrimPools @ 0x18006AC30 (TpTrimPools.c)
 *     RtlSleepConditionVariableSRW @ 0x18006AF50 (RtlSleepConditionVariableSRW.c)
 *     TppBarrierAdjust @ 0x18006BAEC (TppBarrierAdjust.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x18007144C (TpPoolReferenceExistingGlobalPool.c)
 *     TpAllocPoolInternal @ 0x180074674 (TpAllocPoolInternal.c)
 *     LdrpFreeTls @ 0x1800771F0 (LdrpFreeTls.c)
 *     RtlpFlsFree @ 0x18007ABF0 (RtlpFlsFree.c)
 *     _LdrpInitialize @ 0x18007B2BC (_LdrpInitialize.c)
 *     RtlpHpTagQueryTags @ 0x18007DE24 (RtlpHpTagQueryTags.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x18007E2F4 (RtlpLookupDynamicFunctionEntry.c)
 *     RtlpComputeDllPathWithOptions @ 0x1800827C0 (RtlpComputeDllPathWithOptions.c)
 *     RtlCheckHeldCriticalSections @ 0x180084950 (RtlCheckHeldCriticalSections.c)
 *     RtlpComputeSearchPath @ 0x180084DD0 (RtlpComputeSearchPath.c)
 *     RtlQueryProtectedPolicy @ 0x180087FB0 (RtlQueryProtectedPolicy.c)
 *     RtlpHpLargeAllocSize @ 0x18008A334 (RtlpHpLargeAllocSize.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x18008ACC8 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpComputeExePath @ 0x18008BC10 (RtlpComputeExePath.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800922E0 (RtlpWnfRetryTimerCallback.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x180092468 (RtlpWnfCalculateAndSetNextTimer.c)
 *     RtlpFcWnfCallback @ 0x1800B12B0 (RtlpFcWnfCallback.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800E1CA4 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     RtlQueryProcessLockInformation @ 0x1800E3C20 (RtlQueryProcessLockInformation.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800EC3DC (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800F3A00 (RtlQueryCriticalSectionOwner.c)
 *     RtlPosixBarrier @ 0x1800F8B58 (RtlPosixBarrier.c)
 *     RtlQueryPointerMapping @ 0x180101360 (RtlQueryPointerMapping.c)
 *     RtlQueryPropertyStore @ 0x180101420 (RtlQueryPropertyStore.c)
 *     RtlpHpStackTraceAddStack @ 0x1801155F0 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180116020 (RtlpHpStackTraceHeapSerialize.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180116230 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHpStackTraceSerialize @ 0x1801162AC (RtlpHpStackTraceSerialize.c)
 *     EtwEnumerateProcessRegGuids @ 0x180121C10 (EtwEnumerateProcessRegGuids.c)
 *     RtlStackDbStackAdd @ 0x1801275E4 (RtlStackDbStackAdd.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x180128020 (RtlpStackDbSegmentFindOrCreate.c)
 * Callees:
 *     RtlpWakeSRWLock @ 0x18001E4A4 (RtlpWakeSRWLock.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 */

void __cdecl RtlReleaseSRWLockShared(PRTL_SRWLOCK SRWLock)
{
  signed __int64 v1; // rax
  signed __int64 v2; // r9
  signed __int64 v3; // rtt
  __int64 v4; // r8
  __int64 v5; // rdx
  signed __int64 v6; // r9
  signed __int64 v7; // rdx
  signed __int64 v8; // rtt
  _QWORD *v9; // rdx
  __int64 i; // r9

  v1 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 0LL, 17LL);
  if ( v1 == 17 )
    return;
  if ( (v1 & 1) == 0 )
    RtlRaiseStatus(-1073741212);
  if ( (v1 & 2) != 0 )
  {
LABEL_9:
    if ( (v1 & 8) != 0 )
    {
      v9 = (_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF0uLL);
      for ( i = *(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !i; i = v9[1] )
        v9 = (_QWORD *)*v9;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(i + 32), 0xFFFFFFFF) > 1 )
        return;
      v4 = -9LL;
    }
    else
    {
      v4 = -1LL;
    }
    do
    {
      v5 = v4 + 4;
      v6 = v1 & 6;
      if ( v6 != 2 )
        v5 = v4;
      v7 = v1 + v5;
      v8 = v1;
      v1 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v7, v1);
    }
    while ( v8 != v1 );
    if ( v6 == 2 )
      RtlpWakeSRWLock((volatile signed __int64 *)SRWLock, v7, 0);
    return;
  }
  while ( 1 )
  {
    v2 = 0LL;
    if ( (v1 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
      v2 = v1 - 16;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v2, v1);
    if ( v3 == v1 )
      break;
    if ( (v1 & 2) != 0 )
      goto LABEL_9;
  }
}
