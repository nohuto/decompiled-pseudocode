/*
 * XREFs of ?GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x18004BB38
 * Callers:
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x18004A334 (-PositionView@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x18004BD9C (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180073E70 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180149610 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CActionCenterExperienceManager::GetViewPosition(
        CActionCenterExperienceManager *this,
        struct tagRECT *a2)
{
  HMONITOR v4; // rsi
  const char *v5; // r9
  __int64 v6; // rdx
  HMONITOR v8; // rdx
  int PerMonitorDpi; // eax
  double v10; // xmm0_8
  int v11; // esi
  __int64 v12; // rcx
  int v13; // eax
  int v14; // r14d
  LANGID ThreadUILanguage; // ax
  __int64 v16; // rdx
  POINT pt; // [rsp+20h] [rbp-50h] BYREF
  RECT rc; // [rsp+28h] [rbp-48h] BYREF
  struct tagMONITORINFO mi; // [rsp+38h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  SetRectEmpty(a2);
  if ( *((_QWORD *)this + 19) )
  {
    pt = 0LL;
    v4 = MonitorFromPoint(0LL, 1u);
    if ( v4 == (HMONITOR)-1LL )
    {
      v6 = 1318LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v6,
               (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
               v5);
    }
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 36);
    if ( !GetMonitorInfoW(v4, &mi) )
    {
      v6 = 1321LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v6,
               (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
               v5);
    }
    *a2 = mi.rcMonitor;
    if ( *((_BYTE *)this + 448) )
      *a2 = mi.rcWork;
    PerMonitorDpi = ExperienceManagerUtils::GetPerMonitorDpi((ExperienceManagerUtils *)v4, v8);
    v10 = *((double *)this + 86);
    v11 = PerMonitorDpi;
    if ( v10 > 0.0 )
      a2->bottom -= MulDiv((int)v10, PerMonitorDpi, 96);
    v12 = *((_QWORD *)this + 62);
    rc = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, RECT *, POINT *))(*(_QWORD *)v12 + 40LL))(v12, &rc, &pt);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x53F,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v13,
        pt.x);
    if ( !IsRectEmpty(&rc) && a2->bottom > rc.top && ((pt.x - 1) & 0xFFFFFFFD) == 0 )
      a2->bottom = rc.top;
    if ( *((_BYTE *)this + 449) )
      a2->top = a2->bottom - MulDiv((int)*((float *)this + 44), v11, 96);
    v14 = MulDiv((int)*((float *)this + 43), v11, 96);
    ThreadUILanguage = GetThreadUILanguage();
    if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
      a2->right = v14 + a2->left;
    else
      a2->left = a2->right - v14;
    LOBYTE(v16) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNM>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_TestNM>::GetImpl'::`2'::impl,
      v16);
    if ( !*((_BYTE *)this + 449) )
      *((double *)this + 89) = (double)MulDiv((int)*((float *)this + 44), v11, 96);
  }
  return 0LL;
}
