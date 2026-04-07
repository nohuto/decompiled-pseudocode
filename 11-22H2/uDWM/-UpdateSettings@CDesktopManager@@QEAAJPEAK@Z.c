/*
 * XREFs of ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18003A654
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180039CEC (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800493DC (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x1800393FC (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x180039ECC (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003A9F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil.c)
 *     ?InvalidateColors@ColorCache@@SAXXZ @ 0x18003AA7C (-InvalidateColors@ColorCache@@SAXXZ.c)
 *     ?UpdateIsLightTheme@CWindowList@@QEAAXXZ @ 0x18003D53C (-UpdateIsLightTheme@CWindowList@@QEAAXXZ.c)
 *     ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x18003D5F0 (-SetupColorization@CDesktopManager@@AEAAXXZ.c)
 *     ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x18003DAE4 (-SetWindowAnimation@CDesktopManager@@SAX_N@Z.c)
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x18003EA04 (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 *     ?RefreshPresentationModeSettings@CContactManager@@QEAAJXZ @ 0x1800412E0 (-RefreshPresentationModeSettings@CContactManager@@QEAAJXZ.c)
 *     ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x1800490C0 (-SetupDPIValues@CDesktopManager@@QEAAXXZ.c)
 *     ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ @ 0x18004B6CC (-UpdateWindowShadows@CDesktopManager@@QEAAXXZ.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x180054DE8 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180055510 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?InitializeHighContrast@CDesktopManager@@AEAAXXZ @ 0x180055858 (-InitializeHighContrast@CDesktopManager@@AEAAXXZ.c)
 *     ?ReadSystemColors@CTopLevelWindow@@SAXXZ @ 0x1800560C0 (-ReadSystemColors@CTopLevelWindow@@SAXXZ.c)
 *     ?LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ @ 0x1800571C4 (-LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ.c)
 *     ?ReleaseCVICache@CDesktopManager@@SAXXZ @ 0x180058154 (-ReleaseCVICache@CDesktopManager@@SAXXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     memset_0 @ 0x18005D340 (memset_0.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::UpdateSettings(CDesktopManager *this, unsigned int *a2)
{
  unsigned int v2; // r14d
  int Theme; // edi
  char v4; // r15
  unsigned int *v5; // r12
  unsigned int v7; // ebx
  int v8; // eax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  HMONITOR v13; // rax
  RECT *v14; // rdi
  int v15; // eax
  int SystemMetrics; // eax
  __int64 v17; // rcx
  int v19; // eax
  CDesktopManager *v20; // rdx
  LONG v21; // ecx
  int v22; // ecx
  _DWORD v23[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct tagMONITORINFO mi; // [rsp+38h] [rbp-C8h] BYREF
  int pvParam; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v26[20]; // [rsp+64h] [rbp-9Ch] BYREF
  __int128 v27; // [rsp+78h] [rbp-88h]
  __int128 v28; // [rsp+88h] [rbp-78h]
  __int128 v29; // [rsp+98h] [rbp-68h]
  __int128 v30; // [rsp+A8h] [rbp-58h]
  __int128 v31; // [rsp+B8h] [rbp-48h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  int v33; // [rsp+D0h] [rbp-30h]

  v2 = *a2;
  Theme = 0;
  v4 = 0;
  v5 = a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::GetImpl'::`2'::impl,
    a2);
  if ( (v2 & 0x40D) != 0 )
    ColorCache::InvalidateColors();
  v7 = v2;
  if ( (v2 & 0x10) != 0 && !CDesktopManager::LoadAccentColorSettings(this) )
    v7 = v2 & 0xFFFFFFEF;
  if ( (v7 & 0x20) != 0 )
  {
    v19 = CDesktopManager::ModeChange(this);
    Theme = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xD16u, 0LL);
      goto LABEL_29;
    }
  }
  if ( (v7 & 1) != 0 )
  {
    memset_0(v26, 0, 0x1F4uLL);
    pvParam = 504;
    SystemParametersInfoW(0x29u, 0x1F8u, &pvParam, 0);
    v8 = v33;
    v9 = v28;
    *(_OWORD *)((char *)this + 296) = v27;
    v10 = v29;
    *(_OWORD *)((char *)this + 312) = v9;
    v11 = v30;
    *(_OWORD *)((char *)this + 328) = v10;
    v12 = v31;
    *(_OWORD *)((char *)this + 344) = v11;
    *(_QWORD *)&v11 = v32;
    *(_OWORD *)((char *)this + 360) = v12;
    *((_QWORD *)this + 47) = v11;
    *((_DWORD *)this + 96) = v8;
    *((_DWORD *)this + 97) = GetSystemMetrics(76);
    *((_DWORD *)this + 98) = GetSystemMetrics(77);
    *((_DWORD *)this + 99) = GetSystemMetrics(78);
    *((_DWORD *)this + 100) = GetSystemMetrics(79);
    v13 = MonitorFromWindow(0LL, 1u);
    mi.cbSize = 40;
    v14 = (RECT *)((char *)this + 404);
    if ( GetMonitorInfoW(v13, &mi) )
    {
      if ( !EqualRect((const RECT *)((char *)this + 404), &mi.rcMonitor) )
        CDesktopManager::ReleaseCVICache();
      *v14 = mi.rcMonitor;
    }
    else
    {
      v20 = CDesktopManager::s_pDesktopManagerInstance;
      v21 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 97);
      v14->left = v21;
      *((_DWORD *)this + 103) = *((_DWORD *)v20 + 99) + v21;
      v22 = *((_DWORD *)v20 + 98);
      *((_DWORD *)this + 102) = v22;
      *((_DWORD *)this + 104) = *((_DWORD *)v20 + 100) + v22;
    }
    v15 = CTopLevelWindow::EnsureWindowFrames();
    Theme = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x295u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Theme, 0xD39u, 0LL);
      goto LABEL_29;
    }
    CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth = GetSystemMetrics(5);
    SystemMetrics = GetSystemMetrics(6);
    dword_18014843C = CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth;
    v17 = *((_QWORD *)this + 25);
    dword_180148440 = SystemMetrics;
    dword_180148444 = SystemMetrics;
    if ( v17 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 96LL))(v17, 0LL);
  }
  if ( (v7 & 0x800) == 0 )
  {
    if ( (v7 & 4) == 0 )
      goto LABEL_15;
LABEL_36:
    CDesktopManager::UnloadTheme(this);
    Theme = CDesktopManager::LoadTheme(this);
    if ( Theme < 0 )
      goto LABEL_29;
    v4 = 1;
    goto LABEL_15;
  }
  if ( (v7 & 4) != 0 )
    goto LABEL_36;
  CDesktopManager::InitializeHighContrast(this);
LABEL_15:
  if ( (v7 & 0x400) != 0 || v4 )
  {
    CDesktopManager::SetupColorization(this);
    CWindowList::UpdateIsLightTheme(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54));
  }
  if ( (v7 & 0x808) != 0 )
    CTopLevelWindow::ReadSystemColors();
  if ( (v7 & 2) != 0 )
    CWindowList::RecreateDesktopWindowReplacementForDesktops(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                             + 54));
  if ( (v7 & 0x40) != 0 )
    CDesktopManager::UpdateWindowShadows(this);
  if ( (v7 & 0x80u) != 0 )
    CDesktopManager::SetupDPIValues(this);
  if ( (v7 & 0x100) != 0 )
    CContactManager::RefreshPresentationModeSettings(*((CContactManager **)this + 20));
  if ( (v7 & 0x200) != 0 )
  {
    v23[0] = 8;
    if ( SystemParametersInfoW(0x48u, 8u, v23, 0) )
      CDesktopManager::SetWindowAnimation(v23[1] != 0);
  }
LABEL_29:
  *v5 = v7;
  return (unsigned int)Theme;
}
