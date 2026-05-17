/*
 * XREFs of ZwRaiseException @ 0x1800A6E40
 * Callers:
 *     RtlRaiseException @ 0x180032D00 (RtlRaiseException.c)
 *     RtlUnwindEx @ 0x180038900 (RtlUnwindEx.c)
 *     KiUserExceptionDispatcher @ 0x1800A8030 (KiUserExceptionDispatcher.c)
 *     RtlRaiseNoncontinuableException @ 0x1800A8AA0 (RtlRaiseNoncontinuableException.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800DB8D0 (LdrpLogFatalUserCallbackException.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x1800E8DDC (WerpBreakIntoDebuggerIfPresent.c)
 * Callees:
 *     <none>
 */

__int64 ZwRaiseException()
{
  __int64 result; // rax

  result = 367LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
