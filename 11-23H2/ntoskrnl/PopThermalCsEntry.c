/*
 * XREFs of PopThermalCsEntry @ 0x14058F84C
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140878644 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x14032CCE4 (PopQueueWorkItem.c)
 *     PopThermalStandbyEndTracking @ 0x14058FB98 (PopThermalStandbyEndTracking.c)
 *     PopTraceThermalStandbyInitiated @ 0x140595CB0 (PopTraceThermalStandbyInitiated.c)
 */

char __fastcall PopThermalCsEntry(char a1)
{
  __int64 v2; // rcx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
  LOBYTE(word_140C3C6F0) = 0;
  if ( a1 )
  {
    byte_140C3C6FD = 1;
    LOBYTE(v2) = byte_140C3C6FC;
    qword_140C3C700 = MEMORY[0xFFFFF78000000008];
    PopTraceThermalStandbyInitiated(v2);
  }
  if ( !dword_140C3C6F4 )
    PopThermalStandbyEndTracking(0LL);
  PopReleaseRwLock(&PopSystemThermalInfo);
  return PopQueueWorkItem((__int64)&unk_140C3C7A8, DelayedWorkQueue);
}
