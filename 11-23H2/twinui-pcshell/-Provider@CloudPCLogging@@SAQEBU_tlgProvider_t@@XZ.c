/*
 * XREFs of ?Provider@CloudPCLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180707174
 * Callers:
 *     ??$CorrelationIdCopied@AEAY0BAE@G@CloudPCTelemetry@@SAXAEAY0BAE@G@Z @ 0x180276A24 (--$CorrelationIdCopied@AEAY0BAE@G@CloudPCTelemetry@@SAXAEAY0BAE@G@Z.c)
 *     ?OnProcessDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUIInspectable@Foundation@56@AEBI@Z @ 0x18027BE20 (-OnProcessDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 *     ??$ProviderProcessTrackingStarted@AEAIPEBG@CloudPCTelemetry@@SAXAEAI$$QEAPEBG@Z @ 0x18027D3E8 (--$ProviderProcessTrackingStarted@AEAIPEBG@CloudPCTelemetry@@SAXAEAI$$QEAPEBG@Z.c)
 *     ??$ProviderProcessTrackingStopped@AEAIIPEBG@CloudPCTelemetry@@SAXAEAI$$QEAI$$QEAPEBG@Z @ 0x18027D474 (--$ProviderProcessTrackingStopped@AEAIIPEBG@CloudPCTelemetry@@SAXAEAI$$QEAI$$QEAPEBG@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VCloudPCLogging@@@details@wil@@QEAAPEAVCloudPCLogging@@P6AXXZ@Z @ 0x18070819C (-get@-$static_lazy@VCloudPCLogging@@@details@wil@@QEAAPEAVCloudPCLogging@@P6AXXZ@Z.c)
 */

const struct _tlgProvider_t *__fastcall CloudPCLogging::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<CloudPCLogging>::get(
                                             a1,
                                             _lambda_dfea9040a9b7ae3ffb0f12b39947d7d1_::_lambda_invoker_cdecl_)
                                         + 8);
}
