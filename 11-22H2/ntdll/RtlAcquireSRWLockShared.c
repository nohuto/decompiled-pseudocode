/*
 * XREFs of RtlAcquireSRWLockShared @ 0x180026F00
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
 *     RtlpCSparseBitmapLock @ 0x18004ADB4 (RtlpCSparseBitmapLock.c)
 *     TpAllocPoolInternal @ 0x18004C170 (TpAllocPoolInternal.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18004DD84 (RtlpWnfProcessCurrentDescriptor.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x1800502A4 (TpPoolReferenceExistingGlobalPool.c)
 *     RtlpFlsDataCleanup @ 0x180051894 (RtlpFlsDataCleanup.c)
 *     RtlpHpLfhContextCompact @ 0x18005A574 (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x18005A604 (RtlpHpLfhOwnerCompact.c)
 *     RtlpCreateWnfNameSubscription @ 0x18005BFEC (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateSerializationGroup @ 0x18005C28C (RtlpCreateSerializationGroup.c)
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
 *     LdrpLockTlsDelayedReclaimTable @ 0x1800E046C (LdrpLockTlsDelayedReclaimTable.c)
 *     RtlQueryProcessLockInformation @ 0x1800E2900 (RtlQueryProcessLockInformation.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800E8D88 (RtlpWnfCalculateAndSetNextTimer.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800E9310 (RtlpWnfRetryTimerCallback.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800EBC94 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlPosixBarrier @ 0x1800F8D98 (RtlPosixBarrier.c)
 *     RtlQueryPointerMapping @ 0x180101040 (RtlQueryPointerMapping.c)
 *     RtlQueryPropertyStore @ 0x180101100 (RtlQueryPropertyStore.c)
 *     RtlpHpStackTraceAddStack @ 0x1801159D0 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180116410 (RtlpHpStackTraceHeapSerialize.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180116620 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHpStackTraceSerialize @ 0x18011669C (RtlpHpStackTraceSerialize.c)
 *     RtlStackDbStackAdd @ 0x18012C234 (RtlStackDbStackAdd.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x18012CC68 (RtlpStackDbSegmentFindOrCreate.c)
 * Callees:
 *     RtlBackoff @ 0x180033F80 (RtlBackoff.c)
 *     RtlpWaitCouldDeadlock @ 0x180034B90 (RtlpWaitCouldDeadlock.c)
 *     RtlpOptimizeSRWLockList @ 0x180069E18 (RtlpOptimizeSRWLockList.c)
 *     ZwTerminateProcess @ 0x18009F370 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A29E0 (NtWaitForAlertByThreadId.c)
 */

signed __int64 __fastcall RtlAcquireSRWLockShared(
        volatile signed __int64 *a1,
        unsigned __int64 i,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 UniqueThread; // rcx
  signed __int64 result; // rax
  signed __int64 v7; // rdi
  signed __int64 v8; // rcx
  bool v9; // zf
  signed __int64 v10; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 *v14; // [rsp+28h] [rbp-28h]
  __int64 v15; // [rsp+30h] [rbp-20h]
  unsigned __int64 v16; // [rsp+38h] [rbp-18h]
  int v17; // [rsp+40h] [rbp-10h]
  unsigned int v18[3]; // [rsp+44h] [rbp-Ch] BYREF
  int v19; // [rsp+70h] [rbp+20h] BYREF

  v19 = 0;
  UniqueThread = 17LL;
  result = _InterlockedCompareExchange64(a1, 17LL, 0LL);
  v7 = result;
  if ( result )
  {
    while ( 1 )
    {
      if ( (v7 & 1) != 0 && ((v7 & 2) != 0 || (v7 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      {
        if ( (unsigned __int8)RtlpWaitCouldDeadlock(UniqueThread, i, a3, a4, v13) )
          ZwTerminateProcess(-1LL, 3221225547LL);
        UniqueThread = (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
        v15 = 0LL;
        v16 = UniqueThread;
        LOBYTE(UniqueThread) = 0;
        v18[0] = 2;
        if ( (v7 & 2) != 0 )
        {
          v14 = 0LL;
          v17 = -1;
          v13 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
          i = (unsigned __int64)&v13 | v7 & 8 | 7;
          LOBYTE(UniqueThread) = (v7 & 4) == 0;
        }
        else
        {
          v17 = -2;
          v14 = &v13;
          i = (unsigned __int64)&v13 + 3;
        }
        v10 = _InterlockedCompareExchange64(a1, i, v7);
        v9 = v7 == v10;
        v7 = v10;
        if ( !v9 )
          goto LABEL_9;
        if ( (_BYTE)UniqueThread )
          RtlpOptimizeSRWLockList(a1);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          if ( MEMORY[0x7FFE0297] )
          {
            a3 = __rdtsc();
            a4 = a3 + (unsigned int)SRWLockSpinCycleCount;
            while ( 1 )
            {
              i = 0LL;
              __asm { monitorx rax, rcx, rdx }
              UniqueThread = v18[0];
              if ( (v18[0] & 2) == 0 )
                break;
              UniqueThread = a3;
              v12 = __rdtsc();
              i = (unsigned __int64)HIDWORD(v12) << 32;
              a3 = v12;
              if ( v12 <= UniqueThread || v12 >= a4 )
                break;
              __asm { mwaitx  rax, rcx, rbx }
            }
          }
          else
          {
            for ( i = 0LL; ; i = (unsigned int)(i + 1) )
            {
              UniqueThread = v18[0];
              if ( (v18[0] & 2) == 0 || (_DWORD)i == SRWLockSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6] )
                break;
              _mm_pause();
            }
          }
        }
        if ( _interlockedbittestandreset((volatile signed __int32 *)v18, 1u) )
        {
          do
            NtWaitForAlertByThreadId(a1, 0LL);
          while ( (v18[0] & 4) == 0 );
        }
      }
      else
      {
        v8 = (v7 | 1) + 16;
        if ( (v7 & 2) != 0 )
          v8 = v7 | 1;
        result = _InterlockedCompareExchange64(a1, v8, v7);
        if ( v7 == result )
          return result;
LABEL_9:
        RtlBackoff(&v19);
        _m_prefetchw((const void *)a1);
        v7 = *a1;
      }
    }
  }
  return result;
}
