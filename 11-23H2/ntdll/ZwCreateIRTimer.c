/*
 * XREFs of ZwCreateIRTimer @ 0x1800A2480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwCreateIRTimer()
{
  __int64 result; // rax

  result = 175LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
