/*
 * XREFs of ?s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x180064CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_StartAutoShowNewDevices@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800653A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_StartAutoShowNewDevices@@@details@wil@@QE.c)
 *     ?ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ @ 0x180065EFC (-ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ.c)
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x180065F3C (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 *     ?IsCurrentThreadOnInputDesktop@PerSessionState@@YA_NXZ @ 0x180065FC4 (-IsCurrentThreadOnInputDesktop@PerSessionState@@YA_NXZ.c)
 *     ?DesktopSwitchObserved@StartWindowTelemetry@@SAXXZ @ 0x1800C819C (-DesktopSwitchObserved@StartWindowTelemetry@@SAXXZ.c)
 */

void __fastcall XamlLauncher::s_LauncherDesktopSwitchEventProc(
        PerSessionState *hWinEventHook,
        DWORD event,
        HWND hwnd,
        LONG idObject)
{
  PerSessionState *v5; // rcx
  HANDLE EventW; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  XamlLauncher *v9; // rcx

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
    LOBYTE(v7) = 3;
    LOBYTE(v8) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_StartAutoShowNewDevices>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_StartAutoShowNewDevices>::GetImpl'::`2'::impl,
      v8,
      v7);
    StartWindowTelemetry::DesktopSwitchObserved();
    v9 = XamlLauncher::s_pLauncher;
    *((_BYTE *)XamlLauncher::s_pLauncher + 324) = 1;
    XamlLauncher::ConsiderShowStartAutomatically(v9);
  }
}
