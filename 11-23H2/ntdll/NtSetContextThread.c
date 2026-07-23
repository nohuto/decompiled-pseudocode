/*
 * XREFs of NtSetContextThread @ 0x1800A41A0
 * Callers:
 *     RtlRemoteCall @ 0x18010D2F0 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetContextThread(HANDLE ThreadHandle, PCONTEXT ThreadContext)
{
  NTSTATUS result; // eax

  result = 408;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
