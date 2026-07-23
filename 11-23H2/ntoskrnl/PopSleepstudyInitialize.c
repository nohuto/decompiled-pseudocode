/*
 * XREFs of PopSleepstudyInitialize @ 0x140B51FE0
 * Callers:
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402C4570 (RtlGetInterruptTimePrecise.c)
 *     KiInitializeTimer2 @ 0x14031E7AC (KiInitializeTimer2.c)
 *     PopSleepstudySendSessionChangeWnf @ 0x140875BDC (PopSleepstudySendSessionChangeWnf.c)
 */

char __fastcall PopSleepstudyInitialize(int a1)
{
  LARGE_INTEGER *v1; // rbx
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp+10h] BYREF

  v1 = (LARGE_INTEGER *)((char *)&unk_140C3BC90 + 104 * (unsigned int)dword_140C3BC88);
  if ( a1 )
    return PopSleepstudySendSessionChangeWnf(v1[1].QuadPart, v1->LowPart, v1[4].LowPart);
  qword_140C3BBB8 = 0LL;
  PopSleepstudySessionLock = 0LL;
  qword_140C3BBC8 = (__int64)PopSleepstudySessionContext;
  PopSleepstudySessionContext[0] = (__int64)PopSleepstudySessionContext;
  v1->LowPart = 0;
  BYTE3(v1[4].QuadPart) = 0;
  v1[4].LowPart &= 0xFF000000;
  v1[2] = RtlGetInterruptTimePrecise(&PerformanceCounter);
  stru_140C3BC68.Parameter = 0LL;
  stru_140C3BC68.List.Flink = 0LL;
  word_140C3BBE2 = 0;
  stru_140C3BC68.WorkerRoutine = (void (__fastcall *)(void *))PopSleepstudyScenarioStopWorker;
  return KiInitializeTimer2((unsigned __int64)&unk_140C3BBE0, (__int64)PopSleepstudyScenarioStopTimerCallback, 0LL, 8);
}
