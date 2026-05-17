/*
 * XREFs of ZwSuspendProcess @ 0x1800A7940
 * Callers:
 *     RtlpWow64SuspendProcess @ 0x1800E7A68 (RtlpWow64SuspendProcess.c)
 * Callees:
 *     <none>
 */

__int64 ZwSuspendProcess()
{
  __int64 result; // rax

  result = 455LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
