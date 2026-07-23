/*
 * XREFs of ZwDebugActiveProcess @ 0x14041CB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDebugActiveProcess(HANDLE ProcessHandle, HANDLE DebugObjectHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
