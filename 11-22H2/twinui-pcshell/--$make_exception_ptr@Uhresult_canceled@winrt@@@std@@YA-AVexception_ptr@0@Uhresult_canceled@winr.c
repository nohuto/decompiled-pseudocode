/*
 * XREFs of ??$make_exception_ptr@Uhresult_canceled@winrt@@@std@@YA?AVexception_ptr@0@Uhresult_canceled@winrt@@@Z @ 0x1804FCF74
 * Callers:
 *     ?Cancel@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x180225B38 (-Cancel@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UPackageVolume@Deploy.c)
 *     ?Cancel@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVTaskViewFrame@@PEAUIImmersiveMonitor@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x1804FD2B8 (-Cancel@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::Cancel @ 0x18063AD18 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_18063AD18.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?close@?$handle_type@Ubstr_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1802CEB40 (-close@-$handle_type@Ubstr_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Copy_exception@exception_ptr@std@@SA?AV12@PEAXPEBX@Z @ 0x1804FDA14 (-_Copy_exception@exception_ptr@std@@SA-AV12@PEAXPEBX@Z.c)
 */

__int64 __fastcall std::make_exception_ptr<winrt::hresult_canceled>(__int64 a1, __int64 a2)
{
  std::exception_ptr::_Copy_exception();
  if ( *(_QWORD *)(a2 + 16) )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)(a2 + 16));
  winrt::handle_type<winrt::impl::bstr_traits>::close((OLECHAR **)a2);
  return a1;
}
