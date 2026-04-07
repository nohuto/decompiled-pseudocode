/*
 * XREFs of ?_GetDefaultSDRBoostForWindow@CProjectionBorderManager@@AEAAJPEAVCWindowData@@PEAM@Z @ 0x1800D4880
 * Callers:
 *     ?OnWindowMonitorChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180052790 (-OnWindowMonitorChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z @ 0x1800D5470 (-_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDisplaySDRWhiteLevel@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEAM@Z @ 0x1800B4ECC (-GetDisplaySDRWhiteLevel@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEAM@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_GetDefaultSDRBoostForWindow(
        CProjectionBorderManager *this,
        HMONITOR *a2,
        float *a3)
{
  int DisplaySDRWhiteLevel; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  DisplaySDRWhiteLevel = CDesktopManager::GetDisplaySDRWhiteLevel(
                           CDesktopManager::s_pDesktopManagerInstance,
                           a2[48],
                           a3);
  v4 = DisplaySDRWhiteLevel;
  if ( DisplaySDRWhiteLevel >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x64C,
    (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)DisplaySDRWhiteLevel);
  return v4;
}
