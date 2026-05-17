/*
 * XREFs of NtChangeThreadState @ 0x1800A5340
 * Callers:
 *     RtlpWow64SuspendThread @ 0x180001A20 (RtlpWow64SuspendThread.c)
 *     RtlWow64ChangeThreadState @ 0x1800E7810 (RtlWow64ChangeThreadState.c)
 * Callees:
 *     <none>
 */

__int64 NtChangeThreadState()
{
  __int64 result; // rax

  result = 151LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
