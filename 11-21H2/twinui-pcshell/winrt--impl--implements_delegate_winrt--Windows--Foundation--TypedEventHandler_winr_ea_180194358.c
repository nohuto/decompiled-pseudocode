/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_08276f5f844ba9209a6654755ac22028___::_implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_08276f5f844ba9209a6654755ac22028___ @ 0x180194358
 * Callers:
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_08276f5f844ba9209a6654755ac22028___::Release @ 0x180195640 (winrt--impl--implements_delegate_winrt--Windows--Foundation--TypedEventHandler_winr_ea_180195640.c)
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_08276f5f844ba9209a6654755ac22028___::_implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_08276f5f844ba9209a6654755ac22028___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock, a2, a3, a4);
  return wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)(a1 + 16));
}
