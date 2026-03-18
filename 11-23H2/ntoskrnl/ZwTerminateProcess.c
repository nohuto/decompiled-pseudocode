/*
 * XREFs of ZwTerminateProcess @ 0x14041B2E0
 * Callers:
 *     KiDispatchException @ 0x14030CCA0 (KiDispatchException.c)
 *     PsDispatchIumService @ 0x1405A4E64 (PsDispatchIumService.c)
 *     PsCallEnclave @ 0x1409B6800 (PsCallEnclave.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, *(_QWORD *)&ExitStatus);
}
