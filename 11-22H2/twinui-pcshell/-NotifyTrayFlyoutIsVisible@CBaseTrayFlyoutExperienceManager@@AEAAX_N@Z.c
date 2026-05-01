/*
 * XREFs of ?NotifyTrayFlyoutIsVisible@CBaseTrayFlyoutExperienceManager@@AEAAX_N@Z @ 0x18012D540
 * Callers:
 *     ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x18012D280 (--1CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 *     ?OnViewDestroyed@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180473A10 (-OnViewDestroyed@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180473C70 (-OnViewHidden@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180474030 (-OnViewShown@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x1802D5004 (-GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z.c)
 */

void __fastcall CBaseTrayFlyoutExperienceManager::NotifyTrayFlyoutIsVisible(
        CBaseTrayFlyoutExperienceManager *this,
        unsigned __int8 a2)
{
  WPARAM v2; // rbx
  TaskbarHelpers *v4; // rax
  HMONITOR v5; // rdx
  HWND TrayWindowForMonitor; // rax

  v2 = a2;
  if ( *((_BYTE *)this + 466) != a2 )
  {
    v4 = (TaskbarHelpers *)MonitorFromRect((LPCRECT)((char *)this + 392), 1u);
    TrayWindowForMonitor = TaskbarHelpers::GetTrayWindowForMonitor(v4, v5);
    PostMessageW(TrayWindowForMonitor, 0x4F6u, v2, 0LL);
    *((_BYTE *)this + 466) = v2;
  }
}
