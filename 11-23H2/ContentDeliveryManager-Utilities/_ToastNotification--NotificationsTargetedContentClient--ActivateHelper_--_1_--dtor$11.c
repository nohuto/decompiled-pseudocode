/*
 * XREFs of _ToastNotification::NotificationsTargetedContentClient::ActivateHelper_::_1_::dtor$11 @ 0x1800D7AE1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ToastNotification::NotificationsTargetedContentClient::ActivateHelper_::_1_::dtor_11(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 48));
}
