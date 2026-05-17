/*
 * XREFs of RtlCloneUserProcess @ 0x1800E1600
 * Callers:
 *     RtlpProcessReflectionStartup @ 0x1800E1280 (RtlpProcessReflectionStartup.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     LdrpDrainWorkQueue @ 0x18002A65C (LdrpDrainWorkQueue.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpAcquireLoaderLock @ 0x180051388 (LdrpAcquireLoaderLock.c)
 *     RtlWakeAllConditionVariable @ 0x18005E6E0 (RtlWakeAllConditionVariable.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x180080D00 (RtlAcquireReleaseSRWLockExclusive.c)
 *     RtlpCreateUserProcess @ 0x1800874A0 (RtlpCreateUserProcess.c)
 *     LdrpCompleteProcessCloning @ 0x1800DF424 (LdrpCompleteProcessCloning.c)
 *     LdrpLockTlsDelayedReclaimTable @ 0x1800E046C (LdrpLockTlsDelayedReclaimTable.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800E04B4 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrForkMrdata @ 0x1800E0C30 (LdrForkMrdata.c)
 *     RtlLockHeapManagerForCloning @ 0x1800FD7E0 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800FE420 (RtlUnlockHeapManagerForCloning.c)
 *     RtlpFlsCloneComplete @ 0x18011836C (RtlpFlsCloneComplete.c)
 *     RtlpFlsClonePrepare @ 0x18011841C (RtlpFlsClonePrepare.c)
 */

__int64 __fastcall RtlCloneUserProcess(int a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, _DWORD *a5)
{
  int v9; // edi
  int v10; // r14d
  int v11; // ebp
  int v12; // ebx
  int v13; // esi
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r9
  __int64 v18; // rcx
  int UserProcess; // eax
  unsigned int v20; // ebx
  __int64 v21; // rcx
  _QWORD v22[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v23; // [rsp+40h] [rbp-58h]
  __int128 v24; // [rsp+50h] [rbp-48h]
  __int64 v25; // [rsp+60h] [rbp-38h]

  if ( (a1 & 0xFFFFFFF8) != 0 )
    return 3221225711LL;
  v9 = 2;
  v10 = a1 & 1;
  v11 = 2 * (a1 & 2);
  v12 = a1 & 4;
  if ( (a1 & 4) != 0 )
    goto LABEL_9;
  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 )
  {
    LdrpDrainWorkQueue(0);
    LdrpAcquireLoaderLock();
    RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
    RtlpFlsClonePrepare();
    RtlEnterCriticalSection((__int64)&FastPebLock);
    LdrpLockTlsDelayedReclaimTable(v15, v14, v16, v17);
    RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    LdrForkMrdata(0);
    v13 = RtlLockHeapManagerForCloning();
    if ( v13 < 0 )
    {
      LdrForkMrdata(2);
      RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
      LdrpUnlockTlsDelayedReclaimTable(0);
      RtlLeaveCriticalSection((__int64)&FastPebLock);
      RtlpFlsCloneComplete(v18, 0LL);
      LdrpCompleteProcessCloning(0);
      return (unsigned int)v13;
    }
    RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
    RtlAcquireSRWLockExclusive(&LdrpForkActiveLock);
    LdrpForkInProgress = 1;
LABEL_9:
    v25 = 0LL;
    v22[0] = 1LL;
    v22[1] = a2;
    v23 = a3;
    v24 = a4;
    UserProcess = RtlpCreateUserProcess(0LL, 0LL, v11, v10, (__int64)v22, a5);
    v13 = UserProcess;
    if ( !v12 )
    {
      if ( UserProcess == 297 )
      {
        RtlCriticalSectionLock = 1LL;
        v20 = 1;
        v9 = 1;
        qword_180183FB0 = (__int64)NtCurrentTeb()->ClientId.UniqueThread;
        dword_180183FA8 = -2;
        dword_180183FAC = 1;
        qword_180183FB8 = 0LL;
      }
      else
      {
        LdrpForkInProgress = 0;
        v20 = 0;
        RtlReleaseSRWLockExclusive(&LdrpForkActiveLock);
      }
      RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
      LdrForkMrdata(v9);
      if ( v9 == 1 )
        RtlpProtectedPoliciesSRWLock = 1LL;
      else
        RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
      RtlUnlockHeapManagerForCloning(v20);
      LdrpUnlockTlsDelayedReclaimTable(v20);
      RtlLeaveCriticalSection((__int64)&FastPebLock);
      RtlpFlsCloneComplete(v21, v20);
      LdrpCompleteProcessCloning(v20);
      if ( v20 )
      {
        LdrpForkInProgress = 0;
        RtlAcquireReleaseSRWLockExclusive(&LdrpForkActiveLock);
        RtlWakeAllConditionVariable(&LdrpForkConditionVariable);
      }
    }
    return (unsigned int)v13;
  }
  return (unsigned int)-1073741420;
}
