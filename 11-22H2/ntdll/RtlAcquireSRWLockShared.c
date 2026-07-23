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

void __cdecl RtlAcquireSRWLockShared(PRTL_SRWLOCK SRWLock)
{
  unsigned __int64 i; // rdx
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r9
  unsigned __int64 UniqueThread; // rcx
  unsigned __int64 Value; // rdi
  signed __int64 v7; // rcx
  bool v8; // zf
  signed __int64 v9; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 *v13; // [rsp+28h] [rbp-28h]
  __int64 v14; // [rsp+30h] [rbp-20h]
  unsigned __int64 v15; // [rsp+38h] [rbp-18h]
  int v16; // [rsp+40h] [rbp-10h]
  unsigned int v17[3]; // [rsp+44h] [rbp-Ch] BYREF
  int v18; // [rsp+70h] [rbp+20h] BYREF

  v18 = 0;
  UniqueThread = 17LL;
  Value = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 17LL, 0LL);
  if ( Value )
  {
    while ( 1 )
    {
      if ( (Value & 1) != 0 && ((Value & 2) != 0 || (Value & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      {
        if ( (unsigned __int8)RtlpWaitCouldDeadlock(UniqueThread, i, v2, v3, v12) )
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
        UniqueThread = (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
        v14 = 0LL;
        v15 = UniqueThread;
        LOBYTE(UniqueThread) = 0;
        v17[0] = 2;
        if ( (Value & 2) != 0 )
        {
          v13 = 0LL;
          v16 = -1;
          v12 = Value & 0xFFFFFFFFFFFFFFF0uLL;
          i = (unsigned __int64)&v12 | Value & 8 | 7;
          LOBYTE(UniqueThread) = (Value & 4) == 0;
        }
        else
        {
          v16 = -2;
          v13 = &v12;
          i = (unsigned __int64)&v12 + 3;
        }
        v9 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, i, Value);
        v8 = Value == v9;
        Value = v9;
        if ( !v8 )
          goto LABEL_9;
        if ( (_BYTE)UniqueThread )
          RtlpOptimizeSRWLockList(SRWLock);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          if ( MEMORY[0x7FFE0297] )
          {
            v2 = __rdtsc();
            v3 = v2 + (unsigned int)SRWLockSpinCycleCount;
            while ( 1 )
            {
              i = 0LL;
              __asm { monitorx rax, rcx, rdx }
              UniqueThread = v17[0];
              if ( (v17[0] & 2) == 0 )
                break;
              UniqueThread = v2;
              v11 = __rdtsc();
              i = (unsigned __int64)HIDWORD(v11) << 32;
              v2 = v11;
              if ( v11 <= UniqueThread || v11 >= v3 )
                break;
              __asm { mwaitx  rax, rcx, rbx }
            }
          }
          else
          {
            for ( i = 0LL; ; i = (unsigned int)(i + 1) )
            {
              UniqueThread = v17[0];
              if ( (v17[0] & 2) == 0 || (_DWORD)i == SRWLockSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6] )
                break;
              _mm_pause();
            }
          }
        }
        if ( _interlockedbittestandreset((volatile signed __int32 *)v17, 1u) )
        {
          do
            NtWaitForAlertByThreadId(SRWLock, 0LL);
          while ( (v17[0] & 4) == 0 );
        }
      }
      else
      {
        v7 = (Value | 1) + 16;
        if ( (Value & 2) != 0 )
          v7 = Value | 1;
        if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v7, Value) )
          return;
LABEL_9:
        RtlBackoff(&v18);
        _m_prefetchw(SRWLock);
        Value = SRWLock->Value;
      }
    }
  }
}
