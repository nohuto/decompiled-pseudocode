/*
 * XREFs of PopSleepstudySnapModernStandbySessionData @ 0x1409934C8
 * Callers:
 *     PopPowerAggregatorDisengageModernStandby @ 0x14099362C (PopPowerAggregatorDisengageModernStandby.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402C42B0 (RtlGetInterruptTimePrecise.c)
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopCalculateIdleInformation @ 0x1403C76E0 (PopCalculateIdleInformation.c)
 */

void PopSleepstudySnapModernStandbySessionData()
{
  __int64 v0; // rbx
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF
  __int128 v2; // [rsp+30h] [rbp-18h]
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopSleepstudySessionLock);
  v0 = 13 * ((unsigned int)dword_140C3BD08 + 2LL);
  PopCalculateIdleInformation((__int64)&v1);
  PopSleepstudySessionContext[v0 + 10] = v2;
  PopSleepstudySessionContext[v0 + 11] = *((_QWORD *)&v1 + 1);
  PopSleepstudySessionContext[v0 + 12] = RtlGetInterruptTimePrecise(&PerformanceCounter).QuadPart;
  PopReleaseRwLock(&PopSleepstudySessionLock);
}
