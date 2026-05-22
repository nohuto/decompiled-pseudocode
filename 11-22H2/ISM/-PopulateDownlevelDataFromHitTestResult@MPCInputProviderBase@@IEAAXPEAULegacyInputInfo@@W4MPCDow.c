/*
 * XREFs of ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800D720C
 * Callers:
 *     ?OnGazeUpdate@MPCHandProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1800CFA60 (-OnGazeUpdate@MPCHandProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1800D0020 (-PostHitTestProcessing@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInf.c)
 *     ?OnGazeUpdate@MPCVoiceProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801E8520 (-OnGazeUpdate@MPCVoiceProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCVoiceProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801E8600 (-PostHitTestProcessing@MPCVoiceProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputIn.c)
 *     ?PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801EC454 (-PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x1801F09B8 (-EndGesture@MPCGamepadProcessor@@AEAAXXZ.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801F0F00 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801F2728 (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801F2AE0 (-UpdateScroll@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801F2D8C (-UpdateZoom@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801F6890 (-PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInf.c)
 *     ?OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801F7120 (-OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801F73E0 (-PostHitTestProcessing@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInput.c)
 * Callees:
 *     <none>
 */

bool __fastcall MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(__int64 a1, __int64 a2, int a3)
{
  bool v3; // zf
  __int128 v4; // xmm0
  bool result; // al

  v3 = *(_BYTE *)(a2 + 637) == 0;
  v4 = *(_OWORD *)(a2 + 252);
  *(_DWORD *)(a2 + 872) = *(_DWORD *)(a2 + 244);
  *(_DWORD *)(a2 + 876) = *(_DWORD *)(a2 + 248);
  *(_DWORD *)(a2 + 896) = *(_DWORD *)(a2 + 272);
  result = !v3;
  *(_BYTE *)(a2 + 900) = !v3;
  *(_DWORD *)(a2 + 856) = a3;
  *(_OWORD *)(a2 + 880) = v4;
  return result;
}
