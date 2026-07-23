/*
 * XREFs of ZwWorkerFactoryWorkerReady @ 0x14041B110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWorkerFactoryWorkerReady(HANDLE WorkerFactoryHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(WorkerFactoryHandle);
}
