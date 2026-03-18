/*
 * XREFs of ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@2@_K@Z @ 0x18001A5B8
 * Callers:
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x18001AC20 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_.c)
 * Callees:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchScenarioInfo@2@_N1@Z @ 0x180013B7C (-RetireScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchScenar.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAPEAUTouchScenarioInfo@2@_K@Z @ 0x18001B5A8 (-FindScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAPEAUTouchScenarioI.c)
 *     ?ConvertHostPointerFrameTimesToContainerTimeline@InteractionLatencyTelemetry@@YA?AUtagTELEMETRY_POINTER_FRAME_TIMES@@AEBU2@@Z @ 0x1801D2824 (-ConvertHostPointerFrameTimesToContainerTimeline@InteractionLatencyTelemetry@@YA-AUtagTELEMETRY_.c)
 *     ?ForceRetireScenario@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2@@Z @ 0x1801D2E50 (-ForceRetireScenario@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioI.c)
 *     ?TelemetryProcessingErrorDetected@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K@Z @ 0x1801D5C38 (-TelemetryProcessingErrorDetected@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUT.c)
 *     ?UpdateLastTelemetryInfo@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1801D61B4 (-UpdateLastTelemetryInfo@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScena.c)
 *     ?IsVailContainer@@YA_NXZ @ 0x18026BB8C (-IsVailContainer@@YA_NXZ.c)
 */

void __fastcall InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::UpdateLastTelemetryInfo(
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *this,
        const struct TOUCH_TELEMETRY_UPDATE_INFO *a2,
        struct InteractionLatencyTelemetry::TouchUpdateInfo *a3,
        unsigned __int64 a4)
{
  struct InteractionLatencyTelemetry::TouchScenarioInfo *Scenario; // rax
  LARGE_INTEGER *v9; // rbx
  __int128 *v10; // rax
  __int128 v11; // [rsp+20h] [rbp-148h]
  __int128 v12; // [rsp+30h] [rbp-138h]
  __int128 v13; // [rsp+40h] [rbp-128h]
  __int128 v14; // [rsp+50h] [rbp-118h]
  __int128 v15; // [rsp+60h] [rbp-108h]
  __int128 v16; // [rsp+70h] [rbp-F8h]
  __int128 v17; // [rsp+80h] [rbp-E8h]
  __int128 v18; // [rsp+90h] [rbp-D8h]
  __int128 v19; // [rsp+A0h] [rbp-C8h]
  _BYTE v20[144]; // [rsp+B0h] [rbp-B8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+178h] [rbp+10h] BYREF

  Scenario = InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::FindScenario(this, *(_QWORD *)a2);
  v9 = (LARGE_INTEGER *)Scenario;
  if ( Scenario )
  {
    *((_DWORD *)Scenario + 126) = *((_DWORD *)a2 + 48);
    if ( *((_QWORD *)Scenario + 25) != a4 )
    {
      QueryPerformanceCounter(&PerformanceCount);
      v9[61] = PerformanceCount;
      v11 = *(_OWORD *)((char *)a2 + 8);
      v12 = *(_OWORD *)((char *)a2 + 24);
      v13 = *(_OWORD *)((char *)a2 + 40);
      v14 = *(_OWORD *)((char *)a2 + 56);
      v15 = *(_OWORD *)((char *)a2 + 72);
      v16 = *(_OWORD *)((char *)a2 + 88);
      v17 = *(_OWORD *)((char *)a2 + 104);
      v18 = *(_OWORD *)((char *)a2 + 120);
      v19 = *(_OWORD *)((char *)a2 + 136);
      if ( !*((_WORD *)a2 + 94) )
        goto LABEL_9;
      if ( !IsVailContainer() )
        goto LABEL_9;
      v10 = (__int128 *)InteractionLatencyTelemetry::ConvertHostPointerFrameTimesToContainerTimeline(
                          v20,
                          (char *)a2 + 8);
      v11 = *v10;
      v12 = v10[1];
      v13 = v10[2];
      v14 = v10[3];
      v15 = v10[4];
      v16 = v10[5];
      v17 = v10[6];
      v18 = v10[7];
      v19 = v10[8];
      if ( !*(_QWORD *)v10 )
        goto LABEL_8;
      if ( (_QWORD)v15 )
      {
LABEL_9:
        *(_OWORD *)((char *)a3 + 8) = v11;
        *(_OWORD *)((char *)a3 + 24) = v12;
        *(_OWORD *)((char *)a3 + 40) = v13;
        *(_OWORD *)((char *)a3 + 56) = v14;
        *(_OWORD *)((char *)a3 + 72) = v15;
        *(_OWORD *)((char *)a3 + 88) = v16;
        *(_OWORD *)((char *)a3 + 104) = v17;
        *(_OWORD *)((char *)a3 + 120) = v18;
        *(_OWORD *)((char *)a3 + 136) = v19;
        *((_QWORD *)a3 + 19) = *((_QWORD *)a2 + 19);
        *((_QWORD *)a3 + 20) = *((_QWORD *)a2 + 20);
        *((LARGE_INTEGER *)a3 + 21) = v9[61];
        *((_DWORD *)a3 + 50) = *((_DWORD *)a2 + 49);
        *((_DWORD *)a3 + 49) = *((_DWORD *)a2 + 49);
        InteractionLatencyTelemetry::InteractionTraceProvider::UpdateLastTelemetryInfo(
          (const struct InteractionLatencyTelemetry::TouchScenarioInfo *)v9,
          a2);
      }
      else
      {
LABEL_8:
        LOBYTE(v9->LowPart) = 1;
        InteractionLatencyTelemetry::InteractionTraceProvider::TelemetryProcessingErrorDetected(
          (const struct InteractionLatencyTelemetry::TouchScenarioInfo *)v9,
          a2,
          a4);
        InteractionLatencyTelemetry::InteractionTraceProvider::ForceRetireScenario((const struct InteractionLatencyTelemetry::TouchScenarioInfo *)v9);
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::RetireScenario(
          this,
          (struct InteractionLatencyTelemetry::TouchScenarioInfo *)v9,
          1,
          0);
      }
    }
  }
}
