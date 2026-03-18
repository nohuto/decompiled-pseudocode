/*
 * XREFs of ?ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x1C010DB58
 * Callers:
 *     NtUserSetWindowPos @ 0x1C0025580 (NtUserSetWindowPos.c)
 *     NtUserNotifyWinEvent @ 0x1C00739F0 (NtUserNotifyWinEvent.c)
 *     NtUserEnableShellWindowManagementBehavior @ 0x1C010DA80 (NtUserEnableShellWindowManagementBehavior.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C020EBC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     EditionTouchResizeAction @ 0x1C02101C0 (EditionTouchResizeAction.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C021CF44 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 */

char __fastcall ShellWindowManagement::ExtendedBehaviorEnabled(ShellWindowManagement *this)
{
  int v1; // ebx
  __int64 ThreadWin32Thread; // rax
  char v3; // dl
  __int64 v4; // r8

  v1 = (int)this;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v3 = 0;
  v4 = *(_QWORD *)(ThreadWin32Thread + 456);
  if ( v4 )
    return (v1 & *(_DWORD *)(v4 + 328) & 0xFF000000) != 0;
  return v3;
}
