/*
 * XREFs of NtCompactKeys @ 0x1800A53E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCompactKeys(ULONG Count, HANDLE KeyArray[])
{
  NTSTATUS result; // eax

  result = 156;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
