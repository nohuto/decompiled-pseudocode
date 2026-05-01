/*
 * XREFs of ?GetFrameRectForView@TabletModePositioner@@CAXPEAUIApplicationView@@PEAUtagRECT@@@Z @ 0x1805BC150
 * Callers:
 *     ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x1805C29C8 (-ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Tab.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

void __fastcall TabletModePositioner::GetFrameRectForView(
        __int64 (__fastcall ***a1)(ApplicationViewHelpers *, GUID *, __int64),
        struct tagRECT *a2)
{
  HWND WindowForView; // rbx
  _BYTE v4[32]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v5; // [rsp+40h] [rbp-38h]
  __int16 v6; // [rsp+42h] [rbp-36h]
  __int16 v7; // [rsp+46h] [rbp-32h]

  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a1, (struct IApplicationView *)a2);
  GetWindowRect(WindowForView, a2);
  memset_0(v4, 0, 0x40uLL);
  if ( (unsigned int)GetWindowCompositionInfo(WindowForView, v4) )
  {
    a2->left += v5;
    a2->right -= v6;
    a2->bottom -= v7;
  }
}
