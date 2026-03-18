/*
 * XREFs of PopSleepstudyInitialize @ 0x140B51FE0
 * Callers:
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402C42E0 (RtlGetInterruptTimePrecise.c)
 *     KiInitializeTimer2 @ 0x14031E51C (KiInitializeTimer2.c)
 *     PopSleepstudySendSessionChangeWnf @ 0x14087599C (PopSleepstudySendSessionChangeWnf.c)
 */

char __fastcall PopSleepstudyInitialize(int a1)
{
  char *v1; // rbx
  LARGE_INTEGER v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = (char *)&unk_140C3BCD0 + 104 * (unsigned int)dword_140C3BCC8;
  if ( a1 )
    return PopSleepstudySendSessionChangeWnf(*((_QWORD *)v1 + 1), *(_DWORD *)v1, *((_DWORD *)v1 + 8));
  qword_140C3C018 = 0LL;
  PopSleepstudySessionLock = 0LL;
  qword_140C3BC08 = (__int64)PopSleepstudySessionContext;
  PopSleepstudySessionContext[0] = (__int64)PopSleepstudySessionContext;
  *(_DWORD *)v1 = 0;
  v1[35] = 0;
  *((_DWORD *)v1 + 8) &= 0xFF000000;
  *((_QWORD *)v1 + 2) = RtlGetInterruptTimePrecise(&v3);
  stru_140C3BCA8.Parameter = 0LL;
  stru_140C3BCA8.List.Flink = 0LL;
  word_140C3BC22 = 0;
  stru_140C3BCA8.WorkerRoutine = (void (__fastcall *)(void *))PopSleepstudyScenarioStopWorker;
  return KiInitializeTimer2((unsigned __int64)&unk_140C3BC20, (__int64)PopSleepstudyScenarioStopTimerCallback, 0LL, 8);
}
