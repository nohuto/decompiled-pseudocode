/*
 * XREFs of ZwTerminateProcess @ 0x14041B670
 * Callers:
 *     KiDispatchException @ 0x14030CF30 (KiDispatchException.c)
 *     PsDispatchIumService @ 0x1405A53D4 (PsDispatchIumService.c)
 *     PsCallEnclave @ 0x1409B6A00 (PsCallEnclave.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
