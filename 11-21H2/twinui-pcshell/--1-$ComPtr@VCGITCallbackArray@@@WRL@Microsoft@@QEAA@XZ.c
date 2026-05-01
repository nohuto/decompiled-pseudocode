/*
 * XREFs of ??1?$ComPtr@VCGITCallbackArray@@@WRL@Microsoft@@QEAA@XZ @ 0x180321BD0
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_eff81aa7953cc35c0732a2758107af95___::Invoke @ 0x18002B150 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_eff81aa7953cc35c0732a2758107af9.c)
 *     ?Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x1800B76AC (-Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 *     ?OnShowWindowPolicy@ViewPresentationMediator@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x180124550 (-OnShowWindowPolicy@ViewPresentationMediator@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 *     _CWRLImpWndProc_winrt::Windows::Internal::Shell::implementation::TabProxyWindow_::s_WndProcBase_::_1_::dtor$0 @ 0x1802147B8 (_CWRLImpWndProc_winrt--Windows--Internal--Shell--implementation--TabProxyWindow_--s_WndProcBase_.c)
 *     _ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f____::_1_::dtor$3 @ 0x18021A341 (_ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f____--_1_--dtor$3.c)
 *     _CDesktopPositioner::ControlGained_::_1_::dtor$5 @ 0x1804FAFD1 (_CDesktopPositioner--ControlGained_--_1_--dtor$5.c)
 *     _TabletModePositioner::ApplyLayoutOperationHelper_::_1_::dtor$0 @ 0x180501160 (_TabletModePositioner--ApplyLayoutOperationHelper_--_1_--dtor$0.c)
 *     _TabletModePositioner::OnShellHookMessage_::_1_::dtor$1 @ 0x180505BBD (_TabletModePositioner--OnShellHookMessage_--_1_--dtor$1.c)
 *     _TabletModePositioner::ViewRemoved_::_1_::dtor$2 @ 0x18050A4C4 (_TabletModePositioner--ViewRemoved_--_1_--dtor$2.c)
 *     _WindowArrangementOperation::ArrangeView_::_1_::dtor$4 @ 0x1805107E6 (_WindowArrangementOperation--ArrangeView_--_1_--dtor$4.c)
 *     _WindowArrangementView::AddTempAppVisualsToLayoutOperation_::_1_::dtor$0 @ 0x180518B71 (_WindowArrangementView--AddTempAppVisualsToLayoutOperation_--_1_--dtor$0.c)
 *     _WindowArrangementView::AddTempAppVisualsToLayoutOperation_::_1_::dtor$2 @ 0x180518B89 (_WindowArrangementView--AddTempAppVisualsToLayoutOperation_--_1_--dtor$2.c)
 *     _WindowArrangementView::ProcessDrop_::_1_::dtor$2 @ 0x18051B28E (_WindowArrangementView--ProcessDrop_--_1_--dtor$2.c)
 *     _WindowArrangementView::UpdateDropFeedback_::_1_::dtor$2 @ 0x18051D400 (_WindowArrangementView--UpdateDropFeedback_--_1_--dtor$2.c)
 *     _AppResizeView::CommitResize_::_1_::dtor$1 @ 0x18051E594 (_AppResizeView--CommitResize_--_1_--dtor$1.c)
 *     _AppResizeView::UpdateDropFeedback_::_1_::dtor$0 @ 0x1805201C0 (_AppResizeView--UpdateDropFeedback_--_1_--dtor$0.c)
 *     _SnapServiceProvider::HandleTabletModeSnapping_::_1_::dtor$4 @ 0x18059FFD4 (_SnapServiceProvider--HandleTabletModeSnapping_--_1_--dtor$4.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<CGITCallbackArray>::~ComPtr<CGITCallbackArray>(_QWORD *a1)
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
