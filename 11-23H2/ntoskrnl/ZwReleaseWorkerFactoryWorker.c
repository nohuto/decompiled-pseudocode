/*
 * XREFs of ZwReleaseWorkerFactoryWorker @ 0x14041E070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReleaseWorkerFactoryWorker(HANDLE WorkerFactoryHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(WorkerFactoryHandle);
}
