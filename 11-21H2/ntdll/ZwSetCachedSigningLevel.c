/*
 * XREFs of ZwSetCachedSigningLevel @ 0x1800A72C0
 * Callers:
 *     LdrpSetModuleSigningLevel @ 0x1800E0C90 (LdrpSetModuleSigningLevel.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetCachedSigningLevel()
{
  __int64 result; // rax

  result = 403LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
