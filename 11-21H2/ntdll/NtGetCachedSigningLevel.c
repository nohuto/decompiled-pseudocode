/*
 * XREFs of NtGetCachedSigningLevel @ 0x1800A5F20
 * Callers:
 *     LdrpSetModuleSigningLevel @ 0x1800E0C90 (LdrpSetModuleSigningLevel.c)
 * Callees:
 *     <none>
 */

__int64 NtGetCachedSigningLevel()
{
  __int64 result; // rax

  result = 246LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
