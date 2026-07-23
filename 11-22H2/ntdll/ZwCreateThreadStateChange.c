/*
 * XREFs of ZwCreateThreadStateChange @ 0x1800A06E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateThreadStateChange(
        PHANDLE ThreadStateChangeHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ThreadHandle,
        ULONG64 Reserved)
{
  NTSTATUS result; // eax

  result = 200;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
