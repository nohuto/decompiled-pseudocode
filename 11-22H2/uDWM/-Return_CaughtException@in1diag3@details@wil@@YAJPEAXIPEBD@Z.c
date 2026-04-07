/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800EE204
 * Callers:
 *     _CWindowList::MoveSize_::_1_::catch$47 @ 0x180067750 (_CWindowList--MoveSize_--_1_--catch$47.c)
 *     _CWindowList::UpdateWindowScale_::_1_::catch$35 @ 0x180067800 (_CWindowList--UpdateWindowScale_--_1_--catch$35.c)
 *     _CWindowList::Initialize_::_1_::catch$25 @ 0x180067F41 (_CWindowList--Initialize_--_1_--catch$25.c)
 *     _CWindowList::StyleChange_::_1_::catch$12 @ 0x1800681E0 (_CWindowList--StyleChange_--_1_--catch$12.c)
 *     _winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::OnAnimationComplete_::_1_::catch$0 @ 0x1800EDDB4 (_winrt--Udwm--Transitions--implementation--AnimatedTransitionVisualWrapper--OnAnimationComplete_.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::OnAnimationComplete_::_1_::catch$0 @ 0x1800F5998 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationResponsiveTransitionHandler--O.c)
 *     __lambda_65776acf8dfa6fe29cb3050938b98b74_::operator()_::_1_::catch$6 @ 0x1800FAD40 (__lambda_65776acf8dfa6fe29cb3050938b98b74_--operator()_--_1_--catch$6.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::PreTransitionWithNativeWindow_::_1_::catch$10 @ 0x1800FE934 (_winrt--Udwm--Transitions--implementation--TransitionManager--PreTransitionWithNati_ea_1800FE934.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::RegisterTransitionBitmap_::_1_::catch$8 @ 0x1800FEC23 (_winrt--Udwm--Transitions--implementation--TransitionManager--RegisterTransitionBitmap_--_1_--ca.c)
 *     _CWindowList::HandleScreenRotation_::_1_::catch$15 @ 0x18010AB1F (_CWindowList--HandleScreenRotation_--_1_--catch$15.c)
 *     _CWindowList::RotationModeChange_::_1_::catch$11 @ 0x18010C61B (_CWindowList--RotationModeChange_--_1_--catch$11.c)
 *     _CWindowList::RotationModeChange_::_1_::catch$12 @ 0x18010C65D (_CWindowList--RotationModeChange_--_1_--catch$12.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x180099298 (--$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<1>((int)this, (int)a2, a3);
}
