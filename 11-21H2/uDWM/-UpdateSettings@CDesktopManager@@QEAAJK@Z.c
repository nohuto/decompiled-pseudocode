/*
 * XREFs of ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180016690
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x18001D898 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x180052CB0 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800169E8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil.c)
 *     ?InvalidateColors@ColorCache@@SAXXZ @ 0x180016A70 (-InvalidateColors@ColorCache@@SAXXZ.c)
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x180016ACC (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x180016D44 (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x180017900 (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 *     ?RefreshPresentationModeSettings@CContactManager@@QEAAJXZ @ 0x18003FC38 (-RefreshPresentationModeSettings@CContactManager@@QEAAJXZ.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x18004F63C (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?ReadSystemColors@CTopLevelWindow@@SAXXZ @ 0x180050E74 (-ReadSystemColors@CTopLevelWindow@@SAXXZ.c)
 *     ?InitializeHighContrast@CDesktopManager@@AEAAXXZ @ 0x180050F60 (-InitializeHighContrast@CDesktopManager@@AEAAXXZ.c)
 *     ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ @ 0x180052498 (-UpdateWindowShadows@CDesktopManager@@QEAAXXZ.c)
 *     ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x18005295C (-SetWindowAnimation@CDesktopManager@@SAX_N@Z.c)
 *     ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x180054A38 (-SetupDPIValues@CDesktopManager@@QEAAXXZ.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x18005B7E0 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x18005BCF8 (-SetupColorization@CDesktopManager@@AEAAXXZ.c)
 *     ?UpdateIsLightTheme@CWindowList@@QEAAXXZ @ 0x18005EC18 (-UpdateIsLightTheme@CWindowList@@QEAAXXZ.c)
 *     ?ReleaseCVICache@CDesktopManager@@SAXXZ @ 0x18005F774 (-ReleaseCVICache@CDesktopManager@@SAXXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::UpdateSettings(CDesktopManager *this, __int64 a2)
{
  __int16 v2; // bx
  unsigned int Theme; // edi
  char v5; // r14
  int v6; // eax
  int v7; // eax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  HMONITOR v12; // rax
  int v13; // eax
  int SystemMetrics; // eax
  __int64 v15; // rcx
  CDesktopManager *v17; // rdx
  int v18; // ecx
  int v19; // ecx
  _DWORD v20[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct tagMONITORINFO mi; // [rsp+38h] [rbp-C8h] BYREF
  int pvParam; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v23[20]; // [rsp+64h] [rbp-9Ch] BYREF
  __int128 v24; // [rsp+78h] [rbp-88h]
  __int128 v25; // [rsp+88h] [rbp-78h]
  __int128 v26; // [rsp+98h] [rbp-68h]
  __int128 v27; // [rsp+A8h] [rbp-58h]
  __int128 v28; // [rsp+B8h] [rbp-48h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  int v30; // [rsp+D0h] [rbp-30h]

  v2 = a2;
  LOBYTE(a2) = 1;
  Theme = 0;
  v5 = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::GetImpl'::`2'::impl,
    a2);
  if ( (v2 & 0x40D) != 0 )
    ColorCache::InvalidateColors();
  if ( (v2 & 0x20) != 0 )
  {
    v6 = CDesktopManager::ModeChange(this);
    Theme = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0xD7Eu);
      return Theme;
    }
  }
  if ( (v2 & 1) != 0 )
  {
    memset_0(v23, 0, 0x1F4uLL);
    pvParam = 504;
    SystemParametersInfoW(0x29u, 0x1F8u, &pvParam, 0);
    v7 = v30;
    v8 = v25;
    *(_OWORD *)((char *)this + 280) = v24;
    v9 = v26;
    *(_OWORD *)((char *)this + 296) = v8;
    v10 = v27;
    *(_OWORD *)((char *)this + 312) = v9;
    v11 = v28;
    *(_OWORD *)((char *)this + 328) = v10;
    *(_QWORD *)&v10 = v29;
    *(_OWORD *)((char *)this + 344) = v11;
    *((_QWORD *)this + 45) = v10;
    *((_DWORD *)this + 92) = v7;
    *((_DWORD *)this + 93) = GetSystemMetrics(76);
    *((_DWORD *)this + 94) = GetSystemMetrics(77);
    *((_DWORD *)this + 95) = GetSystemMetrics(78);
    *((_DWORD *)this + 96) = GetSystemMetrics(79);
    v12 = MonitorFromWindow(0LL, 1u);
    mi.cbSize = 40;
    if ( GetMonitorInfoW(v12, &mi) )
    {
      if ( !EqualRect((const RECT *)((char *)this + 388), &mi.rcMonitor) )
        CDesktopManager::ReleaseCVICache();
      *(RECT *)((char *)this + 388) = mi.rcMonitor;
    }
    else
    {
      v17 = CDesktopManager::s_pDesktopManagerInstance;
      v18 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 93);
      *((_DWORD *)this + 97) = v18;
      *((_DWORD *)this + 99) = *((_DWORD *)v17 + 95) + v18;
      v19 = *((_DWORD *)v17 + 94);
      *((_DWORD *)this + 98) = v19;
      *((_DWORD *)this + 100) = *((_DWORD *)v17 + 96) + v19;
    }
    v13 = CTopLevelWindow::EnsureWindowFrames();
    Theme = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x258u);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Theme, 0xDA1u);
      return Theme;
    }
    CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth = GetSystemMetrics(5);
    SystemMetrics = GetSystemMetrics(6);
    dword_180142CBC = CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth;
    v15 = *((_QWORD *)this + 24);
    dword_180142CC0 = SystemMetrics;
    dword_180142CC4 = SystemMetrics;
    if ( v15 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 88LL))(v15, 0LL);
  }
  if ( (v2 & 0x800) != 0 )
  {
    if ( (v2 & 4) == 0 )
    {
      CDesktopManager::InitializeHighContrast(this);
      goto LABEL_15;
    }
  }
  else if ( (v2 & 4) == 0 )
  {
    goto LABEL_15;
  }
  CDesktopManager::UnloadTheme(this);
  Theme = CDesktopManager::LoadTheme(this);
  if ( (Theme & 0x80000000) != 0 )
    return Theme;
  v5 = 1;
LABEL_15:
  if ( (v2 & 0x400) != 0 || v5 )
  {
    CDesktopManager::SetupColorization(this);
    CWindowList::UpdateIsLightTheme(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52));
  }
  if ( (v2 & 0x808) != 0 )
    CTopLevelWindow::ReadSystemColors();
  if ( (v2 & 2) != 0 )
    CWindowList::RecreateDesktopWindowReplacementForDesktops(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                             + 52));
  if ( (v2 & 0x40) != 0 )
    CDesktopManager::UpdateWindowShadows(this);
  if ( (v2 & 0x80u) != 0 )
    CDesktopManager::SetupDPIValues(this);
  if ( (v2 & 0x100) != 0 )
    CContactManager::RefreshPresentationModeSettings(*((CContactManager **)this + 19));
  if ( (v2 & 0x200) != 0 )
  {
    v20[0] = 8;
    if ( SystemParametersInfoW(0x48u, 8u, v20, 0) )
      CDesktopManager::SetWindowAnimation(v20[1] != 0);
  }
  return Theme;
}
