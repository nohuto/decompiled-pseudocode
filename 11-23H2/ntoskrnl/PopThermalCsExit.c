/*
 * XREFs of PopThermalCsExit @ 0x14058F8CC
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140878644 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x14032CCE4 (PopQueueWorkItem.c)
 *     PopThermalStandbyEndTracking @ 0x14058FB98 (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x14058FBF0 (PopThermalStandbyNotify.c)
 */

char PopThermalCsExit()
{
  __int64 v0; // rcx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
  PopThermalStandbyEndTracking(1LL);
  LOBYTE(word_140C3C6F0) = 1;
  if ( dword_140C3C6F4 )
  {
    LOBYTE(v0) = 1;
    PopThermalStandbyNotify(v0);
    word_140C3C6F0 = 256;
  }
  else if ( HIBYTE(word_140C3C6F0) )
  {
    PopThermalStandbyNotify(0LL);
    HIBYTE(word_140C3C6F0) = 0;
  }
  PopReleaseRwLock(&PopSystemThermalInfo);
  return PopQueueWorkItem((__int64)&unk_140C3C7A8, DelayedWorkQueue);
}
