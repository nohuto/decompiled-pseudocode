/*
 * XREFs of ZwFlushBuffersFile @ 0x1800A1810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwFlushBuffersFile()
{
  __int64 result; // rax

  result = 75LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
