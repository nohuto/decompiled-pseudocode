/*
 * XREFs of PopIsLockConsoleTimeoutActive @ 0x14080A454
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14039A210 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopAcquireAdaptiveLock @ 0x1407EF098 (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EF120 (PopReleaseAdaptiveLock.c)
 */

char PopIsLockConsoleTimeoutActive()
{
  char v0; // bl

  v0 = 1;
  PopAcquireAdaptiveLock(1);
  if ( !byte_140C1F3A1 || byte_140C1F3A2 || dword_140C1F3B8 == -1 )
    v0 = 0;
  PopReleaseAdaptiveLock();
  return v0;
}
