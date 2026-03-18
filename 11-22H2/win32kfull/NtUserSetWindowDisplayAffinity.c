/*
 * XREFs of NtUserSetWindowDisplayAffinity @ 0x1C01DD1F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 *     SetDisplayAffinity @ 0x1C022CDDC (SetDisplayAffinity.c)
 */

__int64 __fastcall NtUserSetWindowDisplayAffinity(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // r8
  int v13; // ecx
  __int64 v14; // rdx
  struct tagWND *v15; // rcx

  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v9 = 0LL;
  v10 = v4;
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    v12 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v12 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( *(_QWORD *)(*(_QWORD *)(v10 + 16) + 424LL) != v12 )
    {
      v13 = 5;
LABEL_16:
      UserSetLastError(v13);
      goto LABEL_17;
    }
    v14 = *(_QWORD *)(v10 + 104);
    if ( v14 && (*(_DWORD *)(*(_QWORD *)(v14 + 16) + 1272LL) & 0x40000) != 0 )
      v10 = *(_QWORD *)(v10 + 104);
    if ( !IsTopLevelWindow(v10) || a2 && (a2 & 0x11) == 0 )
    {
      v13 = 87;
      goto LABEL_16;
    }
    if ( !(unsigned int)SetDisplayAffinity(v15) )
    {
      v13 = 8;
      goto LABEL_16;
    }
    v9 = 1LL;
  }
LABEL_17:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
