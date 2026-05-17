/*
 * XREFs of RtlCompleteProcessCloning @ 0x1800A2E60
 * Callers:
 *     <none>
 * Callees:
 *     RtlWakeAllConditionVariable @ 0x1800045A0 (RtlWakeAllConditionVariable.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x1800854A0 (RtlAcquireReleaseSRWLockExclusive.c)
 *     LdrpCompleteProcessCloning @ 0x1800E0BE8 (LdrpCompleteProcessCloning.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800E1CA4 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrForkMrdata @ 0x1800E1F70 (LdrForkMrdata.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800FE6D8 (RtlUnlockHeapManagerForCloning.c)
 *     RtlpFlsCloneComplete @ 0x180117EEC (RtlpFlsCloneComplete.c)
 */

void __fastcall RtlCompleteProcessCloning(unsigned int a1)
{
  unsigned int v2; // edi
  void *UniqueThread; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9

  if ( a1 )
  {
    RtlCriticalSectionLock = 1LL;
    v2 = 1;
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_180179D38 = 0LL;
    qword_180179D30 = (__int64)UniqueThread;
    dword_180179D28 = -2;
    dword_180179D2C = 1;
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
    RtlpProtectedPoliciesSRWLock = 1LL;
  else
    RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
  RtlUnlockHeapManagerForCloning(a1);
  LdrpUnlockTlsDelayedReclaimTable(a1);
  RtlLeaveCriticalSection((__int64)&FastPebLock);
  RtlpFlsCloneComplete(v4, a1);
  LdrpCompleteProcessCloning(a1);
  if ( a1 )
  {
    LdrpForkInProgress = 0;
    RtlAcquireReleaseSRWLockExclusive(&LdrpForkActiveLock, v5, v6, v7);
    RtlWakeAllConditionVariable(&LdrpForkConditionVariable);
  }
}
