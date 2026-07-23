/*
 * XREFs of ZwShutdownWorkerFactory @ 0x14041E970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwShutdownWorkerFactory(HANDLE WorkerFactoryHandle, LONG *PendingWorkerCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(WorkerFactoryHandle);
}
