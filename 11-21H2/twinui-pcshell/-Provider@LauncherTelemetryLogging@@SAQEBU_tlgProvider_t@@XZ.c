/*
 * XREFs of ?Provider@LauncherTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800C5858
 * Callers:
 *     ?HideCortana@XamlLauncherState@@UEAAXXZ @ 0x180039580 (-HideCortana@XamlLauncherState@@UEAAXXZ.c)
 *     ?OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ @ 0x180042054 (-OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180047F50 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     wil::details::ScopeExitFn__lambda_c5aeae9e9503ae1f76e6a66fb3d5bafb___::_ScopeExitFn__lambda_c5aeae9e9503ae1f76e6a66fb3d5bafb___ @ 0x1801AD198 (wil--details--ScopeExitFn__lambda_c5aeae9e9503ae1f76e6a66fb3d5bafb___--_ScopeExitFn__lambda_c5ae.c)
 *     _lambda_751c3952807d6b9c6862705cee6a52fd_::operator() @ 0x1801AD3C0 (_lambda_751c3952807d6b9c6862705cee6a52fd_--operator().c)
 *     _lambda_89aeecb7bdfb5f34c088a312aff206e3_::operator() @ 0x1801AD508 (_lambda_89aeecb7bdfb5f34c088a312aff206e3_--operator().c)
 *     ?HideCortanaDueToDisplayChange@StartWindowTelemetry@@SAXXZ @ 0x1801AD79C (-HideCortanaDueToDisplayChange@StartWindowTelemetry@@SAXXZ.c)
 *     ?ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@@@Z @ 0x1801ADAEC (-ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@.c)
 *     ?HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x1804505C0 (-HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800C5AFC (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 */

const struct _tlgProvider_t *__fastcall LauncherTelemetryLogging::Provider(__int64 a1, __int64 a2, __int64 a3)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<LauncherTelemetryLogging>::get(
                                             a1,
                                             _lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_,
                                             a3)
                                         + 8);
}
