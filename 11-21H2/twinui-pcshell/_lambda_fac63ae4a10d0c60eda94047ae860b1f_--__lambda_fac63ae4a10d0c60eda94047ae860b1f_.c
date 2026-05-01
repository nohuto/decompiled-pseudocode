/*
 * XREFs of _lambda_fac63ae4a10d0c60eda94047ae860b1f_::__lambda_fac63ae4a10d0c60eda94047ae860b1f_ @ 0x1805F94FC
 * Callers:
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_fac63ae4a10d0c60eda94047ae860b1f___ @ 0x1805F8764 (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--ComposableS_ea_1805F8764.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_fac63ae4a10d0c60eda94047ae860b1f____::_1_::dtor$0 @ 0x1805F87E4 (_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--Composable_ea_1805F87E4.c)
 *     ??0CachedDataSource@@QEAA@_NPEAUIAppViewDataSourceAdapter@@AEBUIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBUIVirtualDesktopPerMonitorCollection@34567@@Z @ 0x1805F90F4 (--0CachedDataSource@@QEAA@_NPEAUIAppViewDataSourceAdapter@@AEBUIVirtualDesktopController@Multita.c)
 *     _CachedDataSource::CachedDataSource_::_1_::dtor$10 @ 0x1805F93BF (_CachedDataSource--CachedDataSource_--_1_--dtor$10.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_fac63ae4a10d0c60eda94047ae860b1f___::Release @ 0x1805FB480 (winrt--impl--implements_delegate_winrt--Windows--Foundation--TypedEventHandler_winr_ea_1805FB480.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall lambda_fac63ae4a10d0c60eda94047ae860b1f_::__lambda_fac63ae4a10d0c60eda94047ae860b1f_(
        winrt::Windows::Foundation::IUnknown *this)
{
  winrt::Windows::Foundation::IUnknown *v2; // rcx

  v2 = (winrt::Windows::Foundation::IUnknown *)((char *)this + 16);
  if ( *(_QWORD *)v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v2);
  if ( *((_QWORD *)this + 1) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)((char *)this + 8));
  if ( *(_QWORD *)this )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(this);
}
