/*
 * XREFs of NtWaitLowEventPair @ 0x1800A2A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtWaitLowEventPair(HANDLE EventPairHandle)
{
  NTSTATUS result; // eax

  result = 485;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
