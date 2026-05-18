/*
 * XREFs of ?GetTelemetryManager@Engine@1Spectre@@QEBAPEAVITelemetryManager@Utils@2@XZ @ 0x18003486C
 * Callers:
 *     ?SendShutdownOrSuspendTelemetry@Engine@1Spectre@@IEAAX_N@Z @ 0x180036A54 (-SendShutdownOrSuspendTelemetry@Engine@1Spectre@@IEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

struct Spectre::Utils::ITelemetryManager *__fastcall Spectre::Engine::Engine::GetTelemetryManager(
        Spectre::Engine::Engine *this)
{
  return (struct Spectre::Utils::ITelemetryManager *)*((_QWORD *)this + 60);
}
