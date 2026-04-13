/*
 * XREFs of ??0_lambda_b6e2bb9b6cdc2c942b52a1d3b2d3e2cf_@@QEAA@QEAVActivityToastNotificationCallback@ToastNotification@@AEAPEBG@Z @ 0x18006E030
 * Callers:
 *     ?Activate@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_INPUT_DATA@@K@Z @ 0x18006EDD0 (-Activate@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_I.c)
 * Callees:
 *     <none>
 */

_lambda_b6e2bb9b6cdc2c942b52a1d3b2d3e2cf_ *__fastcall _lambda_b6e2bb9b6cdc2c942b52a1d3b2d3e2cf_::_lambda_b6e2bb9b6cdc2c942b52a1d3b2d3e2cf_(
        _lambda_b6e2bb9b6cdc2c942b52a1d3b2d3e2cf_ *this,
        struct ToastNotification::ActivityToastNotificationCallback *const a2,
        const unsigned __int16 **a3)
{
  _lambda_b6e2bb9b6cdc2c942b52a1d3b2d3e2cf_ *result; // rax

  *(_QWORD *)this = a2;
  result = this;
  *((_QWORD *)this + 1) = a3;
  return result;
}
