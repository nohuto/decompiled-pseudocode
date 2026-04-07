/*
 * XREFs of ?_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800D55A0
 * Callers:
 *     ?UpdateCaptureControllerPropertiesFromDisplays@CProjectionBorderManager@@UEAAJXZ @ 0x180057D70 (-UpdateCaptureControllerPropertiesFromDisplays@CProjectionBorderManager@@UEAAJXZ.c)
 *     ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x1800D3C64 (-_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerPr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDefaultSDRBoost@CCaptureControllerProxy@@QEAAJM@Z @ 0x1800AD314 (-SetDefaultSDRBoost@CCaptureControllerProxy@@QEAAJM@Z.c)
 *     ?GetDisplaySDRWhiteLevel@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEAM@Z @ 0x1800B4ECC (-GetDisplaySDRWhiteLevel@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEAM@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_UpdateCaptureControllerDefaultSDRBoostFromDisplay(
        CProjectionBorderManager *this,
        HMONITOR a2,
        struct CCaptureControllerProxy *a3)
{
  int DisplaySDRWhiteLevel; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  float v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]

  v9 = HIDWORD(this);
  v8 = 0.0;
  DisplaySDRWhiteLevel = CDesktopManager::GetDisplaySDRWhiteLevel(CDesktopManager::s_pDesktopManagerInstance, a2, &v8);
  if ( DisplaySDRWhiteLevel < 0 )
  {
    v5 = 1454LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)DisplaySDRWhiteLevel);
    return (unsigned int)DisplaySDRWhiteLevel;
  }
  DisplaySDRWhiteLevel = CCaptureControllerProxy::SetDefaultSDRBoost(a3, v8);
  if ( DisplaySDRWhiteLevel < 0 )
  {
    v5 = 1455LL;
    goto LABEL_3;
  }
  return 0LL;
}
