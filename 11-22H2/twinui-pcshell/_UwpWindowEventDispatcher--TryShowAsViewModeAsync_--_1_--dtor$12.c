/*
 * XREFs of _UwpWindowEventDispatcher::TryShowAsViewModeAsync_::_1_::dtor$12 @ 0x1804D2D09
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UwpWindowEventDispatcher::TryShowAsViewModeAsync_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)(a2 + 128));
}
