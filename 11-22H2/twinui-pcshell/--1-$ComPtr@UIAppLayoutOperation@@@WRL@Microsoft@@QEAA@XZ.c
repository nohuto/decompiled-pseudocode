/*
 * XREFs of ??1?$ComPtr@UIAppLayoutOperation@@@WRL@Microsoft@@QEAA@XZ @ 0x180260E5C
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_eff81aa7953cc35c0732a2758107af95___::Invoke @ 0x180016FE0 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_eff81aa7953cc35c0732a2758107af9.c)
 *     _CWRLImpWndProc_CopilotHotkeyManager_::s_WndProcBase_::_1_::dtor$0 @ 0x180275AD8 (_CWRLImpWndProc_CopilotHotkeyManager_--s_WndProcBase_--_1_--dtor$0.c)
 *     _ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f____::_1_::dtor$3 @ 0x1802BB5AE (_ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f____--_1_--dtor$3.c)
 *     _CWRLImpWndProc_winrt::Windows::Internal::Shell::implementation::TabProxyWindow_::s_WndProcBase_::_1_::dtor$0 @ 0x1802BFFE6 (_CWRLImpWndProc_winrt--Windows--Internal--Shell--implementation--TabProxyWindow_--s_WndProcBase_.c)
 *     _TabletModePositioner::OnShellHookMessage_::_1_::dtor$1 @ 0x1802C099C (_TabletModePositioner--OnShellHookMessage_--_1_--dtor$1.c)
 *     _KeyboardHosting::TabTipAdapter::TimerDeferredShowRequestCallback_::_1_::dtor$0 @ 0x18052E049 (_KeyboardHosting--TabTipAdapter--TimerDeferredShowRequestCallback_--_1_--dtor$0.c)
 *     _KeyboardHosting::TabTipAdapter::TimerRetryInitializingRemoteTabTipAdapter_::_1_::dtor$0 @ 0x18052E0D9 (_KeyboardHosting--TabTipAdapter--TimerRetryInitializingRemoteTabTipAdapter_--_1_--dtor$0.c)
 *     _CDesktopPositioner::ControlGained_::_1_::dtor$5 @ 0x1805B3164 (_CDesktopPositioner--ControlGained_--_1_--dtor$5.c)
 *     _TabletModePositioner::ApplyLayoutOperationHelper_::_1_::dtor$0 @ 0x1805B9924 (_TabletModePositioner--ApplyLayoutOperationHelper_--_1_--dtor$0.c)
 *     _TabletModePositioner::ViewRemoved_::_1_::dtor$2 @ 0x1805C29B4 (_TabletModePositioner--ViewRemoved_--_1_--dtor$2.c)
 *     _WindowArrangementOperation::ArrangeView_::_1_::dtor$4 @ 0x1805C8C87 (_WindowArrangementOperation--ArrangeView_--_1_--dtor$4.c)
 *     _WindowArrangementView::AddTempAppVisualsToLayoutOperation_::_1_::dtor$0 @ 0x1805D121D (_WindowArrangementView--AddTempAppVisualsToLayoutOperation_--_1_--dtor$0.c)
 *     _WindowArrangementView::AddTempAppVisualsToLayoutOperation_::_1_::dtor$2 @ 0x1805D1235 (_WindowArrangementView--AddTempAppVisualsToLayoutOperation_--_1_--dtor$2.c)
 *     _WindowArrangementView::ProcessDrop_::_1_::dtor$2 @ 0x1805D393C (_WindowArrangementView--ProcessDrop_--_1_--dtor$2.c)
 *     _WindowArrangementView::UpdateDropFeedback_::_1_::dtor$2 @ 0x1805D5A9C (_WindowArrangementView--UpdateDropFeedback_--_1_--dtor$2.c)
 *     _AppResizeView::CommitResize_::_1_::dtor$1 @ 0x1805D6E7A (_AppResizeView--CommitResize_--_1_--dtor$1.c)
 *     _AppResizeView::UpdateDropFeedback_::_1_::dtor$0 @ 0x1805D8B88 (_AppResizeView--UpdateDropFeedback_--_1_--dtor$0.c)
 *     _SnapServiceProvider::HandleTabletModeSnapping_::_1_::dtor$4 @ 0x18066F3BC (_SnapServiceProvider--HandleTabletModeSnapping_--_1_--dtor$4.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<IAppLayoutOperation>::~ComPtr<IAppLayoutOperation>(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
