/*
 * XREFs of KiUserExceptionDispatcher @ 0x1800A4F30
 * Callers:
 *     <none>
 * Callees:
 *     RtlDispatchException @ 0x18001E680 (RtlDispatchException.c)
 *     RtlGuardRestoreContext @ 0x18006DA50 (RtlGuardRestoreContext.c)
 *     ZwRaiseException @ 0x1800A3CE0 (ZwRaiseException.c)
 *     RtlRaiseStatus @ 0x1801106D0 (RtlRaiseStatus.c)
 */

void __noreturn KiUserExceptionDispatcher()
{
  unsigned int v0; // eax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( Wow64PrepareForException )
    Wow64PrepareForException(&STACK[0x4F0], &retaddr);
  if ( RtlDispatchException((__int64)&STACK[0x4F0], (__int64)&retaddr) )
    RtlGuardRestoreContext((PCONTEXT)&retaddr, 0LL);
  else
    v0 = ZwRaiseException();
  RtlRaiseStatus(v0);
}
