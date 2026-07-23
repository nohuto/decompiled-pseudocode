/*
 * XREFs of ZwTerminateJobObject @ 0x14041F0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwTerminateJobObject(HANDLE JobHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return sub_140433F80(JobHandle, *(_QWORD *)&ExitStatus);
}
