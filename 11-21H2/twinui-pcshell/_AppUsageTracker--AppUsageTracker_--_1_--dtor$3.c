/*
 * XREFs of _AppUsageTracker::AppUsageTracker_::_1_::dtor$3 @ 0x18021CF7D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AppUsageTracker::AppUsageTracker_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL));
}
