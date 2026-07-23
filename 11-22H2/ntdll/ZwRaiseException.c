/*
 * XREFs of ZwRaiseException @ 0x1800A1C20
 * Callers:
 *     RtlUnwindEx @ 0x180020160 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x1800549A0 (RtlRaiseException.c)
 *     KiUserExceptionDispatcher @ 0x1800A2E70 (KiUserExceptionDispatcher.c)
 *     RtlRaiseNoncontinuableException @ 0x1800A38E0 (RtlRaiseNoncontinuableException.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800DBDF0 (LdrpLogFatalUserCallbackException.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x1800E7C6C (WerpBreakIntoDebuggerIfPresent.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, BOOLEAN FirstChance)
{
  NTSTATUS result; // eax

  result = 370;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
