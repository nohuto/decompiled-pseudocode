/*
 * XREFs of _AppUsageTracker::EnumerateExistingViews_::_1_::dtor$0 @ 0x18062159F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AppUsageTracker::EnumerateExistingViews_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 88));
}
