/*
 * XREFs of ?Provider@CAppBackupListenerLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1806F4368
 * Callers:
 *     ??$CompatInfoBackup_Error@AEAY0CO@$$CBGUhresult@winrt@@PEBG@CAppBackupListenerTelemetry@@SAXAEAY0CO@$$CBG$$QEAUhresult@winrt@@$$QEAPEBG@Z @ 0x180258938 (--$CompatInfoBackup_Error@AEAY0CO@$$CBGUhresult@winrt@@PEBG@CAppBackupListenerTelemetry@@SAXAEAY.c)
 * Callees:
 *     ?get@?$static_lazy@VCAppBackupListenerLogging@@@details@wil@@QEAAPEAVCAppBackupListenerLogging@@P6AXXZ@Z @ 0x18018F6C4 (-get@-$static_lazy@VCAppBackupListenerLogging@@@details@wil@@QEAAPEAVCAppBackupListenerLogging@@.c)
 */

const struct _tlgProvider_t *__fastcall CAppBackupListenerLogging::Provider(__int64 a1)
{
  return (const struct _tlgProvider_t *)wil::details::static_lazy<CAppBackupListenerLogging>::get(
                                          a1,
                                          (void (__cdecl *)())_lambda_f0e7b1f4516883ab4fcec3efade13bff_::_lambda_invoker_cdecl_)[1];
}
