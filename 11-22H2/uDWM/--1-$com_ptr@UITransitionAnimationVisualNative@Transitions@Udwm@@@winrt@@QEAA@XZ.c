/*
 * XREFs of ??1?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@QEAA@XZ @ 0x1800F1228
 * Callers:
 *     _CWindowList::StyleChange_::_1_::dtor$2 @ 0x1800681C0 (_CWindowList--StyleChange_--_1_--dtor$2.c)
 *     _winrt::impl::produce_winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler_winrt::Udwm::Transitions::ITransitionHandler_::UpdateScene_::_1_::dtor$1 @ 0x1800684E0 (_winrt--impl--produce_winrt--Udwm--Transitions--Private--implementation--ScreenRota_ea_1800684E0.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::CapturePreRotationVisuals_::_1_::dtor$0 @ 0x1800F4E84 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationResponsiveTransit_ea_1800F4E84.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::DrawBackground_::_1_::dtor$2 @ 0x1800F540A (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationResponsiveTransit_ea_1800F540A.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::StartFirstAnimation_::_1_::dtor$0 @ 0x1800F62DD (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationResponsiveTransitionHandler--S.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::StartSecondAnimation_::_1_::dtor$0 @ 0x1800F67D4 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationResponsiveTransit_ea_1800F67D4.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::PostTransition_::_1_::dtor$5 @ 0x1800F8321 (_winrt--Udwm--Transitions--Private--implementation--WindowMaximizeSnapTransitionHan_ea_1800F8321.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::StartCrossfadeAnimation_::_1_::dtor$0 @ 0x1800F873F (_winrt--Udwm--Transitions--Private--implementation--WindowMaximizeSnapTransitionHandler--StartCr.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::PreTransition_::_1_::dtor$2 @ 0x1800F9D4B (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransitionHand_ea_1800F9D4B.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::RegisterBitmap_::_1_::dtor$1 @ 0x1800F9FAA (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransitionHand_ea_1800F9FAA.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::OnMoveResizeInitiatedFromWorkAreaChange_::_1_::dtor$2 @ 0x1800FE56A (_winrt--Udwm--Transitions--implementation--TransitionManager--OnMoveResizeInitiated_ea_1800FE56A.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::PreTransitionWithNativeWindow_::_1_::dtor$2 @ 0x1800FE928 (_winrt--Udwm--Transitions--implementation--TransitionManager--PreTransitionWithNati_ea_1800FE928.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::RegisterTransitionBitmap_::_1_::dtor$2 @ 0x1800FEC17 (_winrt--Udwm--Transitions--implementation--TransitionManager--RegisterTransitionBit_ea_1800FEC17.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::AnimationsEnabled_::_1_::dtor$1 @ 0x180101237 (_winrt--Udwm--Transitions--implementation--TransitionState--AnimationsEnabled_--_1_--dtor$1.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::CreateAndInsertSnapshotVisual_::_1_::dtor$1 @ 0x180101812 (_winrt--Udwm--Transitions--implementation--TransitionState--CreateAndInsertSnapshot_ea_180101812.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferJointResizeVisuals_::_1_::dtor$3 @ 0x180102F00 (_winrt--Udwm--Transitions--implementation--TransitionState--TransferJointResizeVisu_ea_180102F00.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferJointResizeVisuals_::_1_::dtor$6 @ 0x180102F24 (_winrt--Udwm--Transitions--implementation--TransitionState--TransferJointResizeVisu_ea_180102F24.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferTransitionVisualAndAnimationEngine_::_1_::dtor$0 @ 0x1801037FA (_winrt--Udwm--Transitions--implementation--TransitionState--TransferTransitionVisualAndAnimation.c)
 *     _CWindowList::IsInWindowResizeChange_::_1_::dtor$2 @ 0x18010B18A (_CWindowList--IsInWindowResizeChange_--_1_--dtor$2.c)
 *     _CWindowList::TransitionBitmap_::_1_::dtor$2 @ 0x18010D241 (_CWindowList--TransitionBitmap_--_1_--dtor$2.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@AEAAXXZ @ 0x1800F4054 (-unconditional_release_ref@-$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@.c)
 */

__int64 __fastcall winrt::com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>::~com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>::unconditional_release_ref(a1);
  return result;
}
