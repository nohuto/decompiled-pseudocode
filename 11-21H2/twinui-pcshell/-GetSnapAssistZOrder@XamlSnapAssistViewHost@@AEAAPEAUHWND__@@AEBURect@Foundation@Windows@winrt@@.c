/*
 * XREFs of ?GetSnapAssistZOrder@XamlSnapAssistViewHost@@AEAAPEAUHWND__@@AEBURect@Foundation@Windows@winrt@@@Z @ 0x180602728
 * Callers:
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1806031D0 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$SnapAssistZOrder@AEBUCRect@Geometry@@AEAPEAUHWND__@@AEAPEAU3@@XamlSwitcherTelemetry@@SAXAEBUCRect@Geometry@@AEAPEAUHWND__@@1@Z @ 0x1805FF8B4 (--$SnapAssistZOrder@AEBUCRect@Geometry@@AEAPEAUHWND__@@AEAPEAU3@@XamlSwitcherTelemetry@@SAXAEBUC.c)
 */

HWND __fastcall XamlSnapAssistViewHost::GetSnapAssistZOrder(
        XamlSnapAssistViewHost *this,
        const struct winrt::Windows::Foundation::Rect *a2)
{
  float v2; // xmm1_4
  float v3; // xmm0_4
  LONG v4; // r10d
  float v5; // xmm1_4
  LONG v6; // r9d
  float v7; // xmm0_4
  HWND v9; // [rsp+20h] [rbp-50h] BYREF
  HWND v10; // [rsp+28h] [rbp-48h] BYREF
  LPARAM lParam[4]; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT v12; // [rsp+50h] [rbp-20h] BYREF

  v2 = *((float *)a2 + 1);
  v3 = *(float *)a2;
  v9 = 0LL;
  v10 = 0LL;
  v4 = (int)v2;
  lParam[0] = (LPARAM)this;
  v5 = v2 + *((float *)a2 + 3);
  v6 = (int)v3;
  v12.top = v4;
  v7 = v3 + *((float *)a2 + 2);
  v12.left = v6;
  v12.bottom = (int)v5;
  lParam[1] = (LPARAM)&v12;
  lParam[2] = (LPARAM)&v10;
  lParam[3] = (LPARAM)&v9;
  v12.right = (int)v7;
  EnumWindows(
    (WNDENUMPROC)EnumWindowsHelpers::LambdaEnumWindowsProc<_lambda_b90ba3034bff2a6798db754b0e1f537a_>,
    (LPARAM)lParam);
  XamlSwitcherTelemetry::SnapAssistZOrder<Geometry::CRect const &,HWND__ * &,HWND__ * &>(&v12, &v9, &v10);
  return v9;
}
