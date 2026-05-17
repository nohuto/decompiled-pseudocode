/*
 * XREFs of ZwResumeProcess @ 0x1800A1EE0
 * Callers:
 *     RtlpProcessReflectionStartup @ 0x1800E1280 (RtlpProcessReflectionStartup.c)
 * Callees:
 *     <none>
 */

__int64 ZwResumeProcess()
{
  __int64 result; // rax

  result = 392LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
