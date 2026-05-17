/*
 * XREFs of ZwSuspendProcess @ 0x1800A2740
 * Callers:
 *     RtlpWow64SuspendProcess @ 0x1800E68D8 (RtlpWow64SuspendProcess.c)
 * Callees:
 *     <none>
 */

__int64 ZwSuspendProcess()
{
  __int64 result; // rax

  result = 459LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
