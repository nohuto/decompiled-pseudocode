/*
 * XREFs of RtlCloneUserProcess @ 0x1800E2990
 * Callers:
 *     RtlpProcessReflectionStartup @ 0x1800E2610 (RtlpProcessReflectionStartup.c)
 * Callees:
 *     RtlWakeAllConditionVariable @ 0x1800045A0 (RtlWakeAllConditionVariable.c)
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     LdrpAcquireLoaderLock @ 0x18004F230 (LdrpAcquireLoaderLock.c)
 *     LdrpDrainWorkQueue @ 0x180051600 (LdrpDrainWorkQueue.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x1800854A0 (RtlAcquireReleaseSRWLockExclusive.c)
 *     RtlpCreateUserProcess @ 0x18008C900 (RtlpCreateUserProcess.c)
 *     LdrpCompleteProcessCloning @ 0x1800E0BE8 (LdrpCompleteProcessCloning.c)
 *     LdrpLockTlsDelayedReclaimTable @ 0x1800E1C5C (LdrpLockTlsDelayedReclaimTable.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800E1CA4 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrForkMrdata @ 0x1800E1F70 (LdrForkMrdata.c)
 *     RtlLockHeapManagerForCloning @ 0x1800FDAB4 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800FE6D8 (RtlUnlockHeapManagerForCloning.c)
 *     RtlpFlsCloneComplete @ 0x180117EEC (RtlpFlsCloneComplete.c)
 *     RtlpFlsClonePrepare @ 0x180117F9C (RtlpFlsClonePrepare.c)
 */

NTSTATUS __cdecl RtlCloneUserProcess(
        ULONG ProcessFlags,
        PSECURITY_DESCRIPTOR ProcessSecurityDescriptor,
        PSECURITY_DESCRIPTOR ThreadSecurityDescriptor,
        HANDLE DebugPort,
        PRTL_USER_PROCESS_INFORMATION ProcessInformation)
{
  int v9; // edi
  ULONG v10; // r14d
  ULONG v11; // ebp
  ULONG v12; // ebx
  NTSTATUS v13; // esi
  __int64 v14; // rcx
  NTSTATUS UserProcess; // eax
  unsigned int v16; // ebx
  __int64 v17; // rcx
  _QWORD v18[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v19; // [rsp+40h] [rbp-58h]
  __int128 v20; // [rsp+50h] [rbp-48h]
  __int64 v21; // [rsp+60h] [rbp-38h]

  if ( (ProcessFlags & 0xFFFFFFF8) != 0 )
    return -1073741585;
  v9 = 2;
  v10 = ProcessFlags & 1;
  v11 = 2 * (ProcessFlags & 2);
  v12 = ProcessFlags & 4;
  if ( (ProcessFlags & 4) != 0 )
    goto LABEL_9;
  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    return -1073741420;
  LdrpDrainWorkQueue(0);
  LdrpAcquireLoaderLock();
  RtlEnterCriticalSection(&LdrpWorkQueueLock);
  RtlpFlsClonePrepare();
  RtlEnterCriticalSection(&FastPebLock);
  LdrpLockTlsDelayedReclaimTable();
  RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
  LdrForkMrdata(0);
  v13 = RtlLockHeapManagerForCloning();
  if ( v13 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
    RtlAcquireSRWLockExclusive(&LdrpForkActiveLock);
    LdrpForkInProgress = 1;
LABEL_9:
    v21 = 0LL;
    v18[0] = 1LL;
    v18[1] = ProcessSecurityDescriptor;
    v19 = (unsigned __int64)ThreadSecurityDescriptor;
    v20 = (unsigned __int64)DebugPort;
    UserProcess = RtlpCreateUserProcess(0LL, 0LL, v11, v10, (__int64)v18, (__int64)ProcessInformation);
    v13 = UserProcess;
    if ( !v12 )
    {
      if ( UserProcess == 297 )
      {
        RtlCriticalSectionLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
        v16 = 1;
        v9 = 1;
        FastPebLock.OwningThread = NtCurrentTeb()->ClientId.UniqueThread;
        FastPebLock.LockCount = -2;
        FastPebLock.RecursionCount = 1;
        FastPebLock.LockSemaphore = 0LL;
      }
      else
      {
        LdrpForkInProgress = 0;
        v16 = 0;
        RtlReleaseSRWLockExclusive(&LdrpForkActiveLock);
      }
      RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
      LdrForkMrdata(v9);
      if ( v9 == 1 )
        RtlpProtectedPoliciesSRWLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
      else
        RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
      RtlUnlockHeapManagerForCloning(v16);
      LdrpUnlockTlsDelayedReclaimTable(v16);
      RtlLeaveCriticalSection(&FastPebLock);
      RtlpFlsCloneComplete(v17, v16);
      LdrpCompleteProcessCloning(v16);
      if ( v16 )
      {
        LdrpForkInProgress = 0;
        RtlAcquireReleaseSRWLockExclusive(&LdrpForkActiveLock);
        RtlWakeAllConditionVariable(&LdrpForkConditionVariable);
      }
    }
    return v13;
  }
  LdrForkMrdata(2);
  RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
  LdrpUnlockTlsDelayedReclaimTable(0);
  RtlLeaveCriticalSection(&FastPebLock);
  RtlpFlsCloneComplete(v14, 0LL);
  LdrpCompleteProcessCloning(0);
  return v13;
}
