/*
 * XREFs of ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800A8A04
 * Callers:
 *     ?DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800B476C (-DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?IsEndOfCapture@MPCHandProcessor@@UEAA_NPEAULegacyInputInfo@@@Z @ 0x1800BF0A0 (-IsEndOfCapture@MPCHandProcessor@@UEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCHandProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1800BF470 (-OnGazeUpdate@MPCHandProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1800BFA30 (-PostHitTestProcessing@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInf.c)
 *     ?OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800C7BA0 (-OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCVoiceProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801DAD10 (-OnGazeUpdate@MPCVoiceProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCVoiceProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801DADF0 (-PostHitTestProcessing@MPCVoiceProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputIn.c)
 *     ?EndGesture@MPCSixDofProcessor@@AEAAXXZ @ 0x1801DDD18 (-EndGesture@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ?IsEndOfCapture@MPCSixDofProcessor@@UEAA_NPEAULegacyInputInfo@@@Z @ 0x1801DE520 (-IsEndOfCapture@MPCSixDofProcessor@@UEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCSixDofProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801DF090 (-OnGazeUpdate@MPCSixDofProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801DF620 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputI.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801E1E68 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x1801E3838 (-EndGesture@MPCGamepadProcessor@@AEAAXXZ.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801E3DF0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801E5608 (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801E59C0 (-UpdateScroll@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801E5C6C (-UpdateZoom@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801E9B60 (-PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInf.c)
 *     ?OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801EA3F0 (-OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801EA6B0 (-PostHitTestProcessing@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInput.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     std::call_once__lambda_810dcc79efb0a72353c94b2711027391___ @ 0x1800A82BC (std--call_once__lambda_810dcc79efb0a72353c94b2711027391___.c)
 */

struct MPCGestureHandlerManager *__fastcall MPCGestureHandlerManager::GetInstance(__int64 a1, __int64 a2)
{
  const char *v2; // r9
  struct MPCGestureHandlerManager *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  std::call_once__lambda_810dcc79efb0a72353c94b2711027391___(a1, a2);
  result = MPCGestureHandlerManager::s_instance;
  if ( !MPCGestureHandlerManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandlermanager.cpp",
      v2);
  return result;
}
