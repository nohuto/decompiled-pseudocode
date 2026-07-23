/*
 * XREFs of NtChangeThreadState @ 0x1800A00C0
 * Callers:
 *     RtlpWow64SuspendThread @ 0x180001C70 (RtlpWow64SuspendThread.c)
 *     RtlWow64ChangeThreadState @ 0x1800E6670 (RtlWow64ChangeThreadState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtChangeThreadState(
        HANDLE ThreadStateChangeHandle,
        HANDLE ThreadHandle,
        THREAD_STATE_CHANGE_TYPE StateChangeType,
        PVOID ExtendedInformation,
        SIZE_T ExtendedInformationLength,
        ULONG64 Reserved)
{
  NTSTATUS result; // eax

  result = 151;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
