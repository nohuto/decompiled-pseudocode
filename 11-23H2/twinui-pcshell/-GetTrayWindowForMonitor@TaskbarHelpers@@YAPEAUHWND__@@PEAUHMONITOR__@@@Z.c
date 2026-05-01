/*
 * XREFs of ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x1802D5004
 * Callers:
 *     ?NotifyTrayFlyoutIsVisible@CBaseTrayFlyoutExperienceManager@@AEAAX_N@Z @ 0x18012D540 (-NotifyTrayFlyoutIsVisible@CBaseTrayFlyoutExperienceManager@@AEAAX_N@Z.c)
 *     ?NotifyTrayOfCortanaVisibility@CortanaStoreAppExperienceManager@@AEAAJ_N@Z @ 0x18045BF6C (-NotifyTrayOfCortanaVisibility@CortanaStoreAppExperienceManager@@AEAAJ_N@Z.c)
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x180475BD8 (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 *     ?CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ @ 0x18055597C (-CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ.c)
 *     ?_EnsureDesktopZOrder@CMultitaskingViewFrame@@AEAAXXZ @ 0x18056F0C8 (-_EnsureDesktopZOrder@CMultitaskingViewFrame@@AEAAXXZ.c)
 *     ?NotifyTrayOfVisibility@VoiceAssistantPositioner@@AEAAX_N@Z @ 0x1805AD994 (-NotifyTrayOfVisibility@VoiceAssistantPositioner@@AEAAX_N@Z.c)
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z @ 0x18060E688 (-Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z.c)
 *     ?Initialize@VirtualDesktopHotKeyWindow@@QEAAJXZ @ 0x180619924 (-Initialize@VirtualDesktopHotKeyWindow@@QEAAJXZ.c)
 *     ?TryShowHideWindow@ApplicationFlyoutView@@AEAAXPEAUHWND__@@_N@Z @ 0x1806C6210 (-TryShowHideWindow@ApplicationFlyoutView@@AEAAXPEAUHWND__@@_N@Z.c)
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
