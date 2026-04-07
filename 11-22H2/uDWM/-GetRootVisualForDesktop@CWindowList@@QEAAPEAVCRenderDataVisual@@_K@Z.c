/*
 * XREFs of ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800360BC
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000B844 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?_RemoveSnapshotFromVisualTreeIfExists@CTransitionVisualController@@IEAAXPEAVCTransitionWindowSnapshot@@@Z @ 0x18000F994 (-_RemoveSnapshotFromVisualTreeIfExists@CTransitionVisualController@@IEAAXPEAVCTransitionWindowSn.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180029FC0 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800301F4 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x180038D74 (-CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z.c)
 *     ?DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x180039260 (-DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180040960 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x180041174 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?SetBlurredWallpaperSurface@CWindowList@@UEAAJPEAXPEBUtagRECT@@@Z @ 0x180057280 (-SetBlurredWallpaperSurface@CWindowList@@UEAAJPEAXPEBUtagRECT@@@Z.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B7748 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     ?CaptureForExtendedDisplay@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800BAC60 (-CaptureForExtendedDisplay@CDisplayExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800BBF58 (-CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 *     ?CaptureForSecondaryDisplay@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ @ 0x1800BDF48 (-CaptureForSecondaryDisplay@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ.c)
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x1800C6BD8 (-Activate@CLivePreview@@QEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x1800C8314 (-_FadeOutToGlass@CLivePreview@@AEAAJXZ.c)
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x1800D3210 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D3F64 (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_T.c)
 *     ?_GetDesktopRootVisual@CProjectionBorderManager@@AEAAJPEAPEAVCVisualProxy@@@Z @ 0x1800D48CC (-_GetDesktopRootVisual@CProjectionBorderManager@@AEAAJPEAPEAVCVisualProxy@@@Z.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800D6E78 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x1800D730C (-CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ.c)
 *     ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DD658 (-_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimati.c)
 *     ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800EB190 (-CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUta.c)
 *     ?TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AU?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@5@XZ @ 0x180102BC4 (-TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA-AU-$IVec.c)
 *     ?TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@_N@Z @ 0x180102F40 (-TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobal.c)
 *     ?TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x180103300 (-TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGl.c)
 *     ?ZOrderAcrylicSheet@CWindowList@@QEAAJXZ @ 0x18010D5C4 (-ZOrderAcrylicSheet@CWindowList@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct CRenderDataVisual *__fastcall CWindowList::GetRootVisualForDesktop(CWindowList *this, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax
  _QWORD v5[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v6; // [rsp+30h] [rbp-58h]
  __int128 v7; // [rsp+40h] [rbp-48h]
  __int128 v8; // [rsp+50h] [rbp-38h]
  __int64 v9; // [rsp+60h] [rbp-28h]
  char v10; // [rsp+68h] [rbp-20h]

  v9 = -1LL;
  v2 = 0LL;
  v5[0] = a2;
  v5[1] = 0LL;
  v6 = 0LL;
  v10 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v3 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), v5);
  if ( v3 )
    return (struct CRenderDataVisual *)v3[3];
  return (struct CRenderDataVisual *)v2;
}
