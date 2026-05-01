/*
 * XREFs of ?TryGetOcclusionMarginFromProtectedForegroundWindow@CToastCenterExperienceManager@@CAHXZ @ 0x18043CF0C
 * Callers:
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x180438748 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 CToastCenterExperienceManager::TryGetOcclusionMarginFromProtectedForegroundWindow(void)
{
  HWND ForegroundWindow; // rax
  HWND v1; // rdi
  HMONITOR v2; // rbx
  _DWORD lParam[4]; // [rsp+20h] [rbp-58h] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+30h] [rbp-48h] BYREF

  ForegroundWindow = GetForegroundWindow();
  v1 = ForegroundWindow;
  if ( !ForegroundWindow )
    return 0LL;
  wndpl.length = 44;
  if ( !GetWindowPlacement(ForegroundWindow, &wndpl) )
    return 0LL;
  if ( wndpl.showCmd != 3 )
    return 0LL;
  lParam[1] = 0;
  lParam[2] = 0;
  v2 = MonitorFromPoint(0LL, 1u);
  if ( MonitorFromWindow(v1, 0) != v2 )
    return 0LL;
  lParam[0] = 0;
  EnumChildWindows(v1, (WNDENUMPROC)CToastCenterExperienceManager::FindToastShiftMargin, (LPARAM)lParam);
  return lParam[0];
}
