/*
 * XREFs of RtlReleaseSRWLockShared @ 0x180026E40
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x180020CE0 (RtlpxLookupFunctionTable.c)
 *     LdrpGetFromMUIMemCache @ 0x180023058 (LdrpGetFromMUIMemCache.c)
 *     LdrpAllocateTls @ 0x18002977C (LdrpAllocateTls.c)
 *     LdrpCallTlsInitializers @ 0x1800299A4 (LdrpCallTlsInitializers.c)
 *     TppPoolpReferenceGlobalPool @ 0x180031978 (TppPoolpReferenceGlobalPool.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180032398 (EtwpCheckForPrivatePreEnable.c)
 *     TppWorkerThread @ 0x180035760 (TppWorkerThread.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x18003C5F0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSlotAllocate @ 0x18003E3B0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x180041574 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpTagContextUpdate @ 0x180045E1C (RtlpHpTagContextUpdate.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x18004A8B0 (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpCSparseBitmapUnlock @ 0x18004AE04 (RtlpCSparseBitmapUnlock.c)
 *     TpAllocPoolInternal @ 0x18004C170 (TpAllocPoolInternal.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18004DD84 (RtlpWnfProcessCurrentDescriptor.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x1800502A4 (TpPoolReferenceExistingGlobalPool.c)
 *     RtlpFlsDataCleanup @ 0x180051894 (RtlpFlsDataCleanup.c)
 *     RtlpHpLfhContextCompact @ 0x18005A574 (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x18005A604 (RtlpHpLfhOwnerCompact.c)
 *     RtlpCreateWnfNameSubscription @ 0x18005BFEC (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateSerializationGroup @ 0x18005C28C (RtlpCreateSerializationGroup.c)
 *     EtwDeliverDataBlock @ 0x180061670 (EtwDeliverDataBlock.c)
 *     EtwpGetNextRegistration @ 0x180061A44 (EtwpGetNextRegistration.c)
 *     TppBarrierAdjust @ 0x180068030 (TppBarrierAdjust.c)
 *     TpTrimPools @ 0x180069420 (TpTrimPools.c)
 *     RtlSleepConditionVariableSRW @ 0x180069740 (RtlSleepConditionVariableSRW.c)
 *     RtlpComputeSearchPath @ 0x18006A120 (RtlpComputeSearchPath.c)
 *     RtlpComputeExePath @ 0x18006A1E0 (RtlpComputeExePath.c)
 *     RtlpComputeDllPathWithOptions @ 0x18006A270 (RtlpComputeDllPathWithOptions.c)
 *     RtlpComputeDllPath @ 0x18006A3B0 (RtlpComputeDllPath.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x18006D7E8 (RtlpLookupDynamicFunctionEntry.c)
 *     LdrpFreeTls @ 0x1800708CC (LdrpFreeTls.c)
 *     SbAtomicCaptureContextGuid @ 0x180070BF8 (SbAtomicCaptureContextGuid.c)
 *     RtlpFlsFree @ 0x180071670 (RtlpFlsFree.c)
 *     _LdrpInitialize @ 0x180073F6C (_LdrpInitialize.c)
 *     RtlCheckHeldCriticalSections @ 0x180081140 (RtlCheckHeldCriticalSections.c)
 *     RtlQueryProtectedPolicy @ 0x180084650 (RtlQueryProtectedPolicy.c)
 *     RtlpHpLargeAllocSize @ 0x18008777C (RtlpHpLargeAllocSize.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x180087C0C (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpTagQueryTags @ 0x18008B400 (RtlpHpTagQueryTags.c)
 *     RtlpHpLfhSubsegmentWalk @ 0x18008B5F4 (RtlpHpLfhSubsegmentWalk.c)
 *     RtlpFcWnfCallback @ 0x1800AEDA0 (RtlpFcWnfCallback.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800E04B4 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     RtlQueryProcessLockInformation @ 0x1800E2900 (RtlQueryProcessLockInformation.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800E8D88 (RtlpWnfCalculateAndSetNextTimer.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800E9310 (RtlpWnfRetryTimerCallback.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800EBC94 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800F3720 (RtlQueryCriticalSectionOwner.c)
 *     RtlPosixBarrier @ 0x1800F8D98 (RtlPosixBarrier.c)
 *     RtlQueryPointerMapping @ 0x180101040 (RtlQueryPointerMapping.c)
 *     RtlQueryPropertyStore @ 0x180101100 (RtlQueryPropertyStore.c)
 *     RtlpHpStackTraceAddStack @ 0x1801159D0 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180116410 (RtlpHpStackTraceHeapSerialize.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180116620 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHpStackTraceSerialize @ 0x18011669C (RtlpHpStackTraceSerialize.c)
 *     EtwEnumerateProcessRegGuids @ 0x1801238E0 (EtwEnumerateProcessRegGuids.c)
 *     RtlStackDbStackAdd @ 0x18012C234 (RtlStackDbStackAdd.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x18012CC68 (RtlpStackDbSegmentFindOrCreate.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 */

signed __int64 __fastcall RtlReleaseSRWLockShared(volatile signed __int64 *a1)
{
  signed __int64 result; // rax
  signed __int64 v3; // r8
  signed __int64 v4; // rtt
  __int64 v5; // r8
  __int64 v6; // rdx
  signed __int64 v7; // rcx
  signed __int64 v8; // rdx
  signed __int64 v9; // rtt
  _QWORD *i; // rcx
  __int64 v11; // rdx

  result = _InterlockedCompareExchange64(a1, 0LL, 17LL);
  if ( result != 17 )
  {
    if ( (result & 1) == 0 )
      RtlRaiseStatus(3221226084LL);
    while ( (result & 2) == 0 )
    {
      v3 = 0LL;
      if ( (result & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
        v3 = result - 16;
      v4 = result;
      result = _InterlockedCompareExchange64(a1, v3, result);
      if ( v4 == result )
        return result;
    }
    if ( (result & 8) != 0 )
    {
      for ( i = (_QWORD *)(result & 0xFFFFFFFFFFFFFFF0uLL); ; i = (_QWORD *)*i )
      {
        v11 = i[1];
        if ( v11 )
          break;
      }
      if ( _InterlockedDecrement((volatile signed __int32 *)(v11 + 32)) > 0 )
        return result;
      v5 = -9LL;
    }
    else
    {
      v5 = -1LL;
    }
    do
    {
      v6 = v5 + 4;
      v7 = result & 6;
      if ( v7 != 2 )
        v6 = v5;
      v8 = result + v6;
      v9 = result;
      result = _InterlockedCompareExchange64(a1, v8, result);
    }
    while ( v9 != result );
    if ( v7 == 2 )
      return RtlpWakeSRWLock(a1, v8, 0LL);
  }
  return result;
}
