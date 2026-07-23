/*
 * XREFs of HalpInitGenericErrorSourcePollingRoutine @ 0x140A91F54
 * Callers:
 *     HalpInitializeGenericErrorSource @ 0x140A8AE9C (HalpInitializeGenericErrorSource.c)
 * Callees:
 *     KiSetTimerEx @ 0x1402528E0 (KiSetTimerEx.c)
 *     KeInitializeTimerEx @ 0x1402BE8F0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1402BFC30 (KeInitializeDpc.c)
 *     KeInitializeMutex @ 0x14033B040 (KeInitializeMutex.c)
 */

__int64 HalpInitGenericErrorSourcePollingRoutine()
{
  __int64 v0; // rbx

  qword_140C61B28 = 0LL;
  dword_140C61C14 = 0;
  dword_140C61C10 = 0;
  HalpGenericPolledContext = 500;
  KeInitializeMutex(&stru_140C61BD8, 0);
  v0 = -10000LL * (unsigned int)HalpGenericPolledContext;
  KeInitializeDpc(&stru_140C61B30, (PKDEFERRED_ROUTINE)HalpGenericPolledDpcRoutine, &HalpGenericPolledContext);
  qword_140C61B70 = 0LL;
  qword_140C61B80 = (__int64)HalpGenericPolledWorkerRoutine;
  qword_140C61B88 = (__int64)&HalpGenericPolledContext;
  KeInitializeTimerEx(&stru_140C61B90, NotificationTimer);
  return KiSetTimerEx((__int64)&stru_140C61B90, v0, HalpGenericPolledContext, 0, (__int64)&stru_140C61B30);
}
