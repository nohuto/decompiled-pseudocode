/*
 * XREFs of ZwGetContextThread @ 0x1800A5F60
 * Callers:
 *     PsspDumpThread @ 0x180061500 (PsspDumpThread.c)
 *     RtlRemoteCall @ 0x18010BCB0 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetContextThread(HANDLE ThreadHandle, PCONTEXT ThreadContext)
{
  NTSTATUS result; // eax

  result = 248;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
