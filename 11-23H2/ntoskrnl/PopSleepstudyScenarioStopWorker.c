/*
 * XREFs of PopSleepstudyScenarioStopWorker @ 0x1409933B0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceSleepStudyStart @ 0x140878A10 (PopDiagTraceSleepStudyStart.c)
 *     PopDiagTraceSleepStudyStop @ 0x1409916C8 (PopDiagTraceSleepStudyStop.c)
 */

void PopSleepstudyScenarioStopWorker()
{
  _DWORD *v0; // rbx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSleepstudySessionLock);
  byte_140C3BC18 = 0;
  v0 = (_DWORD *)((char *)&unk_140C3BCD0 + 104 * (unsigned int)dword_140C3BCC8);
  PopDiagTraceSleepStudyStop(qword_140C3BC10);
  qword_140C3BC10 = -1LL;
  if ( (unsigned int)(*v0 - 1) <= 1 )
    PopDiagTraceSleepStudyStart();
  PopReleaseRwLock(&PopSleepstudySessionLock);
}
