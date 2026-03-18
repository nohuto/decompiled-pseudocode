/*
 * XREFs of NtUserSetAppImeLevel @ 0x1C01DA450
 * Callers:
 *     <none>
 * Callees:
 *     InternalSetProp @ 0x1C00C671C (InternalSetProp.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetAppImeLevel(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 CurrentProcessWin32Process; // rax

  v2 = a2;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v9 = 0LL;
  v10 = v4;
  if ( v4 )
  {
    if ( (*gpsi & 4) != 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(gpsi);
      v7 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
      {
        v6 = -*(_QWORD *)CurrentProcessWin32Process;
        v5 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        v7 = v5 & CurrentProcessWin32Process;
      }
      if ( *(_QWORD *)(*(_QWORD *)(v10 + 16) + 424LL) == v7 )
      {
        InternalSetProp(v10, (unsigned __int16)atomImeLevel, v2, 5u);
        v9 = 1LL;
      }
    }
    else
    {
      UserSetLastError(120);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
