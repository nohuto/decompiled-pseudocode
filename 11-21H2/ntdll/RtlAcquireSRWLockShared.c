/*
 * XREFs of RtlAcquireSRWLockShared @ 0x18003A9D0
 * Callers:
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
 *     RtlpCSparseBitmapLock @ 0x180056664 (RtlpCSparseBitmapLock.c)
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
 *     LdrpLockTlsDelayedReclaimTable @ 0x1800E1C5C (LdrpLockTlsDelayedReclaimTable.c)
 *     RtlQueryProcessLockInformation @ 0x1800E3C20 (RtlQueryProcessLockInformation.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800EC3DC (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlPosixBarrier @ 0x1800F8B58 (RtlPosixBarrier.c)
 *     RtlQueryPointerMapping @ 0x180101360 (RtlQueryPointerMapping.c)
 *     RtlQueryPropertyStore @ 0x180101420 (RtlQueryPropertyStore.c)
 *     RtlpHpStackTraceAddStack @ 0x1801155F0 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180116020 (RtlpHpStackTraceHeapSerialize.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180116230 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHpStackTraceSerialize @ 0x1801162AC (RtlpHpStackTraceSerialize.c)
 *     RtlStackDbStackAdd @ 0x1801275E4 (RtlStackDbStackAdd.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x180128020 (RtlpStackDbSegmentFindOrCreate.c)
 * Callees:
 *     RtlpWaitCouldDeadlock @ 0x18001B630 (RtlpWaitCouldDeadlock.c)
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlpOptimizeSRWLockList @ 0x18007BDD8 (RtlpOptimizeSRWLockList.c)
 *     ZwTerminateProcess @ 0x1800A45F0 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A7BE0 (NtWaitForAlertByThreadId.c)
 */

void __cdecl RtlAcquireSRWLockShared(PRTL_SRWLOCK SRWLock)
{
  unsigned __int64 Value; // rdi
  __int64 v3; // rbx
  signed __int64 v4; // rcx
  bool v5; // cl
  char *v6; // rdx
  bool v7; // zf
  signed __int64 v8; // rax
  int i; // edx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 *v16; // [rsp+28h] [rbp-40h]
  __int64 v17; // [rsp+30h] [rbp-38h]
  void *UniqueThread; // [rsp+38h] [rbp-30h]
  int v19; // [rsp+40h] [rbp-28h]
  signed __int32 v20[9]; // [rsp+44h] [rbp-24h] BYREF
  unsigned int v21; // [rsp+70h] [rbp+8h] BYREF

  v21 = 0;
  Value = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 17LL, 0LL);
  if ( Value )
  {
    while ( 1 )
    {
      if ( (Value & 1) != 0 )
      {
        v3 = (Value >> 1) & 1;
        if ( !(_DWORD)v3 && (Value & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
          goto LABEL_5;
        if ( RtlpWaitCouldDeadlock() )
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
        UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
        v5 = 0;
        v20[0] = 2;
        v17 = 0LL;
        if ( (_DWORD)v3 )
        {
          v16 = 0LL;
          v19 = -1;
          v15 = Value & 0xFFFFFFFFFFFFFFF0uLL;
          v6 = (char *)((unsigned __int64)&v15 | Value & 8 | 7);
          v5 = (Value & 4) == 0;
        }
        else
        {
          v19 = -2;
          v16 = &v15;
          v6 = (char *)&v15 + 3;
        }
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, (signed __int64)v6, Value);
        v7 = Value == v8;
        Value = v8;
        if ( !v7 )
          goto LABEL_14;
        if ( v5 )
          RtlpOptimizeSRWLockList(SRWLock);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          if ( MEMORY[0x7FFE0297] )
          {
            v11 = __rdtsc();
            v12 = v11 + (unsigned int)SRWLockSpinCycleCount;
            while ( 1 )
            {
              __asm { monitorx rax, rcx, rdx }
              if ( (v20[0] & 2) == 0 )
                break;
              v13 = v11;
              v14 = __rdtsc();
              v11 = v14;
              if ( v14 <= v13 || v14 >= v12 )
                break;
              __asm { mwaitx  rax, rcx, rbx }
            }
          }
          else
          {
            for ( i = 0; (v20[0] & 2) != 0 && i != SRWLockSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6]; ++i )
              _mm_pause();
          }
        }
        if ( _interlockedbittestandreset(v20, 1u) )
        {
          do
            NtWaitForAlertByThreadId(SRWLock, 0LL);
          while ( (v20[0] & 4) == 0 );
        }
      }
      else
      {
        v3 = (Value >> 1) & 1;
LABEL_5:
        v4 = (Value | 1) + 16;
        if ( v3 )
          v4 = Value | 1;
        if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v4, Value) )
          return;
LABEL_14:
        RtlBackoff(&v21);
        _m_prefetchw(SRWLock);
        Value = SRWLock->Value;
      }
    }
  }
}
