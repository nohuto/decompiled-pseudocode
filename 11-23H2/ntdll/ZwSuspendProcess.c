/*
 * XREFs of ZwSuspendProcess @ 0x1800A4800
 * Callers:
 *     RtlpWow64SuspendProcess @ 0x1800E7C08 (RtlpWow64SuspendProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSuspendProcess(HANDLE ProcessHandle)
{
  NTSTATUS result; // eax

  result = 459;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
