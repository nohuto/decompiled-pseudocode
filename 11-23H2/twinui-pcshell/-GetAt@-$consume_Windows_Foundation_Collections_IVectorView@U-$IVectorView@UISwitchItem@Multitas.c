/*
 * XREFs of ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UISwitchItem@Multitasking@ComposableShell@Internal@45@@impl@winrt@@QEBA@I@Z @ 0x180079B08
 * Callers:
 *     ?CountTaskGroupSwitchItemsInDataSource@@YAHAEBUTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@AEBUISwitchItemDataSource@Multitasking@ComposableShell@456@@Z @ 0x180079A4C (-CountTaskGroupSwitchItemsInDataSource@@YAHAEBUTaskGroupDataSourceAdapter@TaskGroups@Shell@Inter.c)
 *     ?InitializeTaskGroupItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x18007A7A4 (-InitializeTaskGroupItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 *     ?GenerateCandidateListForTelemetry@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBU?$IVectorView@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Z @ 0x18076C6EC (-GenerateCandidateListForTelemetry@@YA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>,winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>::GetAt(
        _QWORD *a1,
        _QWORD *a2,
        unsigned int a3)
{
  int v4; // eax

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)*a1 + 48LL))(*a1, a3, a2);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  return a2;
}
