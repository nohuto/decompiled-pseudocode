/*
 * XREFs of PopSleepstudyInitialize @ 0x140B51F54
 * Callers:
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402C42B0 (RtlGetInterruptTimePrecise.c)
 *     KiInitializeTimer2 @ 0x14031E33C (KiInitializeTimer2.c)
 *     PopSleepstudySendSessionChangeWnf @ 0x140875E6C (PopSleepstudySendSessionChangeWnf.c)
 */

char __fastcall PopSleepstudyInitialize(int a1)
{
  LARGE_INTEGER *v1; // rbx
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp+10h] BYREF

  v1 = (LARGE_INTEGER *)((char *)&unk_140C3BD10 + 104 * (unsigned int)dword_140C3BD08);
  if ( a1 )
    return PopSleepstudySendSessionChangeWnf(v1[1].QuadPart, v1->LowPart, v1[4].LowPart);
  qword_140C3BC28 = 0LL;
  PopSleepstudySessionLock = 0LL;
  qword_140C3BC48 = (__int64)PopSleepstudySessionContext;
  PopSleepstudySessionContext[0] = (__int64)PopSleepstudySessionContext;
  v1->LowPart = 0;
  BYTE3(v1[4].QuadPart) = 0;
  v1[4].LowPart &= 0xFF000000;
  v1[2] = RtlGetInterruptTimePrecise(&PerformanceCounter);
  stru_140C3BCE8.Parameter = 0LL;
  stru_140C3BCE8.List.Flink = 0LL;
  word_140C3BC62 = 0;
  stru_140C3BCE8.WorkerRoutine = (void (__fastcall *)(void *))PopSleepstudyScenarioStopWorker;
  return KiInitializeTimer2((unsigned __int64)&unk_140C3BC60, (__int64)PopSleepstudyScenarioStopTimerCallback, 0LL, 8);
}
