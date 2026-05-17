/*
 * XREFs of NtChangeProcessState @ 0x1800A5320
 * Callers:
 *     RtlWow64ChangeProcessState @ 0x1800E77F0 (RtlWow64ChangeProcessState.c)
 *     RtlpWow64SuspendProcess @ 0x1800E7A68 (RtlpWow64SuspendProcess.c)
 * Callees:
 *     <none>
 */

__int64 NtChangeProcessState()
{
  __int64 result; // rax

  result = 150LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
