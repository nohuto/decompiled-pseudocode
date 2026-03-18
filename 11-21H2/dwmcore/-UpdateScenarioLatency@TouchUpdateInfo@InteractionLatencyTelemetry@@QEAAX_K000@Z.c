/*
 * XREFs of ?UpdateScenarioLatency@TouchUpdateInfo@InteractionLatencyTelemetry@@QEAAX_K000@Z @ 0x18001AA44
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18007C008 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAX_K0@Z @ 0x18001B508 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAX_K0@Z.c)
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAX_KAEBUTELEMETRY_INTERACTION_FRAME_TIMES@@III0@Z @ 0x18001B5E8 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAX_KAE.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

void __fastcall InteractionLatencyTelemetry::TouchUpdateInfo::UpdateScenarioLatency(
        InteractionLatencyTelemetry::TouchUpdateInfo *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *v5; // r10
  __int64 v7; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  unsigned int v15; // r9d
  unsigned int v16; // [rsp+28h] [rbp-110h]
  _OWORD v17[9]; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v18; // [rsp+D0h] [rbp-68h]
  __int64 v19; // [rsp+D8h] [rbp-60h]
  __int64 v20; // [rsp+E0h] [rbp-58h]
  __int64 v21; // [rsp+E8h] [rbp-50h]
  __int64 v22; // [rsp+F0h] [rbp-48h]
  __int64 v23; // [rsp+F8h] [rbp-40h]
  __int64 v24; // [rsp+100h] [rbp-38h]
  __int64 v25; // [rsp+108h] [rbp-30h]

  v5 = (InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *)*((_QWORD *)this + 26);
  if ( v5 )
  {
    v7 = *((_QWORD *)this + 19);
    v8 = *(_OWORD *)((char *)this + 24);
    v17[0] = *(_OWORD *)((char *)this + 8);
    v9 = *(_OWORD *)((char *)this + 40);
    v17[1] = v8;
    v10 = *(_OWORD *)((char *)this + 56);
    v17[2] = v9;
    v11 = *(_OWORD *)((char *)this + 72);
    v17[3] = v10;
    v12 = *(_OWORD *)((char *)this + 88);
    v17[4] = v11;
    v13 = *(_OWORD *)((char *)this + 104);
    v17[5] = v12;
    v14 = *(_OWORD *)((char *)this + 136);
    v17[6] = v13;
    v17[7] = *(_OWORD *)((char *)this + 120);
    v17[8] = v14;
    v18 = v7;
    v19 = *((_QWORD *)this + 20);
    v20 = *((_QWORD *)this + 21);
    v24 = *((_QWORD *)this + 22);
    v25 = *((_QWORD *)this + 23);
    v16 = *((_DWORD *)this + 50);
    LODWORD(v7) = *((_DWORD *)this + 49);
    v21 = a3;
    v22 = a4;
    v15 = *((_DWORD *)this + 48);
    v23 = a2;
    InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::AnalyzeLatencyInformation(
      v5,
      *(_QWORD *)this,
      (const struct TELEMETRY_INTERACTION_FRAME_TIMES *)v17,
      v15,
      v7,
      v16,
      a5);
    InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::UnreferenceScenario(
      *((InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis **)this + 26),
      *(_QWORD *)this,
      a5);
    *((_QWORD *)this + 26) = 0LL;
  }
}
