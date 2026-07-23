/*
 * XREFs of ZwGetContextThread @ 0x1800A2DC0
 * Callers:
 *     RtlRemoteCall @ 0x18010D2F0 (RtlRemoteCall.c)
 *     PsspDumpThread @ 0x18012B4B0 (PsspDumpThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetContextThread(HANDLE ThreadHandle, PCONTEXT ThreadContext)
{
  NTSTATUS result; // eax

  result = 249;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
