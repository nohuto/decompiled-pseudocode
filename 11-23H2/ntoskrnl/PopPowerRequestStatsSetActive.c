/*
 * XREFs of PopPowerRequestStatsSetActive @ 0x1407A77D8
 * Callers:
 *     PopPowerRequestCallbackWorker @ 0x14032BE40 (PopPowerRequestCallbackWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     SleepstudyHelperBlockerActiveDereference @ 0x14032D890 (SleepstudyHelperBlockerActiveDereference.c)
 *     SleepstudyHelperBlockerActiveReference @ 0x14032D980 (SleepstudyHelperBlockerActiveReference.c)
 */

void __fastcall PopPowerRequestStatsSetActive(__int64 a1, int a2, char a3)
{
  KSPIN_LOCK *v5; // rcx

  if ( *(_QWORD *)(a1 + 160) && ((a2 - 1) & 0xFFFFFFFD) == 0 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerRequestStatsLock);
    v5 = *(KSPIN_LOCK **)(*(_QWORD *)(a1 + 160) + 16LL);
    if ( a3 )
      SleepstudyHelperBlockerActiveReference(v5);
    else
      SleepstudyHelperBlockerActiveDereference(v5);
    PopReleaseRwLock(&PopPowerRequestStatsLock);
  }
}
