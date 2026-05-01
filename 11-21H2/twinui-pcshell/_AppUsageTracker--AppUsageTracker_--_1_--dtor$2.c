/*
 * XREFs of _AppUsageTracker::AppUsageTracker_::_1_::dtor$2 @ 0x18021CF67
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AppUsageTracker::AppUsageTracker_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 96) + 80LL));
}
