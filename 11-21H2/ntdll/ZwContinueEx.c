/*
 * XREFs of ZwContinueEx @ 0x1800A54C0
 * Callers:
 *     RtlContinueLongJump @ 0x1800807E0 (RtlContinueLongJump.c)
 *     KiUserApcDispatcher @ 0x1800A7EC0 (KiUserApcDispatcher.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwContinueEx(PCONTEXT ContextRecord, PVOID ContinueArgument)
{
  NTSTATUS result; // eax

  result = 163;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
