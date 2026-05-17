/*
 * XREFs of ZwRecoverEnlistment @ 0x1800A6EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwRecoverEnlistment()
{
  __int64 result; // rax

  result = 371LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
