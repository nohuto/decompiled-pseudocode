/*
 * XREFs of PopThermalCsExit @ 0x14058FDBC
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140878884 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x14032CF74 (PopQueueWorkItem.c)
 *     PopThermalStandbyEndTracking @ 0x140590088 (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x1405900E0 (PopThermalStandbyNotify.c)
 */

char PopThermalCsExit()
{
  __int64 v0; // rcx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
  PopThermalStandbyEndTracking(1LL);
  LOBYTE(word_140C3C770) = 1;
  if ( dword_140C3C774 )
  {
    LOBYTE(v0) = 1;
    PopThermalStandbyNotify(v0);
    word_140C3C770 = 256;
  }
  else if ( HIBYTE(word_140C3C770) )
  {
    PopThermalStandbyNotify(0LL);
    HIBYTE(word_140C3C770) = 0;
  }
  PopReleaseRwLock(&PopSystemThermalInfo);
  return PopQueueWorkItem((__int64)&unk_140C3C828, DelayedWorkQueue);
}
