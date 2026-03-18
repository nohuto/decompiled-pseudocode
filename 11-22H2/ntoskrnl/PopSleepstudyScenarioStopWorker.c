/*
 * XREFs of PopSleepstudyScenarioStopWorker @ 0x140993460
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceSleepStudyStart @ 0x140878EE0 (PopDiagTraceSleepStudyStart.c)
 *     PopDiagTraceSleepStudyStop @ 0x140991778 (PopDiagTraceSleepStudyStop.c)
 */

void PopSleepstudyScenarioStopWorker()
{
  _DWORD *v0; // rbx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSleepstudySessionLock);
  byte_140C3BC58 = 0;
  v0 = (_DWORD *)((char *)&unk_140C3BD10 + 104 * (unsigned int)dword_140C3BD08);
  PopDiagTraceSleepStudyStop(qword_140C3BC50);
  qword_140C3BC50 = -1LL;
  if ( (unsigned int)(*v0 - 1) <= 1 )
    PopDiagTraceSleepStudyStart();
  PopReleaseRwLock(&PopSleepstudySessionLock);
}
