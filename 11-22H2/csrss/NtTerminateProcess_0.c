/*
 * XREFs of NtTerminateProcess_0 @ 0x1400016E0
 * Callers:
 *     __report_gsfailure @ 0x1400014E0 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtTerminateProcess_0(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  return NtTerminateProcess(ProcessHandle, ExitStatus);
}
