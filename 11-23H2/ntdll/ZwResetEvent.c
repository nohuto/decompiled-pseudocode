/*
 * XREFs of ZwResetEvent @ 0x1800A3F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwResetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  NTSTATUS result; // eax

  result = 389;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
