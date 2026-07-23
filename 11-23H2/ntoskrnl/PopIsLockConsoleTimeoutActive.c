/*
 * XREFs of PopIsLockConsoleTimeoutActive @ 0x140878BC0
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C80E0 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopAcquireAdaptiveLock @ 0x1407EC16C (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EC218 (PopReleaseAdaptiveLock.c)
 */

char PopIsLockConsoleTimeoutActive()
{
  char v0; // bl

  v0 = 1;
  PopAcquireAdaptiveLock(1);
  if ( !byte_140C39C41 || byte_140C39C42 || dword_140C39C58 == -1 )
    v0 = 0;
  PopReleaseAdaptiveLock();
  return v0;
}
