/*
 * XREFs of ZwContinue @ 0x1800A48D0
 * Callers:
 *     LdrInitializeThunk @ 0x18007B1A0 (LdrInitializeThunk.c)
 *     RtlRestoreContext @ 0x1800A8520 (RtlRestoreContext.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwContinue(PCONTEXT ContextRecord, BOOLEAN TestAlert)
{
  NTSTATUS result; // eax

  result = 67;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
