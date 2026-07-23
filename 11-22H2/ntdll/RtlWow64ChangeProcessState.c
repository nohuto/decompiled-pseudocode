/*
 * XREFs of RtlWow64ChangeProcessState @ 0x1800E6650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RtlWow64ChangeProcessState(
        HANDLE ProcessStateChangeHandle,
        HANDLE ProcessHandle,
        PROCESS_STATE_CHANGE_TYPE a3,
        void *a4,
        SIZE_T a5,
        ULONG64 a6)
{
  if ( a3 )
    return NtChangeProcessState(ProcessStateChangeHandle, ProcessHandle, a3, a4, a5, a6);
  else
    return RtlpWow64SuspendProcess(ProcessHandle, ProcessStateChangeHandle);
}
