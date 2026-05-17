/*
 * XREFs of ZwContinue @ 0x1800A1710
 * Callers:
 *     LdrInitializeThunk @ 0x1800744C0 (LdrInitializeThunk.c)
 *     RtlRestoreContext @ 0x1800A5420 (RtlRestoreContext.c)
 * Callees:
 *     <none>
 */

__int64 ZwContinue()
{
  __int64 result; // rax

  result = 67LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
