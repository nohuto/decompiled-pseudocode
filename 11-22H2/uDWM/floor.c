/*
 * XREFs of floor @ 0x18005D2C8
 * Callers:
 *     ?GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z @ 0x180011734 (-GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z.c)
 *     ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z @ 0x180013CF8 (-GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z.c)
 *     ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x180027440 (-AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x1800278D0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x180029B70 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18002ADE0 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z @ 0x18002B6DC (-GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z.c)
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18002C1C0 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?RoundToNearestInt@@YAHN@Z @ 0x18006DB8C (-RoundToNearestInt@@YAHN@Z.c)
 *     ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x1800AC860 (-SetOpacity@CAtlasedImage@@QEAAXM@Z.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x1801081A0 (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl floor(double X)
{
  return __imp_floor(X);
}
