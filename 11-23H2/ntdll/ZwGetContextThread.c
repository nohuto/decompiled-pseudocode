/*
 * XREFs of ZwGetContextThread @ 0x1800A2DC0
 * Callers:
 *     RtlRemoteCall @ 0x18010D320 (RtlRemoteCall.c)
 *     PsspDumpThread @ 0x18012B4E0 (PsspDumpThread.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetContextThread()
{
  __int64 result; // rax

  result = 249LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
