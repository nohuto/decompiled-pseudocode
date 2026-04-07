/*
 * XREFs of ??1?$test_watcher@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@tip@@QEAA@XZ @ 0x1800F34CC
 * Callers:
 *     _winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::PostTransition_::_1_::dtor$0 @ 0x180064D84 (_winrt--Udwm--Transitions--Private--implementation--WindowMaximizeSnapTransitionHandler--PostTra.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::OnPositionAnimationComplete_::_1_::dtor$0 @ 0x180064DA8 (_winrt--Udwm--Transitions--Private--implementation--WindowMaximizeSnapTransitionHandler--OnPosit.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::PreTransition_::_1_::dtor$1 @ 0x180065715 (_winrt--Udwm--Transitions--Private--implementation--WindowMaximizeSnapTransitionHandler--PreTran.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::PreTransition_::_1_::dtor$2 @ 0x1800F4924 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationRejuvTransitionHandler--PreTra.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180037B78 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180042010 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

void __fastcall tip::test_watcher<Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest>::~test_watcher<Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest>(
        __int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  v2 = *(std::_Ref_count_base **)(a1 + 56);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
