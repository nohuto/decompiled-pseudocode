/*
 * XREFs of ZwSuspendProcess @ 0x14041E000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSuspendProcess(HANDLE ProcessHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
