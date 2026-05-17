/*
 * XREFs of ZwRollbackRegistryTransaction @ 0x1800A4020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwRollbackRegistryTransaction()
{
  __int64 result; // rax

  result = 396LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
