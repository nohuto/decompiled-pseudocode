/*
 * XREFs of NtCreateProcessStateChange @ 0x1800A05C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCreateProcessStateChange(
        PHANDLE ProcessStateChangeHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        ULONG64 Reserved)
{
  NTSTATUS result; // eax

  result = 191;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
