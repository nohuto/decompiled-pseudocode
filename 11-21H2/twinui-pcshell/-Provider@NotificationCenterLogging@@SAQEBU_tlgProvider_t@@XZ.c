/*
 * XREFs of ?Provider@NotificationCenterLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800A6D40
 * Callers:
 *     ??$EM_ToastCenterWindowSize@AEBHAEAHJJ@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXAEBHAEAH$$QEAJ2@Z @ 0x180195FC4 (--$EM_ToastCenterWindowSize@AEBHAEAHJJ@NotificationCenterTelemetry@NotificationCenterUITelemetry.c)
 * Callees:
 *     ?get@?$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@P6AXXZ@Z @ 0x1800A6D60 (-get@-$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@.c)
 */

const struct _tlgProvider_t *__fastcall NotificationCenterLogging::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<NotificationCenterLogging>::get(
                                             a1,
                                             _lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_)
                                         + 8);
}
