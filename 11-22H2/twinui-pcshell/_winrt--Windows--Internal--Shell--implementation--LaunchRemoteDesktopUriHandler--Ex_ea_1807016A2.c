/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler::Execute_::_1_::dtor$1 @ 0x1807016A2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler::Execute_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)(a2 + 120));
}
