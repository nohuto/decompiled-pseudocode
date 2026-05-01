/*
 * XREFs of _winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::ThemeCoordinator_::_1_::dtor$1 @ 0x1802B4815
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::ThemeCoordinator_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 64) + 120LL));
}
