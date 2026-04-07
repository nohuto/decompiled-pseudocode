/*
 * XREFs of ??1?$com_ptr_t@VCAnimationEngine@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800998C4
 * Callers:
 *     _CDisplayAnimatedVisual::UnregisterForAnimationCompleteNotification_::_1_::dtor$0 @ 0x1800662E4 (_CDisplayAnimatedVisual--UnregisterForAnimationCompleteNotification_--_1_--dtor$0.c)
 *     _CAcrylicSheet::StartAnimationShowOrHide_::_1_::dtor$2 @ 0x18009B07E (_CAcrylicSheet--StartAnimationShowOrHide_--_1_--dtor$2.c)
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x18009B280 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     _CAcrylicSheet::StopAnimations_::_1_::dtor$1 @ 0x18009B496 (_CAcrylicSheet--StopAnimations_--_1_--dtor$1.c)
 *     _CDisplayAnimatedVisual::ScheduleAnimation_::_1_::dtor$0 @ 0x1800B507F (_CDisplayAnimatedVisual--ScheduleAnimation_--_1_--dtor$0.c)
 *     _CDisplayAnimatedVisual::ScheduleAnimation_::_1_::dtor$0_0 @ 0x1800B516C (_CDisplayAnimatedVisual--ScheduleAnimation_--_1_--dtor$0_0.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::SkipAnimationDelay_::_1_::dtor$0 @ 0x1800F4CD6 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationRejuvTransitionHandler--SkipAn.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::StartFirstAnimation_::_1_::dtor$0 @ 0x1800F4E4C (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationRejuvTransitionHandler--StartF.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::StartSecondAnimation_::_1_::dtor$2 @ 0x1800F540B (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationRejuvTransitionHa_ea_1800F540B.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::StopAnimation_::_1_::dtor$0 @ 0x1800F55EC (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationRejuvTransitionHandler--StopAn.c)
 * Callees:
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180015140 (-Release@CAnimationEngine@@UEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<CAnimationEngine,wil::err_returncode_policy>::~com_ptr_t<CAnimationEngine,wil::err_returncode_policy>(
        CAnimationEngine **a1)
{
  CAnimationEngine *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return CAnimationEngine::Release(v1);
  return result;
}
