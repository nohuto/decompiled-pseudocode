/*
 * XREFs of ??0TelemetryTraceUid@Utils@Spectre@@AEAA@XZ @ 0x180021B7C
 * Callers:
 *     _dynamic_initializer_for__Spectre::Utils::TelemetryTraceUid::Zero__ @ 0x180003670 (_dynamic_initializer_for__Spectre--Utils--TelemetryTraceUid--Zero__.c)
 *     ?CreateUid@TelemetryTraceUid@Utils@Spectre@@SA?AV123@XZ @ 0x180022454 (-CreateUid@TelemetryTraceUid@Utils@Spectre@@SA-AV123@XZ.c)
 * Callees:
 *     ??$?0$$V@?$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEAA@XZ @ 0x1800215E0 (--$-0$$V@-$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEAA@XZ.c)
 */

Spectre::Utils::TelemetryTraceUid *__fastcall Spectre::Utils::TelemetryTraceUid::TelemetryTraceUid(
        Spectre::Utils::TelemetryTraceUid *this)
{
  Spectre::Utils::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>(this);
  return this;
}
