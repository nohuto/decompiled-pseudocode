/*
 * XREFs of ??1?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800998A0
 * Callers:
 *     _winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::AnimatedTransitionVisualWrapper_::_1_::dtor$1 @ 0x180065C1C (_winrt--Udwm--Transitions--implementation--AnimatedTransitionVisualWrapper--Animate_ea_180065C1C.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::ScreenRotationRejuvTransitionHandler_::_1_::dtor$3 @ 0x180065EC6 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationRejuvTransitionHa_ea_180065EC6.c)
 *     _CAcrylicSheet::StartAnimationShowOrHide_::_1_::dtor$4 @ 0x18009B096 (_CAcrylicSheet--StartAnimationShowOrHide_--_1_--dtor$4.c)
 *     _CDisplayAnimatedVisual::CaptureAndAddVisual_::_1_::dtor$0 @ 0x1800B4891 (_CDisplayAnimatedVisual--CaptureAndAddVisual_--_1_--dtor$0.c)
 *     _CDisplayAnimatedVisual::CaptureExistingExtendedDisplays_::_1_::dtor$0 @ 0x1800B4A4D (_CDisplayAnimatedVisual--CaptureExistingExtendedDisplays_--_1_--dtor$0.c)
 *     _CDisplayMixedModeAnimatedVisual::CaptureAndScheduleExitAnimation_::_1_::dtor$0 @ 0x1800B8BB9 (_CDisplayMixedModeAnimatedVisual--CaptureAndScheduleExitAnimation_--_1_--dtor$0.c)
 *     _CDisplayMixedModeAnimatedVisual::ScheduleEntranceAnimation_::_1_::dtor$0 @ 0x1800B8EE2 (_CDisplayMixedModeAnimatedVisual--ScheduleEntranceAnimation_--_1_--dtor$0.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::StartSecondAnimation_::_1_::dtor$0 @ 0x1800F53F3 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationRejuvTransitionHandler--StartS.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::StartSecondAnimation_::_1_::dtor$5 @ 0x1800F542F (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationRejuvTransitionHa_ea_1800F542F.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferScreenVisual_::_1_::dtor$3 @ 0x1800FE8E2 (_winrt--Udwm--Transitions--implementation--TransitionState--TransferScreenVisual_--_1_--dtor$3.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferWindowVisuals_::_1_::dtor$3 @ 0x1800FEC52 (_winrt--Udwm--Transitions--implementation--TransitionState--TransferWindowVisuals_--_1_--dtor$3.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_exception_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return CBaseObject::Release((CBaseObject *)(v1 + 8));
  return result;
}
