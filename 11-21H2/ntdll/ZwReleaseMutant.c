/*
 * XREFs of ZwReleaseMutant @ 0x1800A4470
 * Callers:
 *     TppCallbackEpilog @ 0x180017620 (TppCallbackEpilog.c)
 * Callees:
 *     <none>
 */

__int64 ZwReleaseMutant()
{
  __int64 result; // rax

  result = 32LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
