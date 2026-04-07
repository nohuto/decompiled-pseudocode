/*
 * XREFs of ??1?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@QEAA@XZ @ 0x1800F338C
 * Callers:
 *     _winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::StartCrossfadeAnimation_::_1_::dtor$0 @ 0x1800646B2 (_winrt--Udwm--Transitions--Private--implementation--WindowMaximizeSnapTransitionHandler--StartCr.c)
 *     _winrt::impl::produce_winrt::Udwm::Transitions::implementation::TransitionState_winrt::Udwm::Transitions::ITransitionState_::get_AnimationsEnabled_::_1_::dtor$2 @ 0x180064C70 (_winrt--impl--produce_winrt--Udwm--Transitions--implementation--TransitionState_win_ea_180064C70.c)
 *     _CWindowList::StyleChange_::_1_::dtor$2 @ 0x1800651A0 (_CWindowList--StyleChange_--_1_--dtor$2.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::PostTransition_::_1_::dtor$7 @ 0x180065703 (_winrt--Udwm--Transitions--Private--implementation--WindowMaximizeSnapTransitionHan_ea_180065703.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::PreTransitionWithNativeWindow_::_1_::dtor$2 @ 0x18006574B (_winrt--Udwm--Transitions--implementation--TransitionManager--PreTransitionWithNati_ea_18006574B.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::CreateAndInsertSnapshotVisual_::_1_::dtor$1 @ 0x180065BD4 (_winrt--Udwm--Transitions--implementation--TransitionState--CreateAndInsertSnapshot_ea_180065BD4.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::Capture_::_1_::dtor$0 @ 0x1800F3D76 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationRejuvTransitionHandler--Captur.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::GetVirtualScreenRect_::_1_::dtor$0 @ 0x1800F41B8 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationRejuvTransitionHandler--GetVir.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::SetBlurEffect_::_1_::dtor$2 @ 0x1800F4BF3 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationRejuvTransitionHa_ea_1800F4BF3.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::StartSecondAnimation_::_1_::dtor$1 @ 0x1800F53FF (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationRejuvTransitionHa_ea_1800F53FF.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferJointResizeVisuals_::_1_::dtor$3 @ 0x1800FE56D (_winrt--Udwm--Transitions--implementation--TransitionState--TransferJointResizeVisu_ea_1800FE56D.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferJointResizeVisuals_::_1_::dtor$6 @ 0x1800FE591 (_winrt--Udwm--Transitions--implementation--TransitionState--TransferJointResizeVisu_ea_1800FE591.c)
 *     _CWindowList::IsInWindowResizeChange_::_1_::dtor$2 @ 0x180104AD4 (_CWindowList--IsInWindowResizeChange_--_1_--dtor$2.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@AEAAXXZ @ 0x1800141A0 (-unconditional_release_ref@-$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@.c)
 */

__int64 __fastcall winrt::com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>::~com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>::unconditional_release_ref(a1);
  return result;
}
