/*
 * XREFs of ?_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x18003AD20
 * Callers:
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x1800F0FC0 (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800F15EC (-_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIAppli.c)
 *     _lambda_c6623334da8ed11a0378a692878c9731_::operator() @ 0x1804FA740 (_lambda_c6623334da8ed11a0378a692878c9731_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopPositioner::_ConvertWorkAreaRectToScreenRect(
        CDesktopPositioner *this,
        const struct tagRECT *a2,
        struct tagRECT *a3)
{
  HMONITOR v4; // rax
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-38h] BYREF

  *a3 = *a2;
  v4 = MonitorFromRect(a2, 0);
  if ( v4 )
  {
    memset(&mi, 0, sizeof(mi));
    mi.cbSize = 40;
    if ( GetMonitorInfoW(v4, &mi) )
    {
      if ( mi.rcMonitor.left != mi.rcWork.left || mi.rcMonitor.top != mi.rcWork.top )
        OffsetRect(a3, mi.rcWork.left - mi.rcMonitor.left, mi.rcWork.top - mi.rcMonitor.top);
    }
  }
  return 0LL;
}
