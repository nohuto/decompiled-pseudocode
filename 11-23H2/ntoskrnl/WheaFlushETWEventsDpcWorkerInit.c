/*
 * XREFs of WheaFlushETWEventsDpcWorkerInit @ 0x1403B1608
 * Callers:
 *     WheapEtwEnableCallback @ 0x140860F10 (WheapEtwEnableCallback.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
 */

__int64 (__fastcall *WheaFlushETWEventsDpcWorkerInit())()
{
  __int64 (__fastcall *result)(); // rax

  memset(&WheaFlushETWEventsDpcWorker, 0, 0x70uLL);
  LODWORD(WheaFlushETWEventsDpcWorker) = 275;
  *(&WheaFlushETWEventsDpcWorker + 4) = (ULONG_PTR)&WheaFlushETWEventsDpcWorker;
  *(&WheaFlushETWEventsDpcWorker + 3) = (ULONG_PTR)WheaFlushETWEventsDpcRoutine;
  stru_140C2BA40.WorkerRoutine = (void (__fastcall *)(void *))WheaFlushETWEventsWorkerRoutine;
  result = WheapProcessWaitingETWEvents;
  qword_140C2BA68 = (__int64)WheapProcessWaitingETWEvents;
  *(&WheaFlushETWEventsDpcWorker + 7) = 0LL;
  *(&WheaFlushETWEventsDpcWorker + 2) = 0LL;
  stru_140C2BA40.Parameter = &WheaFlushETWEventsDpcWorker;
  stru_140C2BA40.List.Flink = 0LL;
  dword_140C2BA60 = 0;
  WheaFlushETWEventsInitialized = 1;
  return result;
}
