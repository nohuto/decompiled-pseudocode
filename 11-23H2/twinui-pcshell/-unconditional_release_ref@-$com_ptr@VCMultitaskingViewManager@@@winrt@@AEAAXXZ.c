/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ @ 0x180141204
 * Callers:
 *     ?copy_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXPEAVCMultitaskingViewManager@@@Z @ 0x180140060 (-copy_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXPEAVCMultitaskingViewManager@@@Z.c)
 *     ?release_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ @ 0x1801411F0 (-release_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_d804407e02a26f9f142afc6c9d60f92c___ @ 0x18020D900 (winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--ShellVi_ea_18020D900.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_e4e9dff476cc02bf1e9e51c9f9e35def___ @ 0x18020D988 (winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--ShellVi_ea_18020D988.c)
 *     _lambda_f2b6bbfe36965adb3357dfdbe7cbe4b3_::__lambda_f2b6bbfe36965adb3357dfdbe7cbe4b3_ @ 0x18020DC58 (_lambda_f2b6bbfe36965adb3357dfdbe7cbe4b3_--__lambda_f2b6bbfe36965adb3357dfdbe7cbe4b3_.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_f2b6bbfe36965adb3357dfdbe7cbe4b3___::_implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_f2b6bbfe36965adb3357dfdbe7cbe4b3___ @ 0x18020DC78 (winrt--impl--implements_delegate_winrt--Windows--Foundation--TypedEventHandler_winr_ea_18020DC78.c)
 *     _lambda_e5288bd2e8441abb5041b2e3fba677a0_::operator() @ 0x18020E018 (_lambda_e5288bd2e8441abb5041b2e3fba677a0_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_9ec3d353ebe123d5bcc6e0dd9d042727__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Delete_this @ 0x180210390 (std--_Func_impl_no_alloc__lambda_9ec3d353ebe123d5bcc6e0dd9d042727__void_enum_winrt-_ea_180210390.c)
 *     ??1?$com_ptr@VCMultitaskingViewManager@@@winrt@@QEAA@XZ @ 0x18055349C (--1-$com_ptr@VCMultitaskingViewManager@@@winrt@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<CMultitaskingViewManager>::unconditional_release_ref(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewManager,IMultitaskingViewManagerInternal,IMultitaskingViewDismissCallback,IMultitaskingViewForegroundStaging>::Release(v2);
}
