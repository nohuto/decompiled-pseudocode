/*
 * XREFs of ZwIsProcessInJob @ 0x14041C140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwIsProcessInJob(HANDLE ProcessHandle, HANDLE JobHandle)
{
  _disable();
  __readeflags();
  return sub_140433F80(ProcessHandle, JobHandle);
}
