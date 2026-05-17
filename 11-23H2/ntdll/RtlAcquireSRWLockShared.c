/*
 * XREFs of RtlAcquireSRWLockShared @ 0x180026DB0
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
 *     RtlpCSparseBitmapLock @ 0x18004AC54 (RtlpCSparseBitmapLock.c)
 *     TpAllocPoolInternal @ 0x18004C010 (TpAllocPoolInternal.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18004DC24 (RtlpWnfProcessCurrentDescriptor.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x180050144 (TpPoolReferenceExistingGlobalPool.c)
 *     RtlpFlsDataCleanup @ 0x180051734 (RtlpFlsDataCleanup.c)
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
 *     RtlGetFeatureToggleConfiguration @ 0x18009F600 (RtlGetFeatureToggleConfiguration.c)
 *     RtlpFcWnfCallback @ 0x1800B0E70 (RtlpFcWnfCallback.c)
 *     LdrpLockTlsDelayedReclaimTable @ 0x1800E179C (LdrpLockTlsDelayedReclaimTable.c)
 *     RtlQueryProcessLockInformation @ 0x1800E3C30 (RtlQueryProcessLockInformation.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800EA0B8 (RtlpWnfCalculateAndSetNextTimer.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800EA640 (RtlpWnfRetryTimerCallback.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800ECFCC (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlPosixBarrier @ 0x1800FA1A8 (RtlPosixBarrier.c)
 *     RtlQueryPointerMapping @ 0x180102450 (RtlQueryPointerMapping.c)
 *     RtlQueryPropertyStore @ 0x180102510 (RtlQueryPropertyStore.c)
 *     RtlpHpStackTraceAddStack @ 0x180116E80 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x1801178C0 (RtlpHpStackTraceHeapSerialize.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180117AD0 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHpStackTraceSerialize @ 0x180117B4C (RtlpHpStackTraceSerialize.c)
 *     RtlStackDbStackAdd @ 0x18012D728 (RtlStackDbStackAdd.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x18012E15C (RtlpStackDbSegmentFindOrCreate.c)
 * Callees:
 *     RtlBackoff @ 0x180033E20 (RtlBackoff.c)
 *     RtlpWaitCouldDeadlock @ 0x180034A30 (RtlpWaitCouldDeadlock.c)
 *     RtlpOptimizeSRWLockList @ 0x180069DF8 (RtlpOptimizeSRWLockList.c)
 *     ZwTerminateProcess @ 0x1800A1430 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A4AA0 (NtWaitForAlertByThreadId.c)
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
