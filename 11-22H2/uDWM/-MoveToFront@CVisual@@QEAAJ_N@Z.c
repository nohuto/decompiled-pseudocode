/*
 * XREFs of ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18002E42C
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18000995C (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18000CCB0 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18002C750 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x1800413E0 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x180042620 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180046280 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B7748 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     ?CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800BBF58 (-CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplayBlackCurtainAnimatedVisual@@EEAAJXZ @ 0x1800BDCF0 (-StartImpl@CDisplayBlackCurtainAnimatedVisual@@EEAAJXZ.c)
 *     ?StartImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x1800BE3F0 (-StartImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800D6E78 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?CapturePreRotationVisuals@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4DA4 (-CapturePreRotationVisuals@ScreenRotationResponsiveTransitionHandler@implementation@Private@Tran.c)
 *     ?StartFirstAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F5E18 (-StartFirstAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transition.c)
 *     ?StartSecondAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F6320 (-StartSecondAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitio.c)
 *     ?GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV?$com_ptr_t@VCGlobalTimeTrackVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180101EE4 (-GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV-$com_p.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CVisual::MoveToFront(CVisual *this, char a2)
{
  __int64 v2; // r8
  unsigned int v3; // ebx
  int inserted; // eax
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v2 = *((_QWORD *)this + 3);
  v3 = 0;
  if ( v2 )
  {
    *((_BYTE *)this + 92) = (16 * a2) | *((_BYTE *)this + 92) & 0xEF;
    if ( *(_DWORD *)(v2 + 72) )
    {
      if ( *(CVisual **)(*(_QWORD *)(v2 + 48) + 8LL * (unsigned int)(*(_DWORD *)(v2 + 72) - 1)) != this )
      {
        inserted = VisualCollection::InsertRelative((VisualCollection *)(v2 + 32), (unsigned __int64)this, 0LL, 0, v6);
        v3 = inserted;
        if ( inserted < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x1B5u, 0LL);
      }
    }
  }
  return v3;
}
