/*
 * XREFs of HalpInitGenericErrorSourcePollingRoutine @ 0x140A91DD4
 * Callers:
 *     HalpInitializeGenericErrorSource @ 0x140A8B6FC (HalpInitializeGenericErrorSource.c)
 * Callees:
 *     KiSetTimerEx @ 0x140252700 (KiSetTimerEx.c)
 *     KeInitializeTimerEx @ 0x1402BE630 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1402BF970 (KeInitializeDpc.c)
 *     KeInitializeMutex @ 0x14033ABB0 (KeInitializeMutex.c)
 */

__int64 HalpInitGenericErrorSourcePollingRoutine()
{
  __int64 v0; // rbx

  qword_140C61C08 = 0LL;
  dword_140C61CF4 = 0;
  dword_140C61CF0 = 0;
  HalpGenericPolledContext = 500;
  KeInitializeMutex(&stru_140C61CB8, 0);
  v0 = -10000LL * (unsigned int)HalpGenericPolledContext;
  KeInitializeDpc(&stru_140C61C10, (PKDEFERRED_ROUTINE)HalpGenericPolledDpcRoutine, &HalpGenericPolledContext);
  qword_140C61C50 = 0LL;
  qword_140C61C60 = (__int64)HalpGenericPolledWorkerRoutine;
  qword_140C61C68 = (__int64)&HalpGenericPolledContext;
  KeInitializeTimerEx(&stru_140C61C70, NotificationTimer);
  return KiSetTimerEx((__int64)&stru_140C61C70, v0, HalpGenericPolledContext, 0, (__int64)&stru_140C61C10);
}
