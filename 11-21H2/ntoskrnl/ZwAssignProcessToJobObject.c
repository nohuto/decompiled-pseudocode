/*
 * XREFs of ZwAssignProcessToJobObject @ 0x14041C940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAssignProcessToJobObject(HANDLE JobHandle, HANDLE ProcessHandle)
{
  _disable();
  __readeflags();
  return sub_140433F80(JobHandle, ProcessHandle);
}
