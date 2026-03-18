/*
 * XREFs of GetWindowDpiLastNotify @ 0x1C00BBEF0
 * Callers:
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x1C004CE04 (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     xxxCheckFullScreen @ 0x1C0061F88 (xxxCheckFullScreen.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0063E00 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxCalcClientRect @ 0x1C0066538 (xxxCalcClientRect.c)
 *     DwmChildRectChange @ 0x1C006BCDC (DwmChildRectChange.c)
 *     ?xxxProcessTopologyChange@CRecalcProp@@AEAA?AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00AF100 (-xxxProcessTopologyChange@CRecalcProp@@AEAA-AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcConte.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x1C00BA5DC (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     ?TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowTrackInfoDirection@1@@Z @ 0x1C00BA9AC (-TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowT.c)
 *     xxxDrawCaptionBar @ 0x1C00BAE5C (xxxDrawCaptionBar.c)
 *     xxxGetMenuBarInfo @ 0x1C00BB868 (xxxGetMenuBarInfo.c)
 *     GetCaptionHeight @ 0x1C00BBE0C (GetCaptionHeight.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z @ 0x1C00BD238 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z.c)
 *     xxxMenuDraw @ 0x1C00BD4E0 (xxxMenuDraw.c)
 *     xxxMNCompute @ 0x1C00BEB88 (xxxMNCompute.c)
 *     xxxMenuBarCompute @ 0x1C00C2488 (xxxMenuBarCompute.c)
 *     FindNCHit @ 0x1C010C5EC (FindNCHit.c)
 *     MNPositionSysMenu @ 0x1C0146938 (MNPositionSysMenu.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0231654 (xxxMNFindWindowFromPoint.c)
 *     xxxMNOpenHierarchy @ 0x1C02325D0 (xxxMNOpenHierarchy.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C023E474 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxCalcCaptionButton @ 0x1C0242FA8 (xxxCalcCaptionButton.c)
 *     xxxTrackPopupMenuEx @ 0x1C024614C (xxxTrackPopupMenuEx.c)
 *     xxxMNInvertItem @ 0x1C0248188 (xxxMNInvertItem.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C024A058 (xxxMNRecomputeBarIfNeeded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWindowDpiLastNotify(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( *(_WORD *)(v1 + 286) )
    return *(unsigned __int16 *)(v1 + 286);
  else
    return *(unsigned __int16 *)(v1 + 284);
}
