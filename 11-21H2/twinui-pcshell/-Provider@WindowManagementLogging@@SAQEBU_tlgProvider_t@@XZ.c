/*
 * XREFs of ?Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180322CB0
 * Callers:
 *     ??1Completer@?$static_lazy@VVirtualDesktopTelemetry@VirtualDesktop@@@details@wil@@QEAA@XZ @ 0x1801B6874 (--1Completer@-$static_lazy@VVirtualDesktopTelemetry@VirtualDesktop@@@details@wil@@QEAA@XZ.c)
 *     ?VirtualDesktopSwitchThumbnailCacheQueryFailed_@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXJKJJ@Z @ 0x1801B7270 (-VirtualDesktopSwitchThumbnailCacheQueryFailed_@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXJKJ.c)
 *     ??$WindowTabHostThumbnailRequested@AEBIAEBI_J@WindowTabHostTelemetry@@SAXAEBI0$$QEA_J@Z @ 0x1801BA8D4 (--$WindowTabHostThumbnailRequested@AEBIAEBI_J@WindowTabHostTelemetry@@SAXAEBI0$$QEA_J@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 */

const struct _tlgProvider_t *__fastcall WindowManagementLogging::Provider(__int64 a1)
{
  return (const struct _tlgProvider_t *)wil::details::static_lazy<WindowManagementLogging>::get(
                                          a1,
                                          _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
}
