/*
 * XREFs of ZwDisplayString @ 0x1800A0A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDisplayString(PUNICODE_STRING String)
{
  NTSTATUS result; // eax

  result = 226;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
