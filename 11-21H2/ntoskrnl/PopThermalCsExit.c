/*
 * XREFs of PopThermalCsExit @ 0x1405D0450
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140809838 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x14036AAC4 (PopQueueWorkItem.c)
 *     PopThermalStandbyEndTracking @ 0x14038B428 (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x1405D0668 (PopThermalStandbyNotify.c)
 */

char PopThermalCsExit()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rcx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
  PopThermalStandbyEndTracking(1LL, v0, v1);
  LOBYTE(word_140C22070) = 1;
  if ( dword_140C22074 )
  {
    LOBYTE(v2) = 1;
    PopThermalStandbyNotify(v2);
    word_140C22070 = 256;
  }
  else if ( HIBYTE(word_140C22070) )
  {
    PopThermalStandbyNotify(0LL);
    HIBYTE(word_140C22070) = 0;
  }
  PopReleaseRwLock((ULONG_PTR)&PopSystemThermalInfo);
  return PopQueueWorkItem((__int64)&unk_140C22128, DelayedWorkQueue);
}
