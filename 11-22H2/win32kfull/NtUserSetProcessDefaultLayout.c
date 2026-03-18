/*
 * XREFs of NtUserSetProcessDefaultLayout @ 0x1C01DC6D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetProcessDefaultLayout(int a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 CurrentProcessWin32Process; // rax

  EnterCrit(0LL, 0LL);
  if ( (a1 & 0xFFFFFFF8) != 0 )
  {
    UserSetLastError(87);
    v7 = 0LL;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
    v3 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v4 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v3 = v4 & CurrentProcessWin32Process;
    }
    *(_DWORD *)(v3 + 840) = a1;
    v7 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
