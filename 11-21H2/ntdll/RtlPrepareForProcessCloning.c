/*
 * XREFs of RtlPrepareForProcessCloning @ 0x1800A2FA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     LdrpAcquireLoaderLock @ 0x18004F230 (LdrpAcquireLoaderLock.c)
 *     LdrpDrainWorkQueue @ 0x180051600 (LdrpDrainWorkQueue.c)
 *     LdrpCompleteProcessCloning @ 0x1800E0BE8 (LdrpCompleteProcessCloning.c)
 *     LdrpLockTlsDelayedReclaimTable @ 0x1800E1C5C (LdrpLockTlsDelayedReclaimTable.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800E1CA4 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrForkMrdata @ 0x1800E1F70 (LdrForkMrdata.c)
 *     RtlLockHeapManagerForCloning @ 0x1800FDAB4 (RtlLockHeapManagerForCloning.c)
 *     RtlpFlsCloneComplete @ 0x180117EEC (RtlpFlsCloneComplete.c)
 *     RtlpFlsClonePrepare @ 0x180117F9C (RtlpFlsClonePrepare.c)
 */

__int64 RtlPrepareForProcessCloning()
{
  unsigned __int64 v0; // rdx
  unsigned __int64 v1; // r8
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // rdx
  int v4; // ebx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  __int64 v7; // rcx
  __int64 result; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9

  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    return 3221225876LL;
  LdrpDrainWorkQueue(0);
  LdrpAcquireLoaderLock();
  RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
  RtlpFlsClonePrepare();
  RtlEnterCriticalSection((__int64)&FastPebLock);
  LdrpLockTlsDelayedReclaimTable();
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpProtectedPoliciesSRWLock, v0, v1, v2);
  LdrForkMrdata(0LL);
  v4 = RtlLockHeapManagerForCloning();
  if ( v4 >= 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlCriticalSectionLock, v3, v5, v6);
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpForkActiveLock, v9, v10, v11);
    result = 0LL;
    LdrpForkInProgress = 1;
  }
  else
  {
    LdrForkMrdata(2LL);
    RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    LdrpUnlockTlsDelayedReclaimTable(0LL);
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    RtlpFlsCloneComplete(v7, 0LL);
    LdrpCompleteProcessCloning(0LL);
    return (unsigned int)v4;
  }
  return result;
}
