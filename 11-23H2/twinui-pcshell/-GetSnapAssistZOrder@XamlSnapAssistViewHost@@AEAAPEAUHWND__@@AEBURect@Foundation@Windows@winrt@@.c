/*
 * XREFs of ?GetSnapAssistZOrder@XamlSnapAssistViewHost@@AEAAPEAUHWND__@@AEBURect@Foundation@Windows@winrt@@@Z @ 0x18076CC48
 * Callers:
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18076D9B0 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180192FD4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$SnapAssistZOrder@AEBUCRect@Geometry@@AEAPEAUHWND__@@AEAPEAU3@@XamlSwitcherTelemetry@@SAXAEBUCRect@Geometry@@AEAPEAUHWND__@@1@Z @ 0x1807692D8 (--$SnapAssistZOrder@AEBUCRect@Geometry@@AEAPEAUHWND__@@AEAPEAU3@@XamlSwitcherTelemetry@@SAXAEBUC.c)
 */

HWND __fastcall XamlSnapAssistViewHost::GetSnapAssistZOrder(
        XamlSnapAssistViewHost *this,
        const struct winrt::Windows::Foundation::Rect *a2)
{
  float v2; // xmm1_4
  float v4; // xmm0_4
  int v5; // r10d
  float v6; // xmm1_4
  int v7; // r9d
  float v8; // xmm0_4
  __int64 v9; // r8
  __int64 v10; // r9
  HWND v12; // [rsp+20h] [rbp-50h] BYREF
  HWND v13; // [rsp+28h] [rbp-48h] BYREF
  LPARAM lParam[4]; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT v15; // [rsp+50h] [rbp-20h] BYREF

  v2 = *((float *)a2 + 1);
  v4 = *(float *)a2;
  v12 = 0LL;
  v13 = 0LL;
  v5 = (int)v2;
  lParam[0] = (LPARAM)this;
  v6 = v2 + *((float *)a2 + 3);
  v7 = (int)v4;
  v8 = v4 + *((float *)a2 + 2);
  *(_QWORD *)&v15.left = __PAIR64__(v5, v7);
  v15.bottom = (int)v6;
  lParam[1] = (LPARAM)&v15;
  lParam[2] = (LPARAM)&v13;
  lParam[3] = (LPARAM)&v12;
  v15.right = (int)v8;
  EnumWindows(
    (WNDENUMPROC)EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_b90ba3034bff2a6798db754b0e1f537a___,
    (LPARAM)lParam);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    1u,
    v9,
    v10);
  if ( !v12 )
    v12 = (HWND)*((_QWORD *)this + 87);
  XamlSwitcherTelemetry::SnapAssistZOrder<Geometry::CRect const &,HWND__ * &,HWND__ * &>(&v15, &v12, &v13);
  return v12;
}
