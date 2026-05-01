/*
 * XREFs of ?GetForegroundAppPhysicalRect@ViewRectHelper@KeyboardHosting@@SAJPEAUtagRECT@@@Z @ 0x18052F8A8
 * Callers:
 *     ?ComputePrimaryViewAnimationDurations@AnimationCoordinationHelper@KeyboardHosting@@SA?AV?$tuple@II@std@@_N0AEBUtagRECT@@@Z @ 0x18052F5D8 (-ComputePrimaryViewAnimationDurations@AnimationCoordinationHelper@KeyboardHosting@@SA-AV-$tuple@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::ViewRectHelper::GetForegroundAppPhysicalRect(LPRECT lpRect)
{
  HWND ForegroundWindow; // rax
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *lpRect = 0LL;
  ForegroundWindow = GetForegroundWindow();
  if ( !ForegroundWindow || GetWindowRect(ForegroundWindow, lpRect) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x31,
             (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrecthelper.cpp",
             v3);
}
