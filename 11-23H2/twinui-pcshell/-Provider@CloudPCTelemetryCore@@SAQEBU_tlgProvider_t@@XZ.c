/*
 * XREFs of ?Provider@CloudPCTelemetryCore@@SAQEBU_tlgProvider_t@@XZ @ 0x180707194
 * Callers:
 *     ??$AccessPhysicalDeviceTriggered@PEBG@CloudPCTelemetryCore@@SAX$$QEAPEBG@Z @ 0x1802769B4 (--$AccessPhysicalDeviceTriggered@PEBG@CloudPCTelemetryCore@@SAX$$QEAPEBG@Z.c)
 *     ??$PhysicalDeviceAccessed@AEAY0BAE@G@CloudPCTelemetryCore@@SAXAEAY0BAE@G@Z @ 0x180276A8C (--$PhysicalDeviceAccessed@AEAY0BAE@G@CloudPCTelemetryCore@@SAXAEAY0BAE@G@Z.c)
 *     ??$CPCProviderAppClose@IHAEAY0BAE@GPEBG_NW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTelemetryCore@@SAX$$QEAI$$QEAHAEAY0BAE@G$$QEAPEBG$$QEA_N$$QEAW4SourceOfDisconnect@0@@Z @ 0x18027AB20 (--$CPCProviderAppClose@IHAEAY0BAE@GPEBG_NW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTele.c)
 *     ??$CPCProviderAppClose@IIAEAY0BAE@GPEBG_NW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTelemetryCore@@SAX$$QEAI0AEAY0BAE@G$$QEAPEBG$$QEA_N$$QEAW4SourceOfDisconnect@0@@Z @ 0x18027AC14 (--$CPCProviderAppClose@IIAEAY0BAE@GPEBG_NW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTele.c)
 * Callees:
 *     ?get@?$static_lazy@VCloudPCTelemetryCore@@@details@wil@@QEAAPEAVCloudPCTelemetryCore@@P6AXXZ@Z @ 0x18070823C (-get@-$static_lazy@VCloudPCTelemetryCore@@@details@wil@@QEAAPEAVCloudPCTelemetryCore@@P6AXXZ@Z.c)
 */

const struct _tlgProvider_t *__fastcall CloudPCTelemetryCore::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<CloudPCTelemetryCore>::get(
                                             a1,
                                             _lambda_ea63a974ef55fc5057a8ed9c75a53795_::_lambda_invoker_cdecl_)
                                         + 8);
}
