/*
 * XREFs of ?s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x1800F4440
 * Callers:
 *     <none>
 * Callees:
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x1800F4580 (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 *     ?IsCurrentThreadOnInputDesktop@PerSessionState@@YA_NXZ @ 0x1800F4608 (-IsCurrentThreadOnInputDesktop@PerSessionState@@YA_NXZ.c)
 *     ?DesktopSwitchObserved@StartWindowTelemetry@@SAXXZ @ 0x1800F47DC (-DesktopSwitchObserved@StartWindowTelemetry@@SAXXZ.c)
 *     ?ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ @ 0x1800F4D94 (-ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ.c)
 */

void __fastcall XamlLauncher::s_LauncherDesktopSwitchEventProc(
        PerSessionState *hWinEventHook,
        DWORD event,
        HWND hwnd,
        LONG idObject)
{
  PerSessionState *v5; // rcx
  HANDLE EventW; // rax
  XamlLauncher *v7; // rcx

  if ( event == 32
    && PerSessionState::IsCurrentThreadOnInputDesktop(hWinEventHook)
    && PerSessionState::HasLoginCompleted(v5)
    && XamlLauncher::s_pLauncher )
  {
    if ( !CLauncherLoginEvent::s_hEvent )
    {
      EventW = CreateEventW(0LL, 1, 1, L"ShellLauncherLoginEvent");
      CLauncherLoginEvent::s_hEvent = EventW;
      if ( EventW )
        SetEvent(EventW);
    }
    UnhookWinEvent((HWINEVENTHOOK)hWinEventHook);
    StartWindowTelemetry::DesktopSwitchObserved();
    v7 = XamlLauncher::s_pLauncher;
    *((_BYTE *)XamlLauncher::s_pLauncher + 373) = 1;
    XamlLauncher::ConsiderShowStartAutomatically(v7);
  }
}
