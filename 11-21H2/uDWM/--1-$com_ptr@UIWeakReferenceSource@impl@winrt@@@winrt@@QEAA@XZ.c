/*
 * XREFs of ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800D2044
 * Callers:
 *     _winrt::make_weak_winrt::Udwm::Transitions::ITransitionState__::_1_::dtor$1 @ 0x1800632F6 (_winrt--make_weak_winrt--Udwm--Transitions--ITransitionState__--_1_--dtor$1.c)
 *     _winrt::make_weak_winrt::Udwm::Transitions::ITransitionState__::_1_::dtor$2 @ 0x180063302 (_winrt--make_weak_winrt--Udwm--Transitions--ITransitionState__--_1_--dtor$2.c)
 *     _winrt::make_weak_winrt::Udwm::Transitions::Private::ScreenRotationRejuvTransitionHandler__::_1_::dtor$1 @ 0x18006339A (_winrt--make_weak_winrt--Udwm--Transitions--Private--ScreenRotationRejuvTransitionHandler__--_1_.c)
 *     _winrt::make_weak_winrt::Udwm::Transitions::Private::ScreenRotationRejuvTransitionHandler__::_1_::dtor$2 @ 0x1800633A6 (_winrt--make_weak_winrt--Udwm--Transitions--Private--ScreenRotationRejuvTransitionH_ea_1800633A6.c)
 *     _winrt::impl::root_implements_winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper_winrt::Udwm::Transitions::TopLevelWindow3DWrapper_Udwm::Transitions::ITransitionAnimationVisualNative_::get_weak_winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper__::_1_::dtor$0 @ 0x1800649D8 (_winrt--impl--root_implements_winrt--Udwm--Transitions--implementation--TopLevelWindow3DWrapper_.c)
 *     _winrt::impl::root_implements_winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper_winrt::Udwm::Transitions::TopLevelWindow3DWrapper_Udwm::Transitions::ITransitionAnimationVisualNative_::get_weak_winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper__::_1_::dtor$1 @ 0x1800649EA (_winrt--impl--root_implements_winrt--Udwm--Transitions--implementation--TopLevelWin_ea_1800649EA.c)
 *     _winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::AnimationComplete_::_1_::dtor$1 @ 0x180064A17 (_winrt--Udwm--Transitions--implementation--TopLevelWindow3DWrapper--AnimationComplete_--_1_--dto.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::PostTransition_::_1_::dtor$4 @ 0x1800656DF (_winrt--Udwm--Transitions--Private--implementation--WindowMaximizeSnapTransitionHan_ea_1800656DF.c)
 *     _winrt::impl::root_implements_winrt::Udwm::Transitions::implementation::UserResizeVisual_winrt::Udwm::Transitions::UserResizeVisual_Udwm::Transitions::IUserResizeVisualNative_::get_weak_winrt::Udwm::Transitions::implementation::UserResizeVisual__::_1_::dtor$0 @ 0x1800F787C (_winrt--impl--root_implements_winrt--Udwm--Transitions--implementation--UserResizeV_ea_1800F787C.c)
 *     _winrt::impl::root_implements_winrt::Udwm::Transitions::implementation::UserResizeVisual_winrt::Udwm::Transitions::UserResizeVisual_Udwm::Transitions::IUserResizeVisualNative_::get_weak_winrt::Udwm::Transitions::implementation::UserResizeVisual__::_1_::dtor$1 @ 0x1800F7888 (_winrt--impl--root_implements_winrt--Udwm--Transitions--implementation--UserResizeV_ea_1800F7888.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::PostTransition_::_1_::dtor$0 @ 0x1800F7F97 (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransitionHandler--PostTran.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::PostTransition_::_1_::dtor$2 @ 0x1800F7FAF (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransitionHand_ea_1800F7FAF.c)
 *     _winrt::Udwm::Transitions::implementation::UserResizeVisual::StartHideAnimation_::_1_::dtor$1 @ 0x1800FFA00 (_winrt--Udwm--Transitions--implementation--UserResizeVisual--StartHideAnimation_--_1_--dtor$1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x180006224 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a1);
  return result;
}
