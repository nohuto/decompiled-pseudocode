/*
 * XREFs of _CloseWinRTApplicationView_::_1_::dtor$1 @ 0x1806276CF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CloseWinRTApplicationView_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)(a2 + 80));
}
