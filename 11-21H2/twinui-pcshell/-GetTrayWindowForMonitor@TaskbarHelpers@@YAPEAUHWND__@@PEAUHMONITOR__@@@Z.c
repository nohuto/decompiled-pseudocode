/*
 * XREFs of ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x18022CC8A
 * Callers:
 *     ?NotifyTrayOfCortanaVisibility@CortanaStoreAppExperienceManager@@AEAAJ_N@Z @ 0x180387DBC (-NotifyTrayOfCortanaVisibility@CortanaStoreAppExperienceManager@@AEAAJ_N@Z.c)
 *     ?NotifyTrayFlyoutIsVisible@CBaseTrayFlyoutExperienceManager@@AEAAX_N@Z @ 0x180394A40 (-NotifyTrayFlyoutIsVisible@CBaseTrayFlyoutExperienceManager@@AEAAX_N@Z.c)
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x180397220 (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 *     ?CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ @ 0x18049BEE0 (-CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ.c)
 *     ?_EnsureDesktopZOrder@CMultitaskingViewFrame@@AEAAXXZ @ 0x1804B2778 (-_EnsureDesktopZOrder@CMultitaskingViewFrame@@AEAAXXZ.c)
 *     ?NotifyTrayOfVisibility@VoiceAssistantPositioner@@AEAAX_N@Z @ 0x1804F5D10 (-NotifyTrayOfVisibility@VoiceAssistantPositioner@@AEAAX_N@Z.c)
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z @ 0x1805526C8 (-Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z.c)
 *     ?TryShowHideWindow@ApplicationFlyoutView@@AEAAXPEAUHWND__@@_N@Z @ 0x1805D3230 (-TryShowHideWindow@ApplicationFlyoutView@@AEAAXPEAUHWND__@@_N@Z.c)
 * Callees:
 *     <none>
 */

HWND __fastcall TaskbarHelpers::GetTrayWindowForMonitor(TaskbarHelpers *this, HMONITOR a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  v3[1] = this;
  v3[0] = &v4;
  EnumWindows(
    (WNDENUMPROC)EnumWindowsHelpers::LambdaEnumWindowsProc<_lambda_e4007893a4612b6c480bf18e255795c5_>,
    (LPARAM)v3);
  return (HWND)v4;
}
