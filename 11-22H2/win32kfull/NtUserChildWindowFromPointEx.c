/*
 * XREFs of NtUserChildWindowFromPointEx @ 0x1C0154220
 * Callers:
 *     <none>
 * Callees:
 *     _ChildWindowFromPointEx @ 0x1C01556EA (_ChildWindowFromPointEx.c)
 */

__int64 __fastcall NtUserChildWindowFromPointEx(__int64 a1, __int64 a2, __int64 a3)
{
  struct tagWND *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 *v10; // rax

  EnterSharedCrit(a1, a2, a3);
  v4 = (struct tagWND *)ValidateHwnd(a1);
  v9 = 0LL;
  if ( v4 )
  {
    v10 = (__int64 *)ChildWindowFromPointEx(v4);
    if ( v10 )
      v9 = *v10;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
