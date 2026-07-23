/*
 * XREFs of RtlCompleteProcessCloning @ 0x18009DFE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlWakeAllConditionVariable @ 0x18005E6E0 (RtlWakeAllConditionVariable.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x180080D00 (RtlAcquireReleaseSRWLockExclusive.c)
 *     LdrpCompleteProcessCloning @ 0x1800DF424 (LdrpCompleteProcessCloning.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800E04B4 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrForkMrdata @ 0x1800E0C30 (LdrForkMrdata.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800FE420 (RtlUnlockHeapManagerForCloning.c)
 *     RtlpFlsCloneComplete @ 0x18011836C (RtlpFlsCloneComplete.c)
 */

void __fastcall RtlCompleteProcessCloning(unsigned int a1)
{
  unsigned int v2; // edi
  void *UniqueThread; // rdx
  __int64 v4; // rcx

  if ( a1 )
  {
    RtlCriticalSectionLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
    v2 = 1;
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    FastPebLock.LockSemaphore = 0LL;
    FastPebLock.OwningThread = UniqueThread;
    FastPebLock.LockCount = -2;
    FastPebLock.RecursionCount = 1;
  }
  else
  {
    LdrpForkInProgress = 0;
    v2 = 2;
    RtlReleaseSRWLockExclusive(&LdrpForkActiveLock);
  }
  RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
  LdrForkMrdata(v2);
  if ( v2 == 1 )
    RtlpProtectedPoliciesSRWLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
  else
    RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
  RtlUnlockHeapManagerForCloning(a1);
  LdrpUnlockTlsDelayedReclaimTable(a1);
  RtlLeaveCriticalSection(&FastPebLock);
  RtlpFlsCloneComplete(v4, a1);
  LdrpCompleteProcessCloning(a1);
  if ( a1 )
  {
    LdrpForkInProgress = 0;
    RtlAcquireReleaseSRWLockExclusive(&LdrpForkActiveLock);
    RtlWakeAllConditionVariable(&LdrpForkConditionVariable);
  }
}
