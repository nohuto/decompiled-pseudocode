/*
 * XREFs of _lambda_a9532b1fa26d741b99fb0a1f5016c730_::__lambda_a9532b1fa26d741b99fb0a1f5016c730_ @ 0x1801D0E44
 * Callers:
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_a9532b1fa26d741b99fb0a1f5016c730____::_1_::dtor$0 @ 0x1801D0CAE (_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--ShellViewCoordinato.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::publish_services_::_1_::dtor$18 @ 0x180222F2D (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--publish_servi_ea_180222F2D.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_a9532b1fa26d741b99fb0a1f5016c730_::__lambda_a9532b1fa26d741b99fb0a1f5016c730_(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax

  v1 = (__int64 *)(a1 + 8);
  if ( *v1 )
    return winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v1);
  return result;
}
