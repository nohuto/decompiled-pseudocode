/*
 * XREFs of PopThermalCsEntry @ 0x14058FD3C
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140878884 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x14032CF74 (PopQueueWorkItem.c)
 *     PopThermalStandbyEndTracking @ 0x140590088 (PopThermalStandbyEndTracking.c)
 *     PopTraceThermalStandbyInitiated @ 0x1405961A0 (PopTraceThermalStandbyInitiated.c)
 */

char __fastcall PopThermalCsEntry(char a1)
{
  __int64 v2; // rcx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
  LOBYTE(word_140C3C770) = 0;
  if ( a1 )
  {
    byte_140C3C77D = 1;
    LOBYTE(v2) = byte_140C3C77C;
    qword_140C3C780 = MEMORY[0xFFFFF78000000008];
    PopTraceThermalStandbyInitiated(v2);
  }
  if ( !dword_140C3C774 )
    PopThermalStandbyEndTracking(0LL);
  PopReleaseRwLock(&PopSystemThermalInfo);
  return PopQueueWorkItem((__int64)&unk_140C3C828, DelayedWorkQueue);
}
