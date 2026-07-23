/*
 * XREFs of NtCompleteConnectPort @ 0x1800A01E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCompleteConnectPort(HANDLE PortHandle)
{
  NTSTATUS result; // eax

  result = 160;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
