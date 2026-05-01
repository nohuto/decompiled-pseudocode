/*
 * XREFs of ??$__abi_winrt_ptrto_delegate_dtor@V?$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@@Foundation@Windows@@@@YAXPE$ADV?$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@@Foundation@Windows@@@Z @ 0x18042CA00
 * Callers:
 *     _Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource___Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs_____lambda_16286fe9edebb121e83a2911c5464574____::_1_::dtor$2 @ 0x18042AA47 (_Platform--EventSource--DoInvokeVoid_Windows--Foundation--TypedEventHandler_Windows_ea_18042AA47.c)
 *     _Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView___Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____lambda_ded30c34a5b946bc18cf9caf8a4ec53d____::_1_::dtor$2 @ 0x18042ACAB (_Platform--EventSource--DoInvokeVoid_Windows--Foundation--TypedEventHandler_Windows_ea_18042ACAB.c)
 *     _MonitorFrame::AddCallback_::_1_::dtor$3 @ 0x1804311CF (_MonitorFrame--AddCallback_--_1_--dtor$3.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::AddSwitchItem_::_1_::dtor$2 @ 0x180431461 (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--AddSwitc_ea_180431461.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::AddSwitchItem_::_1_::dtor$3 @ 0x18043146D (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--AddSwitc_ea_18043146D.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::ConnectToDataSource_::_1_::dtor$1 @ 0x1804323D4 (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--ConnectT_ea_1804323D4.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::ConnectToDataSource_::_1_::dtor$2 @ 0x1804323E0 (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--ConnectT_ea_1804323E0.c)
 *     _XamlSnapAssistViewController::RegisterForEvents_::_1_::dtor$15 @ 0x180611F39 (_XamlSnapAssistViewController--RegisterForEvents_--_1_--dtor$15.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall __abi_winrt_ptrto_delegate_dtor<Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>>(
        __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return result;
}
