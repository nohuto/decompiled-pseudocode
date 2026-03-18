/*
 * XREFs of NtUserRegisterPointerDeviceNotifications @ 0x1C00BAB30
 * Callers:
 *     <none>
 * Callees:
 *     _RegisterPointerDeviceNotifications @ 0x1C00BAC14 (_RegisterPointerDeviceNotifications.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserRegisterPointerDeviceNotifications(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  __int64 v10; // rdi
  __int64 CurrentProcessWin32Process; // rax
  int v13; // [rsp+40h] [rbp+18h] BYREF
  int v14; // [rsp+44h] [rbp+1Ch]

  v14 = -1;
  v13 = 0x2000;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v9 = 0;
  v10 = v4;
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    v7 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v6 = -*(_QWORD *)CurrentProcessWin32Process;
      v5 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v7 = v5 & CurrentProcessWin32Process;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v10 + 16) + 424LL) == v7 )
    {
      if ( a2 && !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 888LL, &v13) )
      {
        EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 424LL), 0LL, 9LL);
        UserSetLastError(5LL);
      }
      else
      {
        v9 = RegisterPointerDeviceNotifications(v10, a2);
      }
    }
    else
    {
      v9 = 5;
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
