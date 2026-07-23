/*
 * XREFs of RtlPrepareForProcessCloning @ 0x18009E120
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     LdrpDrainWorkQueue @ 0x18002A65C (LdrpDrainWorkQueue.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpAcquireLoaderLock @ 0x180051388 (LdrpAcquireLoaderLock.c)
 *     LdrpCompleteProcessCloning @ 0x1800DF424 (LdrpCompleteProcessCloning.c)
 *     LdrpLockTlsDelayedReclaimTable @ 0x1800E046C (LdrpLockTlsDelayedReclaimTable.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800E04B4 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrForkMrdata @ 0x1800E0C30 (LdrForkMrdata.c)
 *     RtlLockHeapManagerForCloning @ 0x1800FD7E0 (RtlLockHeapManagerForCloning.c)
 *     RtlpFlsCloneComplete @ 0x18011836C (RtlpFlsCloneComplete.c)
 *     RtlpFlsClonePrepare @ 0x18011841C (RtlpFlsClonePrepare.c)
 */

__int64 RtlPrepareForProcessCloning()
{
  __int64 result; // rax
  int v1; // ebx
  __int64 v2; // rcx

  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    return 3221225876LL;
  LdrpDrainWorkQueue(0);
  LdrpAcquireLoaderLock();
  RtlEnterCriticalSection(&LdrpWorkQueueLock);
  RtlpFlsClonePrepare();
  RtlEnterCriticalSection(&FastPebLock);
  LdrpLockTlsDelayedReclaimTable();
  RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
  LdrForkMrdata(0LL);
  v1 = RtlLockHeapManagerForCloning();
  if ( v1 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
    RtlAcquireSRWLockExclusive(&LdrpForkActiveLock);
    result = 0LL;
    LdrpForkInProgress = 1;
  }
  else
  {
    LdrForkMrdata(2LL);
    RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    LdrpUnlockTlsDelayedReclaimTable(0LL);
    RtlLeaveCriticalSection(&FastPebLock);
    RtlpFlsCloneComplete(v2, 0LL);
    LdrpCompleteProcessCloning(0LL);
    return (unsigned int)v1;
  }
  return result;
}
