/*
 * XREFs of NtUserCheckWindowThreadDesktop @ 0x1C01CD720
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     GetConsoleDesktop @ 0x1C01BEB28 (GetConsoleDesktop.c)
 */

__int64 __fastcall NtUserCheckWindowThreadDesktop(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  __int64 v11; // rdi
  __int64 v12; // rax
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF
  __int64 v16; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2;
  EnterSharedCrit(a1, a2, a3);
  v5 = ValidateHwnd(a1);
  v10 = 0;
  v11 = v5;
  if ( v5 )
  {
    v12 = PtiFromThreadId(v3);
    if ( v12 )
    {
      v10 = ValidatePwndDesktop(v11, v12);
    }
    else
    {
      v16 = 0LL;
      v15 = 0LL;
      if ( (int)GetConsoleDesktop(v3, v14, &v15, &v16) < 0 )
        UserSetLastError(87);
      else
        LOBYTE(v10) = *(_QWORD *)(v11 + 24) == v15;
    }
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v10;
}
