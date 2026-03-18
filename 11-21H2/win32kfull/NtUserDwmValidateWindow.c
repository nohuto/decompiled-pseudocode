/*
 * XREFs of NtUserDwmValidateWindow @ 0x1C007B270
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     GetDesktopView @ 0x1C0078100 (GetDesktopView.c)
 *     LockProcessByClientId @ 0x1C007AC20 (LockProcessByClientId.c)
 */

__int64 __fastcall NtUserDwmValidateWindow(__int64 a1, int a2)
{
  __int64 v2; // rdi
  void *v3; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 ProcessWin32Process; // rax
  __int64 v11; // rdx
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = (void *)a2;
  Object = 0LL;
  EnterSharedCrit();
  v7 = ValidateHwnd(a1);
  if ( v7 )
  {
    CurrentProcess = PsGetCurrentProcess(v6, v5);
    if ( (unsigned int)IsProcessDwm(CurrentProcess) && (int)LockProcessByClientId(v3, (PEPROCESS *)&Object) >= 0 )
    {
      ProcessWin32Process = PsGetProcessWin32Process(Object);
      if ( ProcessWin32Process )
        LOBYTE(v2) = GetDesktopView(ProcessWin32Process, *(_QWORD *)(v7 + 24)) != 0LL;
      else
        UserSetLastError(5LL, v11);
      ObfDereferenceObject(Object);
    }
    else
    {
      UserSetLastError(5LL, v9);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v2;
}
