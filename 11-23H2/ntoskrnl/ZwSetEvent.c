/*
 * XREFs of ZwSetEvent @ 0x14041AF20
 * Callers:
 *     DifZwSetEventWrapper @ 0x1405F6BB0 (DifZwSetEventWrapper.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140866F80 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PspShutdownCsrProcess @ 0x1409AD2A8 (PspShutdownCsrProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle, PreviousState);
}
