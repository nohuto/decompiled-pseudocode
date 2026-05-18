/*
 * XREFs of ?Initialize@TelemetrySingleton@Utils@Spectre@@SA_NPEAVITelemetryManager@23@@Z @ 0x1800DBF44
 * Callers:
 *     ?SendEngineInitializedTelemetry@Engine@1Spectre@@IEAAXXZ @ 0x18003670C (-SendEngineInitializedTelemetry@Engine@1Spectre@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall Spectre::Utils::TelemetrySingleton::Initialize(struct Spectre::Utils::ITelemetryManager *a1)
{
  if ( Spectre::Utils::TelemetrySingleton::s_instance || !a1 )
    return 0;
  Spectre::Utils::TelemetrySingleton::s_instance = a1;
  return 1;
}
