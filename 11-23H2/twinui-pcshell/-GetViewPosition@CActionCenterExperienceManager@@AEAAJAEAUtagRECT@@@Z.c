/*
 * XREFs of ?GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x18001A074
 * Callers:
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x180019278 (-PositionView@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?DynamicSafeWorkArea@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18001A360 (-DynamicSafeWorkArea@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shel.c)
 *     ?GetDisplayMonitorInfoForMonitor@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x18001A3A8 (-GetDisplayMonitorInfoForMonitor@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UID.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x1800D5CD4 (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014F194 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::GetViewPosition(
        CActionCenterExperienceManager *this,
        struct tagRECT *a2)
{
  const char *v4; // r9
  HMONITOR v5; // r14
  __int64 v6; // rdx
  HMONITOR v8; // rdx
  POINT v9; // rbx
  LONG right; // r8d
  LONG v11; // ecx
  int PerMonitorDpi; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // ebx
  double v16; // xmm0_8
  int v17; // eax
  double v18; // xmm0_8
  int v19; // ecx
  int v20; // r14d
  LANGID ThreadUILanguage; // ax
  __int64 v22; // rdx
  __int64 v23; // r8
  POINT pt; // [rsp+20h] [rbp-50h] BYREF
  RECT rc; // [rsp+28h] [rbp-48h] BYREF
  tagMONITORINFO mi; // [rsp+38h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  SetRectEmpty(a2);
  if ( *((_QWORD *)this + 19) )
  {
    pt = 0LL;
    v5 = MonitorFromPoint(0LL, 1u);
    if ( v5 == (HMONITOR)-1LL )
    {
      v6 = 1464LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v6,
               (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
               v4);
    }
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 36);
    if ( !GetMonitorInfoW(v5, &mi) )
    {
      v6 = 1467LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v6,
               (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
               v4);
    }
    *a2 = mi.rcMonitor;
    if ( *((_BYTE *)this + 456) && *((_QWORD *)this + 43) )
    {
      winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>::GetDisplayMonitorInfoForMonitor(
        (char *)this + 344,
        &pt,
        v5);
      v9 = pt;
      if ( pt )
      {
        winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::DynamicSafeWorkArea(
          &pt,
          &rc);
        v8 = (HMONITOR)(unsigned int)(int)*(float *)&rc.top;
        right = mi.rcMonitor.right;
        v11 = (int)(float)(*(float *)&rc.bottom + *(float *)&rc.top);
        a2->left = mi.rcMonitor.left;
        a2->top = (int)v8;
        a2->right = right;
        a2->bottom = v11;
      }
      else
      {
        *a2 = mi.rcWork;
      }
      if ( v9 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&pt);
    }
    PerMonitorDpi = ExperienceManagerUtils::GetPerMonitorDpi((ExperienceManagerUtils *)v5, v8);
    v15 = PerMonitorDpi;
    v16 = *((double *)this + 87);
    if ( v16 > 0.0 )
      a2->bottom -= MulDiv((int)v16, PerMonitorDpi, 96);
    LOBYTE(v14) = 3;
    LOBYTE(v13) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNM>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_TestNM>::GetImpl'::`2'::impl,
      v13,
      v14);
    rc = 0LL;
    v17 = (*(__int64 (__fastcall **)(_QWORD, RECT *, POINT *))(**((_QWORD **)this + 63) + 40LL))(
            *((_QWORD *)this + 63),
            &rc,
            &pt);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5E8,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v17,
        pt.x);
    if ( !IsRectEmpty(&rc) && a2->bottom > rc.top && ((pt.x - 1) & 0xFFFFFFFD) == 0 )
      a2->bottom = rc.top;
    if ( *((_BYTE *)this + 457) )
    {
      v18 = *((double *)this + 92);
      v19 = (int)v18;
      if ( v18 <= 0.0 )
        v19 = (int)*((float *)this + 44);
      a2->top = a2->bottom - MulDiv(v19, v15, 96);
    }
    v20 = MulDiv((int)*((float *)this + 43), v15, 96);
    ThreadUILanguage = GetThreadUILanguage();
    if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
      a2->right = v20 + a2->left;
    else
      a2->left = a2->right - v20;
    LOBYTE(v23) = 3;
    LOBYTE(v22) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNM>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_TestNM>::GetImpl'::`2'::impl,
      v22,
      v23);
    if ( !*((_BYTE *)this + 457) )
      *((double *)this + 90) = (double)MulDiv((int)*((float *)this + 44), v15, 96);
  }
  return 0LL;
}
