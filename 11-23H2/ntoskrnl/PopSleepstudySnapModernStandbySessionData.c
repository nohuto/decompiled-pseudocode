/*
 * XREFs of PopSleepstudySnapModernStandbySessionData @ 0x140993418
 * Callers:
 *     PopPowerAggregatorDisengageModernStandby @ 0x14099357C (PopPowerAggregatorDisengageModernStandby.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402C42E0 (RtlGetInterruptTimePrecise.c)
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     PopCalculateIdleInformation @ 0x1403C7D40 (PopCalculateIdleInformation.c)
 */

void PopSleepstudySnapModernStandbySessionData()
{
  __int64 v0; // rbx
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF
  __int128 v2; // [rsp+30h] [rbp-18h]
  LARGE_INTEGER v3; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopSleepstudySessionLock);
  v0 = 13 * ((unsigned int)dword_140C3BCC8 + 2LL);
  PopCalculateIdleInformation((__int64)&v1);
  PopSleepstudySessionContext[v0 + 10] = v2;
  PopSleepstudySessionContext[v0 + 11] = *((_QWORD *)&v1 + 1);
  PopSleepstudySessionContext[v0 + 12] = RtlGetInterruptTimePrecise(&v3);
  PopReleaseRwLock(&PopSleepstudySessionLock);
}
