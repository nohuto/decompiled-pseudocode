/*
 * XREFs of _DwmLockScreenUpdates @ 0x1C00BB9D0
 * Callers:
 *     NtUserDwmLockScreenUpdates @ 0x1C00BB990 (NtUserDwmLockScreenUpdates.c)
 * Callees:
 *     xxxRedrawWindow @ 0x1C0031604 (xxxRedrawWindow.c)
 *     IsCurrentDesktopComposed @ 0x1C006D940 (IsCurrentDesktopComposed.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DwmLockScreenUpdates(int a1)
{
  struct tagWND *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
  {
    g_bLockUpdatesForDwm = a1;
    if ( grpdeskRitInput && g_bLockUpdatesForDwm && !a1 && !(unsigned int)IsCurrentDesktopComposed() )
    {
      v7[2] = 0LL;
      v3 = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
      v7[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v7;
      v7[1] = v3;
      if ( v3 )
        HMLockObject(v3);
      xxxRedrawWindow(v3, 0LL, 0LL, 133);
      ThreadUnlock1(v5, v4, v6);
    }
  }
  else
  {
    UserSetLastError(5LL);
  }
  return 0LL;
}
