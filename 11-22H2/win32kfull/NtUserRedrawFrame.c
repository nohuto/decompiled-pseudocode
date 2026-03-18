/*
 * XREFs of NtUserRedrawFrame @ 0x1C01D8E80
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowPos @ 0x1C0028898 (xxxSetWindowPos.c)
 */

__int64 __fastcall NtUserRedrawFrame(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  struct tagWND *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]

  v14 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = (struct tagWND *)v2;
  if ( v2 )
  {
    *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v13;
    *((_QWORD *)&v13 + 1) = v2;
    HMLockObject(v2);
    xxxSetWindowPos(v8, 0LL, 0LL, 0LL, 0, 0, 55);
    ThreadUnlock1(v10, v9, v11);
    v7 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
