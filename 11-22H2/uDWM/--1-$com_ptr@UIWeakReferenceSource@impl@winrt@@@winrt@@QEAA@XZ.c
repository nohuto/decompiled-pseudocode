/*
 * XREFs of ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800D6C74
 * Callers:
 *     _winrt::impl::root_implements_winrt::Udwm::Transitions::implementation::UserResizeVisual_winrt::Udwm::Transitions::UserResizeVisual_Udwm::Transitions::IUserResizeVisualNative_::get_weak_winrt::Udwm::Transitions::implementation::UserResizeVisual__::_1_::dtor$0 @ 0x1800F74C4 (_winrt--impl--root_implements_winrt--Udwm--Transitions--implementation--UserResizeV_ea_1800F74C4.c)
 *     _winrt::impl::root_implements_winrt::Udwm::Transitions::implementation::UserResizeVisual_winrt::Udwm::Transitions::UserResizeVisual_Udwm::Transitions::IUserResizeVisualNative_::get_weak_winrt::Udwm::Transitions::implementation::UserResizeVisual__::_1_::dtor$1 @ 0x1800F74D0 (_winrt--impl--root_implements_winrt--Udwm--Transitions--implementation--UserResizeV_ea_1800F74D0.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::PostTransition_::_1_::dtor$2 @ 0x1800F8309 (_winrt--Udwm--Transitions--Private--implementation--WindowMaximizeSnapTransitionHan_ea_1800F8309.c)
 *     _winrt::weak_ref_winrt::Udwm::Transitions::ITransitionState_::from_com_ref_winrt::Udwm::Transitions::ITransitionState_const_&__::_1_::dtor$0 @ 0x1800F8EA9 (_winrt--weak_ref_winrt--Udwm--Transitions--ITransitionState_--from_com_ref_winrt--Udwm--Transiti.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::PostTransition_::_1_::dtor$6 @ 0x1800F9A7B (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransitionHandler--PostTran.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::PostTransition_::_1_::dtor$0 @ 0x1800F9A87 (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransitionHand_ea_1800F9A87.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::PostTransition_::_1_::dtor$2 @ 0x1800F9A9F (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransitionHand_ea_1800F9A9F.c)
 *     _winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::AnimationComplete_::_1_::dtor$1 @ 0x1800FAF13 (_winrt--Udwm--Transitions--implementation--TopLevelWindow3DWrapper--AnimationComplete_--_1_--dto.c)
 *     _winrt::Udwm::Transitions::implementation::UserResizeVisual::StartHideAnimation_::_1_::dtor$1 @ 0x180104B50 (_winrt--Udwm--Transitions--implementation--UserResizeVisual--StartHideAnimation_--_1_--dtor$1.c)
 *     _winrt::weak_ref_winrt::Udwm::Transitions::Private::ScreenRotationResponsiveTransitionHandler_::from_com_ref_winrt::Udwm::Transitions::Private::ScreenRotationResponsiveTransitionHandler_const_&__::_1_::dtor$0 @ 0x18010522D (_winrt--weak_ref_winrt--Udwm--Transitions--Private--ScreenRotationResponsiveTransitionHandler_--.c)
 *     _CGlobalTimeTrackVisual::SetTransitionHandlerResponsive_::_1_::dtor$3 @ 0x18010567D (_CGlobalTimeTrackVisual--SetTransitionHandlerResponsive_--_1_--dtor$3.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009E730 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a1);
  return result;
}
