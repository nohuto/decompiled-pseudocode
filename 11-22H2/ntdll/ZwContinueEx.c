/*
 * XREFs of ZwContinueEx @ 0x1800A0240
 * Callers:
 *     RtlContinueLongJump @ 0x180080DA0 (RtlContinueLongJump.c)
 *     KiUserApcDispatcher @ 0x1800A2D00 (KiUserApcDispatcher.c)
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
