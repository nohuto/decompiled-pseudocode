/*
 * XREFs of ?ForceRetireScenario@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2@@Z @ 0x1801D2E50
 * Callers:
 *     ?AllocateScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAPEAUTouchScenarioInfo@2@XZ @ 0x180015EA8 (-AllocateScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAPEAUTouchScena.c)
 *     ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@2@_K@Z @ 0x18001A5B8 (-UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXPEBUTO.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIAEBU_LUID@@2PEAPEAUTouchUpdateInfo@2@@Z @ 0x18001AE6C (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEBU.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180025194 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

void __fastcall InteractionLatencyTelemetry::InteractionTraceProvider::ForceRetireScenario(
        const struct InteractionLatencyTelemetry::TouchScenarioInfo *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r9
  int v4; // [rsp+30h] [rbp-39h] BYREF
  int v5; // [rsp+34h] [rbp-35h] BYREF
  __int64 v6; // [rsp+38h] [rbp-31h] BYREF
  __int64 v7; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+50h] [rbp-19h] BYREF
  int *v9; // [rsp+70h] [rbp+7h]
  __int64 v10; // [rsp+78h] [rbp+Fh]
  __int64 *v11; // [rsp+80h] [rbp+17h]
  __int64 v12; // [rsp+88h] [rbp+1Fh]
  __int64 *v13; // [rsp+90h] [rbp+27h]
  __int64 v14; // [rsp+98h] [rbp+2Fh]
  int *v15; // [rsp+A0h] [rbp+37h]
  __int64 v16; // [rsp+A8h] [rbp+3Fh]

  if ( (unsigned int)dword_1803D0EB8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1803D0EB8, 8LL) )
    {
      v4 = *(_DWORD *)(v3 + 152);
      v6 = *(_QWORD *)(v3 + 8);
      v15 = &v4;
      v13 = &v6;
      v11 = &v7;
      v9 = &v5;
      v7 = v3;
      v14 = v1;
      v12 = v1;
      v5 = 5;
      v16 = 4LL;
      v10 = 4LL;
      tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_18036D8E1, 0LL, 0LL, 6u, &v8);
    }
  }
}
