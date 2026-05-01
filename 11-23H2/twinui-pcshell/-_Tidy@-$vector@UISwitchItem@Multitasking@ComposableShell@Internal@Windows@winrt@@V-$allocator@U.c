/*
 * XREFs of ?_Tidy@?$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@AEAAXXZ @ 0x18078C164
 * Callers:
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_4bd855e1dd94d2f8892f0782f15ffa49___ @ 0x18078AA78 (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--ComposableS_ea_18078AA78.c)
 *     ??1?$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x18078B1E0 (--1-$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V-$allocator@UISwi.c)
 *     ??1SnapAssistState@@QEAA@XZ @ 0x18078B1EC (--1SnapAssistState@@QEAA@XZ.c)
 *     ?MakeFilteredDataSource@SnapAssistState@@AEAA?AUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBU234567@@Z @ 0x18078BA30 (-MakeFilteredDataSource@SnapAssistState@@AEAA-AUISwitchItemDataSource@Multitasking@ComposableShe.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_4bd855e1dd94d2f8892f0782f15ffa49___::Release @ 0x18078BCB0 (winrt--impl--implements_delegate_winrt--Windows--Foundation--TypedEventHandler_winr_ea_18078BCB0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@YAXPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAU123456@AEAV?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@0@@Z @ 0x18078ABE0 (--$_Destroy_range@V-$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@.c)
 */

void __fastcall std::vector<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>::_Tidy(__int64 a1)
{
  winrt::Windows::Foundation::IUnknown *v2; // rcx

  v2 = *(winrt::Windows::Foundation::IUnknown **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>>(
      v2,
      *(winrt::Windows::Foundation::IUnknown **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
