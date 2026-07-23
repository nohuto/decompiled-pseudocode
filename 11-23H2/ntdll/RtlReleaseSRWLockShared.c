/*
 * XREFs of RtlReleaseSRWLockShared @ 0x180026CF0
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x180020B00 (RtlpxLookupFunctionTable.c)
 *     LdrpGetFromMUIMemCache @ 0x180022F48 (LdrpGetFromMUIMemCache.c)
 *     LdrpAllocateTls @ 0x1800295AC (LdrpAllocateTls.c)
 *     LdrpCallTlsInitializers @ 0x1800297D4 (LdrpCallTlsInitializers.c)
 *     TppPoolpReferenceGlobalPool @ 0x180031818 (TppPoolpReferenceGlobalPool.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180032238 (EtwpCheckForPrivatePreEnable.c)
 *     TppWorkerThread @ 0x180035600 (TppWorkerThread.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x18003C490 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSlotAllocate @ 0x18003E250 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x180041414 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpTagContextUpdate @ 0x180045CBC (RtlpHpTagContextUpdate.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x18004A750 (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpCSparseBitmapUnlock @ 0x18004ACA4 (RtlpCSparseBitmapUnlock.c)
 *     TpAllocPoolInternal @ 0x18004C010 (TpAllocPoolInternal.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18004DC24 (RtlpWnfProcessCurrentDescriptor.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x180050144 (TpPoolReferenceExistingGlobalPool.c)
 *     RtlpFlsDataCleanup @ 0x180051734 (RtlpFlsDataCleanup.c)
 *     EtwDeliverDataBlock @ 0x18005E7E0 (EtwDeliverDataBlock.c)
 *     EtwpGetNextRegistration @ 0x18005EBB4 (EtwpGetNextRegistration.c)
 *     RtlpHpLfhContextCompact @ 0x18005FD44 (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x18005FDD4 (RtlpHpLfhOwnerCompact.c)
 *     RtlpCreateWnfNameSubscription @ 0x1800617BC (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateSerializationGroup @ 0x180061A5C (RtlpCreateSerializationGroup.c)
 *     TppBarrierAdjust @ 0x180068010 (TppBarrierAdjust.c)
 *     TpTrimPools @ 0x180069400 (TpTrimPools.c)
 *     RtlSleepConditionVariableSRW @ 0x180069720 (RtlSleepConditionVariableSRW.c)
 *     RtlpComputeSearchPath @ 0x18006A100 (RtlpComputeSearchPath.c)
 *     RtlpComputeExePath @ 0x18006A1C0 (RtlpComputeExePath.c)
 *     RtlpComputeDllPathWithOptions @ 0x18006A250 (RtlpComputeDllPathWithOptions.c)
 *     RtlpComputeDllPath @ 0x18006A390 (RtlpComputeDllPath.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x18006D7E8 (RtlpLookupDynamicFunctionEntry.c)
 *     LdrpFreeTls @ 0x1800708CC (LdrpFreeTls.c)
 *     SbAtomicCaptureContextGuid @ 0x180070E98 (SbAtomicCaptureContextGuid.c)
 *     RtlpFlsFree @ 0x180071990 (RtlpFlsFree.c)
 *     _LdrpInitialize @ 0x1800745DC (_LdrpInitialize.c)
 *     RtlCheckHeldCriticalSections @ 0x1800817B0 (RtlCheckHeldCriticalSections.c)
 *     RtlQueryProtectedPolicy @ 0x180084E50 (RtlQueryProtectedPolicy.c)
 *     RtlpHpLargeAllocSize @ 0x180087F7C (RtlpHpLargeAllocSize.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x18008840C (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpTagQueryTags @ 0x18008BC00 (RtlpHpTagQueryTags.c)
 *     RtlpHpLfhSubsegmentWalk @ 0x18008BDF4 (RtlpHpLfhSubsegmentWalk.c)
 *     RtlGetFeatureToggleConfiguration @ 0x18009F5C0 (RtlGetFeatureToggleConfiguration.c)
 *     RtlpFcWnfCallback @ 0x1800B0E70 (RtlpFcWnfCallback.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800E17E4 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     RtlQueryProcessLockInformation @ 0x1800E3C30 (RtlQueryProcessLockInformation.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800EA0B8 (RtlpWnfCalculateAndSetNextTimer.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800EA640 (RtlpWnfRetryTimerCallback.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800ECFCC (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800F4B30 (RtlQueryCriticalSectionOwner.c)
 *     RtlPosixBarrier @ 0x1800FA1A8 (RtlPosixBarrier.c)
 *     RtlQueryPointerMapping @ 0x180102450 (RtlQueryPointerMapping.c)
 *     RtlQueryPropertyStore @ 0x180102510 (RtlQueryPropertyStore.c)
 *     RtlpHpStackTraceAddStack @ 0x180116E50 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180117890 (RtlpHpStackTraceHeapSerialize.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180117AA0 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHpStackTraceSerialize @ 0x180117B1C (RtlpHpStackTraceSerialize.c)
 *     EtwEnumerateProcessRegGuids @ 0x180124D60 (EtwEnumerateProcessRegGuids.c)
 *     RtlStackDbStackAdd @ 0x18012D754 (RtlStackDbStackAdd.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x18012E188 (RtlpStackDbSegmentFindOrCreate.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 */

void __cdecl RtlReleaseSRWLockShared(PRTL_SRWLOCK SRWLock)
{
  signed __int64 v2; // rax
  signed __int64 v3; // r8
  signed __int64 v4; // rtt
  __int64 v5; // r8
  __int64 v6; // rdx
  signed __int64 v7; // rcx
  signed __int64 v8; // rdx
  signed __int64 v9; // rtt
  _QWORD *i; // rcx
  __int64 v11; // rdx

  v2 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 0LL, 17LL);
  if ( v2 != 17 )
  {
    if ( (v2 & 1) == 0 )
      RtlRaiseStatus(-1073741212);
    while ( (v2 & 2) == 0 )
    {
      v3 = 0LL;
      if ( (v2 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
        v3 = v2 - 16;
      v4 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v3, v2);
      if ( v4 == v2 )
        return;
    }
    if ( (v2 & 8) != 0 )
    {
      for ( i = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0uLL); ; i = (_QWORD *)*i )
      {
        v11 = i[1];
        if ( v11 )
          break;
      }
      if ( _InterlockedDecrement((volatile signed __int32 *)(v11 + 32)) > 0 )
        return;
      v5 = -9LL;
    }
    else
    {
      v5 = -1LL;
    }
    do
    {
      v6 = v5 + 4;
      v7 = v2 & 6;
      if ( v7 != 2 )
        v6 = v5;
      v8 = v2 + v6;
      v9 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v8, v2);
    }
    while ( v9 != v2 );
    if ( v7 == 2 )
      RtlpWakeSRWLock(SRWLock, v8, 0LL);
  }
}
