/*
 * XREFs of HalpInitGenericErrorSourcePollingRoutine @ 0x140A5B0D0
 * Callers:
 *     HalpInitializeGenericErrorSource @ 0x140A5AC18 (HalpInitializeGenericErrorSource.c)
 * Callees:
 *     KeInitializeMutex @ 0x140261AA0 (KeInitializeMutex.c)
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     KiSetTimerEx @ 0x1402E2D20 (KiSetTimerEx.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 */

__int64 HalpInitGenericErrorSourcePollingRoutine()
{
  __int64 v0; // rbx

  qword_140C4BB48 = 0LL;
  dword_140C4BC34 = 0;
  dword_140C4BC30 = 0;
  HalpGenericPolledContext = 500;
  KeInitializeMutex(&stru_140C4BBF8, 0);
  v0 = -10000LL * (unsigned int)HalpGenericPolledContext;
  KeInitializeDpc(&stru_140C4BB50, (PKDEFERRED_ROUTINE)HalpGenericPolledDpcRoutine, &HalpGenericPolledContext);
  qword_140C4BB90 = 0LL;
  qword_140C4BBA0 = (__int64)HalpGenericPolledWorkerRoutine;
  qword_140C4BBA8 = (__int64)&HalpGenericPolledContext;
  KeInitializeTimerEx(&stru_140C4BBB0, NotificationTimer);
  return KiSetTimerEx((unsigned __int64)&stru_140C4BBB0, v0, HalpGenericPolledContext, 0, (__int64)&stru_140C4BB50);
}
