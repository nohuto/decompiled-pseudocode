/*
 * XREFs of ?RecalculateClipRect@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@W4IHM_DISPLAY_MODE@@@Z @ 0x180474910
 * Callers:
 *     ?HandleInputHostVisibilityChanged@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@W4IHM_DISPLAY_MODE@@@Z @ 0x1804725D8 (-HandleInputHostVisibilityChanged@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@W4IHM_DISP.c)
 *     ?SetTrayItemRect@CBaseTrayFlyoutExperienceManager@@IEAAJAEBURect@Foundation@Windows@@@Z @ 0x18047517C (-SetTrayItemRect@CBaseTrayFlyoutExperienceManager@@IEAAJAEBURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::RecalculateClipRect(__int64 a1, const RECT *a2, int a3)
{
  HMONITOR v6; // rax
  const char *v7; // r9
  bool v9; // zf
  LONG top; // ecx
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = MonitorFromRect((LPCRECT)(a1 + 392), 1u);
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 36);
  if ( !GetMonitorInfoW(v6, &mi) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x336,
             (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
             v7);
  v9 = *(_BYTE *)(a1 + 465) == 0;
  *(RECT *)(a1 + 408) = mi.rcWork;
  if ( !v9 && !IsRectEmpty(a2) )
  {
    top = a2->top;
    if ( *(_DWORD *)(a1 + 420) > top && ((a3 - 1) & 0xFFFFFFFD) == 0 )
      *(_DWORD *)(a1 + 420) = top;
  }
  return 0LL;
}
