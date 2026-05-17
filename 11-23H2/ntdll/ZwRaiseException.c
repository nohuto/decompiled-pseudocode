/*
 * XREFs of ZwRaiseException @ 0x1800A3CE0
 * Callers:
 *     RtlUnwindEx @ 0x18001FF80 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x180054840 (RtlRaiseException.c)
 *     KiUserExceptionDispatcher @ 0x1800A4F30 (KiUserExceptionDispatcher.c)
 *     RtlRaiseNoncontinuableException @ 0x1800A59A0 (RtlRaiseNoncontinuableException.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800DB7A0 (LdrpLogFatalUserCallbackException.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x1800E8F9C (WerpBreakIntoDebuggerIfPresent.c)
 * Callees:
 *     <none>
 */

__int64 ZwRaiseException()
{
  __int64 result; // rax

  result = 370LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
