/*
 * XREFs of ?WasAlreadyReportedToTelemetry@OfficeInstalled@PenWorkspaceBrokerTelemetry@@MEAA_NJ@Z @ 0x180492390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PenWorkspaceBrokerTelemetry::OfficeInstalled::WasAlreadyReportedToTelemetry(
        PenWorkspaceBrokerTelemetry::OfficeInstalled *this,
        int a2)
{
  bool v2; // zf

  v2 = `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen == a2;
  `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen = a2;
  return v2;
}
