/*
 * XREFs of ZwGetContextThread @ 0x1800A5F60
 * Callers:
 *     PsspDumpThread @ 0x180061500 (PsspDumpThread.c)
 *     RtlRemoteCall @ 0x18010BCB0 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetContextThread()
{
  __int64 result; // rax

  result = 248LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
