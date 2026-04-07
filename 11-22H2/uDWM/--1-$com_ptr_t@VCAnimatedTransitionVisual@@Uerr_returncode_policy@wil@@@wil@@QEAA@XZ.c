/*
 * XREFs of ??1?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800B7544
 * Callers:
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B7748 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     _CDisplayAnimatedVisual::CaptureAndAddVisual_::_1_::dtor$0 @ 0x1800B79D9 (_CDisplayAnimatedVisual--CaptureAndAddVisual_--_1_--dtor$0.c)
 *     _CDisplayAnimatedVisual::CaptureExistingExtendedDisplays_::_1_::dtor$0 @ 0x1800B7BAA (_CDisplayAnimatedVisual--CaptureExistingExtendedDisplays_--_1_--dtor$0.c)
 *     ?CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800BBF58 (-CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 *     _CDisplayMixedModeAnimatedVisual::CaptureAndScheduleExitAnimation_::_1_::dtor$0 @ 0x1800BC3D7 (_CDisplayMixedModeAnimatedVisual--CaptureAndScheduleExitAnimation_--_1_--dtor$0.c)
 *     _CDisplayMixedModeAnimatedVisual::ScheduleEntranceAnimation_::_1_::dtor$0 @ 0x1800BC713 (_CDisplayMixedModeAnimatedVisual--ScheduleEntranceAnimation_--_1_--dtor$0.c)
 *     _winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::AnimatedTransitionVisualWrapper_::_1_::dtor$1 @ 0x1800ED1F5 (_winrt--Udwm--Transitions--implementation--AnimatedTransitionVisualWrapper--Animate_ea_1800ED1F5.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::StartFirstAnimation_::_1_::dtor$2 @ 0x1800F62F5 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationResponsiveTransit_ea_1800F62F5.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::StartSecondAnimation_::_1_::dtor$2 @ 0x1800F67EC (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationResponsiveTransit_ea_1800F67EC.c)
 *     ?TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@_N@Z @ 0x180102F40 (-TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobal.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferScreenVisual_::_1_::dtor$3 @ 0x1801032DC (_winrt--Udwm--Transitions--implementation--TransitionState--TransferScreenVisual_--_1_--dtor$3.c)
 *     ?TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x180103300 (-TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGl.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferScreenVisualLive_::_1_::dtor$3 @ 0x180103671 (_winrt--Udwm--Transitions--implementation--TransitionState--TransferScreenVisualLiv_ea_180103671.c)
 *     ?TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@AEAV?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@@Z @ 0x180103810 (-TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGloba.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferWindowVisuals_::_1_::dtor$3 @ 0x180103BA6 (_winrt--Udwm--Transitions--implementation--TransitionState--TransferWindowVisuals_--_1_--dtor$3.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return CBaseObject::Release((CBaseObject *)(v1 + 8));
  return result;
}
