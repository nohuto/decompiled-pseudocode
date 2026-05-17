/*
 * XREFs of NtSuspendThread @ 0x1800A7960
 * Callers:
 *     RtlpWow64SuspendThread @ 0x180001A20 (RtlpWow64SuspendThread.c)
 *     RtlpProcessReflectionStartup @ 0x1800E2610 (RtlpProcessReflectionStartup.c)
 *     RtlRemoteCall @ 0x18010BCB0 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

__int64 NtSuspendThread()
{
  __int64 result; // rax

  result = 456LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
