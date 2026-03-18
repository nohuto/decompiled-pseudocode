/*
 * XREFs of NtUserChildWindowFromPointEx @ 0x1C01F1CF0
 * Callers:
 *     <none>
 * Callees:
 *     _ChildWindowFromPointEx @ 0x1C016D33A (_ChildWindowFromPointEx.c)
 */

__int64 __fastcall NtUserChildWindowFromPointEx(__int64 a1, struct tagPOINT a2, __int64 a3)
{
  char v3; // si
  struct tagWND *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  struct tagWND *v9; // rax

  v3 = a3;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))EnterSharedCrit)(a1, a2, a3);
  v6 = (struct tagWND *)ValidateHwnd(a1);
  v8 = 0LL;
  if ( v6 )
  {
    v9 = ChildWindowFromPointEx(v6, a2, v3);
    if ( v9 )
      v8 = *(_QWORD *)v9;
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
