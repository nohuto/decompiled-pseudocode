/*
 * XREFs of NtUserUndelegateInput @ 0x1C00B5D40
 * Callers:
 *     <none>
 * Callees:
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C0015660 (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserUndelegateInput(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // r8

  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v9 = 0LL;
  v10 = v4;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 260) && a2 - 1 <= 1 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
      v14 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
        v14 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( *(_QWORD *)(*(_QWORD *)(v10 + 16) + 424LL) == v14 )
      {
        _HandleDelegatedInput(*(struct tagTHREADINFO **)(v10 + 264), a2, 0LL);
        CleanupInputDelegation(v10);
        v9 = 1LL;
        goto LABEL_5;
      }
      v11 = 5LL;
    }
    else
    {
      v11 = 87LL;
    }
    UserSetLastError(v11);
  }
LABEL_5:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
