/*
 * XREFs of _CreativeFramework::CommonHelper::RegisterBackgroundTaskWithAlarmTrigger_::_1_::dtor$4 @ 0x1800DD7BE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreativeFramework::CommonHelper::RegisterBackgroundTaskWithAlarmTrigger_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 72));
}
