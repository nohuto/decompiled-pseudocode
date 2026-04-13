/*
 * XREFs of _ToastNotification::ActivityToastNotificationCallback::PublishCompletedActivity_::_1_::dtor$2 @ 0x1800D7EC3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ToastNotification::ActivityToastNotificationCallback::PublishCompletedActivity_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<ToastNotification::ActivityToastNotificationCallback,wil::err_exception_policy>::~com_ptr_t<ToastNotification::ActivityToastNotificationCallback,wil::err_exception_policy>((__int64 *)(a2 + 48));
}
