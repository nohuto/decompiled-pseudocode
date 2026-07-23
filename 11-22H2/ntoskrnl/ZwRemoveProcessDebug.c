/*
 * XREFs of ZwRemoveProcessDebug @ 0x14041D660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRemoveProcessDebug(HANDLE ProcessHandle, HANDLE DebugObjectHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
