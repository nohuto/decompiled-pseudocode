/*
 * XREFs of KiUserExceptionDispatcher @ 0x1800A8030
 * Callers:
 *     <none>
 * Callees:
 *     RtlGuardRestoreContext @ 0x180035390 (RtlGuardRestoreContext.c)
 *     RtlDispatchException @ 0x180035990 (RtlDispatchException.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwRaiseException @ 0x1800A6E40 (ZwRaiseException.c)
 */

void __noreturn KiUserExceptionDispatcher()
{
  int v0; // eax
  __int64 v1; // rdx
  __int64 v2; // r8
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( Wow64PrepareForException )
    Wow64PrepareForException(&STACK[0x4F0], &retaddr);
  if ( RtlDispatchException((__int64)&STACK[0x4F0], (__int64)&retaddr) )
    RtlGuardRestoreContext((PCONTEXT)&retaddr, 0LL);
  else
    v0 = ZwRaiseException();
  RtlRaiseStatus(v0, v1, v2);
}
