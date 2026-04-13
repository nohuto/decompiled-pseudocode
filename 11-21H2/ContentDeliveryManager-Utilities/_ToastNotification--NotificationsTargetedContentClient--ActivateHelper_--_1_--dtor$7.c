/*
 * XREFs of _ToastNotification::NotificationsTargetedContentClient::ActivateHelper_::_1_::dtor$7 @ 0x1800F105B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ToastNotification::NotificationsTargetedContentClient::ActivateHelper_::_1_::dtor_7(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 72));
}
