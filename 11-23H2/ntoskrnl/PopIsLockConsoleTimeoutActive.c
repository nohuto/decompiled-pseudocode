/*
 * XREFs of PopIsLockConsoleTimeoutActive @ 0x140878980
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C7F00 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopAcquireAdaptiveLock @ 0x1407EBE9C (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EBF48 (PopReleaseAdaptiveLock.c)
 */

char PopIsLockConsoleTimeoutActive()
{
  char v0; // bl

  v0 = 1;
  PopAcquireAdaptiveLock(1);
  if ( !byte_140C39CE1 || byte_140C39CE2 || dword_140C39CF8 == -1 )
    v0 = 0;
  PopReleaseAdaptiveLock();
  return v0;
}
