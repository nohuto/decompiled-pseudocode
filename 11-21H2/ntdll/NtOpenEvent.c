/*
 * XREFs of NtOpenEvent @ 0x1800A4870
 * Callers:
 *     WaitForWerSvc @ 0x1800E8B84 (WaitForWerSvc.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenEvent(PHANDLE EventHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 64;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
