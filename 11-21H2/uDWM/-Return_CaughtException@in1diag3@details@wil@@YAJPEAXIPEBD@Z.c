/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800F1350
 * Callers:
 *     __lambda_4f6e55dd49ac94c28a6037e68643a924_::operator()_::_1_::catch$6 @ 0x180064AA3 (__lambda_4f6e55dd49ac94c28a6037e68643a924_--operator()_--_1_--catch$6.c)
 *     _winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::OnAnimationComplete_::_1_::catch$0 @ 0x180064BE8 (_winrt--Udwm--Transitions--implementation--AnimatedTransitionVisualWrapper--OnAnimationComplete_.c)
 *     _CWindowList::StyleChange_::_1_::catch$19 @ 0x1800651C0 (_CWindowList--StyleChange_--_1_--catch$19.c)
 *     _CWindowList::UpdateWindowScale_::_1_::catch$37 @ 0x1800652F0 (_CWindowList--UpdateWindowScale_--_1_--catch$37.c)
 *     _CWindowList::UpdateWindowScale_::_1_::catch$38 @ 0x180065340 (_CWindowList--UpdateWindowScale_--_1_--catch$38.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::PreTransitionWithNativeWindow_::_1_::catch$10 @ 0x18006575D (_winrt--Udwm--Transitions--implementation--TransitionManager--PreTransitionWithNati_ea_18006575D.c)
 *     _CWindowList::Initialize_::_1_::catch$25 @ 0x180065E3E (_CWindowList--Initialize_--_1_--catch$25.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::OnAnimationComplete_::_1_::catch$0 @ 0x1800F4551 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationRejuvTransitionHandler--OnAnim.c)
 *     _CWindowList::HandleScreenRotation_::_1_::catch$15 @ 0x180104579 (_CWindowList--HandleScreenRotation_--_1_--catch$15.c)
 *     _CWindowList::RotationModeChange_::_1_::catch$11 @ 0x180105FFA (_CWindowList--RotationModeChange_--_1_--catch$11.c)
 *     _CWindowList::RotationModeChange_::_1_::catch$12 @ 0x18010603C (_CWindowList--RotationModeChange_--_1_--catch$12.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x18009275C (--$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<1>((int)this, (int)a2, a3);
}
