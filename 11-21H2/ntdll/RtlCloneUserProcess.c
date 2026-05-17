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

__int64 __fastcall RtlCloneUserProcess(int a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, _DWORD *a5)
{
  int v9; // edi
  int v10; // r14d
  int v11; // ebp
  int v12; // ebx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rdx
  int v20; // esi
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r9
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r9
  int UserProcess; // eax
  unsigned int v28; // ebx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // r9
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // r9
  _QWORD v36[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v37; // [rsp+40h] [rbp-58h]
  __int128 v38; // [rsp+50h] [rbp-48h]
  __int64 v39; // [rsp+60h] [rbp-38h]

  if ( (a1 & 0xFFFFFFF8) != 0 )
    return 3221225711LL;
  v9 = 2;
  v10 = a1 & 1;
  v11 = 2 * (a1 & 2);
  v12 = a1 & 4;
  if ( (a1 & 4) != 0 )
    goto LABEL_9;
  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    return (unsigned int)-1073741420;
  LdrpDrainWorkQueue(0);
  LdrpAcquireLoaderLock();
  RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
  RtlpFlsClonePrepare();
  RtlEnterCriticalSection((__int64)&FastPebLock);
  LdrpLockTlsDelayedReclaimTable();
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpProtectedPoliciesSRWLock, v13, v14, v15);
  LdrForkMrdata(0, v16, v17, v18);
  v20 = RtlLockHeapManagerForCloning();
  if ( v20 >= 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlCriticalSectionLock, v19, v21, v22);
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpForkActiveLock, v24, v25, v26);
    LdrpForkInProgress = 1;
LABEL_9:
    v39 = 0LL;
    v36[0] = 1LL;
    v36[1] = a2;
    v37 = a3;
    v38 = a4;
    UserProcess = RtlpCreateUserProcess(0LL, 0LL, v11, v10, (__int64)v36, a5);
    v20 = UserProcess;
    if ( !v12 )
    {
      if ( UserProcess == 297 )
      {
        RtlCriticalSectionLock = 1LL;
        v28 = 1;
        v9 = 1;
        qword_180179D30 = (__int64)NtCurrentTeb()->ClientId.UniqueThread;
        dword_180179D28 = -2;
        dword_180179D2C = 1;
        qword_180179D38 = 0LL;
      }
      else
      {
        LdrpForkInProgress = 0;
        v28 = 0;
        RtlReleaseSRWLockExclusive(&LdrpForkActiveLock);
      }
      RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
      LdrForkMrdata(v9, v29, v30, v31);
      if ( v9 == 1 )
        RtlpProtectedPoliciesSRWLock = 1LL;
      else
        RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
      RtlUnlockHeapManagerForCloning(v28);
      LdrpUnlockTlsDelayedReclaimTable(v28);
      RtlLeaveCriticalSection((__int64)&FastPebLock);
      RtlpFlsCloneComplete(v32, v28);
      LdrpCompleteProcessCloning(v28);
      if ( v28 )
      {
        LdrpForkInProgress = 0;
        RtlAcquireReleaseSRWLockExclusive(&LdrpForkActiveLock, v33, v34, v35);
        RtlWakeAllConditionVariable(&LdrpForkConditionVariable);
      }
    }
    return (unsigned int)v20;
  }
  LdrForkMrdata(2, v19, v21, v22);
  RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
  LdrpUnlockTlsDelayedReclaimTable(0);
  RtlLeaveCriticalSection((__int64)&FastPebLock);
  RtlpFlsCloneComplete(v23, 0LL);
  LdrpCompleteProcessCloning(0);
  return (unsigned int)v20;
}
