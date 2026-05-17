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

signed __int64 __fastcall RtlAcquireSRWLockShared(volatile signed __int64 *a1)
{
  signed __int64 result; // rax
  unsigned __int64 v3; // rdi
  __int64 v4; // rbx
  signed __int64 v5; // rcx
  bool v6; // cl
  char *v7; // rdx
  bool v8; // zf
  signed __int64 v9; // rax
  int i; // edx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 *v17; // [rsp+28h] [rbp-40h]
  __int64 v18; // [rsp+30h] [rbp-38h]
  void *UniqueThread; // [rsp+38h] [rbp-30h]
  int v20; // [rsp+40h] [rbp-28h]
  signed __int32 v21[9]; // [rsp+44h] [rbp-24h] BYREF
  unsigned int v22; // [rsp+70h] [rbp+8h] BYREF

  v22 = 0;
  result = _InterlockedCompareExchange64(a1, 17LL, 0LL);
  v3 = result;
  if ( result )
  {
    while ( 1 )
    {
      if ( (v3 & 1) != 0 )
      {
        v4 = (v3 >> 1) & 1;
        if ( !(_DWORD)v4 && (v3 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
          goto LABEL_5;
        if ( RtlpWaitCouldDeadlock() )
          ZwTerminateProcess(-1LL, 3221225547LL);
        UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
        v6 = 0;
        v21[0] = 2;
        v18 = 0LL;
        if ( (_DWORD)v4 )
        {
          v17 = 0LL;
          v20 = -1;
          v16 = v3 & 0xFFFFFFFFFFFFFFF0uLL;
          v7 = (char *)((unsigned __int64)&v16 | v3 & 8 | 7);
          v6 = (v3 & 4) == 0;
        }
        else
        {
          v20 = -2;
          v17 = &v16;
          v7 = (char *)&v16 + 3;
        }
        v9 = _InterlockedCompareExchange64(a1, (signed __int64)v7, v3);
        v8 = v3 == v9;
        v3 = v9;
        if ( !v8 )
          goto LABEL_14;
        if ( v6 )
          RtlpOptimizeSRWLockList(a1);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          if ( MEMORY[0x7FFE0297] )
          {
            v12 = __rdtsc();
            v13 = v12 + (unsigned int)SRWLockSpinCycleCount;
            while ( 1 )
            {
              __asm { monitorx rax, rcx, rdx }
              if ( (v21[0] & 2) == 0 )
                break;
              v14 = v12;
              v15 = __rdtsc();
              v12 = v15;
              if ( v15 <= v14 || v15 >= v13 )
                break;
              __asm { mwaitx  rax, rcx, rbx }
            }
          }
          else
          {
            for ( i = 0; (v21[0] & 2) != 0 && i != SRWLockSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6]; ++i )
              _mm_pause();
          }
        }
        if ( _interlockedbittestandreset(v21, 1u) )
        {
          do
            NtWaitForAlertByThreadId(a1, 0LL);
          while ( (v21[0] & 4) == 0 );
        }
      }
      else
      {
        v4 = (v3 >> 1) & 1;
LABEL_5:
        v5 = (v3 | 1) + 16;
        if ( v4 )
          v5 = v3 | 1;
        result = _InterlockedCompareExchange64(a1, v5, v3);
        if ( v3 == result )
          return result;
LABEL_14:
        RtlBackoff(&v22);
        _m_prefetchw((const void *)a1);
        v3 = *a1;
      }
    }
  }
  return result;
}
