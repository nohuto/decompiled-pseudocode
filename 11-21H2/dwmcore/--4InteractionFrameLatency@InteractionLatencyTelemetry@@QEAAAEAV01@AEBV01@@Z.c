/*
 * XREFs of ??4InteractionFrameLatency@InteractionLatencyTelemetry@@QEAAAEAV01@AEBV01@@Z @ 0x180014160
 * Callers:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchScenarioInfo@2@_N1@Z @ 0x180013B7C (-RetireScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchScenar.c)
 *     ??4TouchScenarioInfo@InteractionLatencyTelemetry@@QEAAAEAU01@$$QEAU01@@Z @ 0x180013E78 (--4TouchScenarioInfo@InteractionLatencyTelemetry@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAX_KAEBUTELEMETRY_INTERACTION_FRAME_TIMES@@III0@Z @ 0x18001B5E8 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAX_KAE.c)
 *     ??4InteractionSummaryInfo@InteractionLatencyTelemetry@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801D1E10 (--4InteractionSummaryInfo@InteractionLatencyTelemetry@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEBUTouchScenarioInfo@2@_NGGAEBVInteractionFrameLatency@2@I@Z @ 0x1801D215C (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEBUTo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InteractionLatencyTelemetry::InteractionFrameLatency::operator=(__int64 a1, __int64 a2)
{
  if ( a1 != a2 )
  {
    *(_DWORD *)a1 = *(_DWORD *)a2;
    *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
    *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
    *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 28);
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
    *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
    *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 44);
    *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
    *(_OWORD *)(a1 + 52) = *(_OWORD *)(a2 + 52);
    *(_OWORD *)(a1 + 68) = *(_OWORD *)(a2 + 68);
    *(_OWORD *)(a1 + 84) = *(_OWORD *)(a2 + 84);
    *(_QWORD *)(a1 + 100) = *(_QWORD *)(a2 + 100);
    *(_DWORD *)(a1 + 108) = *(_DWORD *)(a2 + 108);
  }
  return a1;
}
