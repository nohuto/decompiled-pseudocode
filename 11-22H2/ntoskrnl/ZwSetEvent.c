/*
 * XREFs of ZwSetEvent @ 0x14041A860
 * Callers:
 *     DifZwSetEventWrapper @ 0x1405F6C40 (DifZwSetEventWrapper.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140867450 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PspShutdownCsrProcess @ 0x1409AD358 (PspShutdownCsrProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
