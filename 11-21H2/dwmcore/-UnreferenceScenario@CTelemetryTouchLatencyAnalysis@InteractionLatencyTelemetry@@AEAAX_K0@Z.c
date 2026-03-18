/*
 * XREFs of ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAX_K0@Z @ 0x18001B508
 * Callers:
 *     ??1TouchUpdateInfo@InteractionLatencyTelemetry@@QEAA@XZ @ 0x18001A968 (--1TouchUpdateInfo@InteractionLatencyTelemetry@@QEAA@XZ.c)
 *     ?UpdateScenarioLatency@TouchUpdateInfo@InteractionLatencyTelemetry@@QEAAX_K000@Z @ 0x18001AA44 (-UpdateScenarioLatency@TouchUpdateInfo@InteractionLatencyTelemetry@@QEAAX_K000@Z.c)
 * Callees:
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchScenarioInfo@2@@Z @ 0x18001B538 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchS.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAPEAUTouchScenarioInfo@2@_K@Z @ 0x18001B5A8 (-FindScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAPEAUTouchScenarioI.c)
 */

void __fastcall InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::UnreferenceScenario(
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *this,
        unsigned __int64 a2)
{
  struct InteractionLatencyTelemetry::TouchScenarioInfo *Scenario; // rax
  InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *v3; // rcx
  unsigned __int64 v4; // r10

  Scenario = InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::FindScenario(this, a2);
  if ( Scenario )
  {
    if ( v4 >= *((_QWORD *)Scenario + 25) )
      InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::UnreferenceScenario(v3, Scenario);
  }
}
