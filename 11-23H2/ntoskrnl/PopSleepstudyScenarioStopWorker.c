/*
 * XREFs of PopSleepstudyScenarioStopWorker @ 0x1409935B0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceSleepStudyStart @ 0x140878C50 (PopDiagTraceSleepStudyStart.c)
 *     PopDiagTraceSleepStudyStop @ 0x1409918C8 (PopDiagTraceSleepStudyStop.c)
 */

void PopSleepstudyScenarioStopWorker()
{
  _DWORD *v0; // rbx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSleepstudySessionLock);
  byte_140C3BBD8 = 0;
  v0 = (_DWORD *)((char *)&unk_140C3BC90 + 104 * (unsigned int)dword_140C3BC88);
  PopDiagTraceSleepStudyStop(qword_140C3BBD0);
  qword_140C3BBD0 = -1LL;
  if ( (unsigned int)(*v0 - 1) <= 1 )
    PopDiagTraceSleepStudyStart();
  PopReleaseRwLock(&PopSleepstudySessionLock);
}
