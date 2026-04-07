/*
 * XREFs of ?OnWindowStyleChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180063E00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetHostWindowHandleForProxyWindow@CProjectionBorderManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z @ 0x1800D4A28 (-_GetHostWindowHandleForProxyWindow@CProjectionBorderManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@.c)
 *     ?_UpdateCaptureControllerCaptureState@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800D5414 (-_UpdateCaptureControllerCaptureState@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::OnWindowStyleChanged(
        CProjectionBorderManager *this,
        struct CWindowData *a2)
{
  HWND HostWindowHandleForProxyWindow; // rax
  bool v3; // r8
  CProjectionBorderManager *v4; // r9
  int updated; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_DWORD *)a2 + 114) )
    return 0LL;
  if ( *((_QWORD *)a2 + 81) )
    return 0LL;
  HostWindowHandleForProxyWindow = CProjectionBorderManager::_GetHostWindowHandleForProxyWindow(this, a2);
  updated = CProjectionBorderManager::_UpdateCaptureControllerCaptureState(v4, HostWindowHandleForProxyWindow, v3);
  v6 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x401,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)updated,
    v8);
  return v6;
}
