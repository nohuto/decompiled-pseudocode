/*
 * XREFs of NtSuspendThread @ 0x1800A4820
 * Callers:
 *     RtlpWow64SuspendThread @ 0x180001CA0 (RtlpWow64SuspendThread.c)
 *     RtlpProcessReflectionStartup @ 0x1800E25B0 (RtlpProcessReflectionStartup.c)
 *     RtlRemoteCall @ 0x18010D320 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

__int64 NtSuspendThread()
{
  __int64 result; // rax

  result = 460LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
