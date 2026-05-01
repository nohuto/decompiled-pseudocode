/*
 * XREFs of IsFullscreen @ 0x1801201F8
 * Callers:
 *     ShouldIgnoreWindow @ 0x1801201A0 (ShouldIgnoreWindow.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

bool __fastcall IsFullscreen(HWND hWnd, int a2)
{
  HMONITOR v4; // rax
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-58h] BYREF
  struct tagRECT Rect; // [rsp+48h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+58h] [rbp-20h] BYREF

  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 36);
  v4 = MonitorFromWindow(hWnd, 1u);
  if ( !GetMonitorInfoW(v4, &mi) || !GetClientRect(hWnd, &Rect) || SubtractRect(&rcDst, &mi.rcMonitor, &Rect) )
    return 0;
  if ( EqualRect(&mi.rcWork, &mi.rcMonitor) )
    return (a2 & 0x800000) == 0;
  return 1;
}
