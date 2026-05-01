/*
 * XREFs of _lambda_f2b6bbfe36965adb3357dfdbe7cbe4b3_::__lambda_f2b6bbfe36965adb3357dfdbe7cbe4b3_ @ 0x18020DC58
 * Callers:
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_d804407e02a26f9f142afc6c9d60f92c____::_1_::dtor$0 @ 0x18020D976 (_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--ShellV_ea_18020D976.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_e4e9dff476cc02bf1e9e51c9f9e35def____::_1_::dtor$0 @ 0x18020D9FE (_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--ShellV_ea_18020D9FE.c)
 *     __lambda_e5288bd2e8441abb5041b2e3fba677a0_::operator()_::_1_::dtor$23 @ 0x18020E469 (__lambda_e5288bd2e8441abb5041b2e3fba677a0_--operator()_--_1_--dtor$23.c)
 *     __lambda_e5288bd2e8441abb5041b2e3fba677a0_::operator()_::_1_::dtor$37 @ 0x18020E481 (__lambda_e5288bd2e8441abb5041b2e3fba677a0_--operator()_--_1_--dtor$37.c)
 *     __lambda_e5288bd2e8441abb5041b2e3fba677a0_::operator()_::_1_::dtor$9 @ 0x18020E4A5 (__lambda_e5288bd2e8441abb5041b2e3fba677a0_--operator()_--_1_--dtor$9.c)
 *     __lambda_e5288bd2e8441abb5041b2e3fba677a0_::operator()_::_1_::dtor$19 @ 0x18020E4C9 (__lambda_e5288bd2e8441abb5041b2e3fba677a0_--operator()_--_1_--dtor$19.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ @ 0x180141204 (-unconditional_release_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_f2b6bbfe36965adb3357dfdbe7cbe4b3_::__lambda_f2b6bbfe36965adb3357dfdbe7cbe4b3_(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax

  v1 = (__int64 *)(a1 + 8);
  if ( *v1 )
    return winrt::com_ptr<CMultitaskingViewManager>::unconditional_release_ref(v1);
  return result;
}
