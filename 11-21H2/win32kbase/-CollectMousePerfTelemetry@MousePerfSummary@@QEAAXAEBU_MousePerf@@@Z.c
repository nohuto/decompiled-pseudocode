/*
 * XREFs of ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x1C0038074
 * Callers:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1C0035AFC (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01FB694 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ?CalculateLatencyInMicroseconds@MousePerfSummary@@AEAA_K_K0@Z @ 0x1C0038288 (-CalculateLatencyInMicroseconds@MousePerfSummary@@AEAA_K_K0@Z.c)
 *     ?LogMouseLatencyEvents@MousePerfSummary@@AEAAXAEBU_MousePerf@@@Z @ 0x1C0038350 (-LogMouseLatencyEvents@MousePerfSummary@@AEAAXAEBU_MousePerf@@@Z.c)
 *     ?SendMouseLatencyTelemetryRandomPick@MousePerfSummary@@AEAAXXZ @ 0x1C00E95A0 (-SendMouseLatencyTelemetryRandomPick@MousePerfSummary@@AEAAXXZ.c)
 *     ?SendMousePerfSummaryTelemetry@MousePerfSummary@@AEAAXXZ @ 0x1C00E974C (-SendMousePerfSummaryTelemetry@MousePerfSummary@@AEAAXXZ.c)
 *     ?UpdatePerfData@MousePerfStage@@QEAAX_K@Z @ 0x1C00E9BB4 (-UpdatePerfData@MousePerfStage@@QEAAX_K@Z.c)
 */

void __fastcall MousePerfSummary::CollectMousePerfTelemetry(MousePerfSummary *this, const struct _MousePerf *a2)
{
  MousePerfSummary *v3; // rcx
  __int64 v4; // r10
  MousePerfSummary *v5; // rcx
  __int64 v6; // r10
  MousePerfSummary *v7; // rcx
  unsigned __int64 v8; // r9
  const struct _MousePerf *v9; // r10
  int v10; // ecx
  unsigned __int64 v11; // r8
  MousePerfSummary *v12; // rax
  __int64 v13; // r10
  __int64 v14; // r10
  MousePerfSummary *v15; // rcx
  __int64 v16; // r10
  MousePerfSummary *v17; // rcx
  __int64 v18; // r10
  MousePerfSummary *v19; // rcx
  __int64 v20; // r10
  MousePerfSummary *v21; // rcx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  MousePerfStage *v24; // rcx

  v3 = (MousePerfSummary *)*((unsigned int *)a2 + 18);
  *((_DWORD *)this + 122) = (_DWORD)v3;
  if ( (_DWORD)v3 == 1 )
  {
    v11 = *((_QWORD *)a2 + 2);
    if ( !v11 )
      v11 = *((_QWORD *)a2 + 1);
    v12 = (MousePerfSummary *)MousePerfSummary::CalculateLatencyInMicroseconds(v3, *(_QWORD *)a2, v11);
    *((_QWORD *)this + 50) = v12;
    *((_QWORD *)this + 57) = MousePerfSummary::CalculateLatencyInMicroseconds(
                               v12,
                               *(_QWORD *)(v13 + 16),
                               *(_QWORD *)(v13 + 8));
    *((_QWORD *)this + 51) = MousePerfSummary::CalculateLatencyInMicroseconds(
                               v15,
                               *(_QWORD *)(v14 + 8),
                               *(_QWORD *)(v14 + 24));
    *((_QWORD *)this + 58) = MousePerfSummary::CalculateLatencyInMicroseconds(
                               v17,
                               *(_QWORD *)(v16 + 24),
                               *(_QWORD *)(v16 + 32));
    *((_QWORD *)this + 59) = MousePerfSummary::CalculateLatencyInMicroseconds(
                               v19,
                               *(_QWORD *)(v18 + 32),
                               *(_QWORD *)(v18 + 56));
    *((_QWORD *)this + 52) = MousePerfSummary::CalculateLatencyInMicroseconds(
                               v21,
                               *(_QWORD *)(v20 + 56),
                               *(_QWORD *)(v20 + 64));
    MousePerfStage::UpdatePerfData(this, v22);
    MousePerfStage::UpdatePerfData((MousePerfSummary *)((char *)this + 40), *((_QWORD *)this + 57));
    MousePerfStage::UpdatePerfData((MousePerfSummary *)((char *)this + 80), *((_QWORD *)this + 51));
    MousePerfStage::UpdatePerfData((MousePerfSummary *)((char *)this + 120), *((_QWORD *)this + 58));
    v23 = *((_QWORD *)this + 59);
    v24 = (MousePerfSummary *)((char *)this + 160);
  }
  else
  {
    *((_QWORD *)this + 57) = 0LL;
    *((_QWORD *)this + 58) = 0LL;
    *((_QWORD *)this + 59) = 0LL;
    *((_QWORD *)this + 50) = MousePerfSummary::CalculateLatencyInMicroseconds(v3, *(_QWORD *)a2, *((_QWORD *)a2 + 1));
    *((_QWORD *)this + 51) = MousePerfSummary::CalculateLatencyInMicroseconds(
                               v5,
                               *(_QWORD *)(v4 + 8),
                               *(_QWORD *)(v4 + 56));
    *((_QWORD *)this + 52) = MousePerfSummary::CalculateLatencyInMicroseconds(
                               v7,
                               *(_QWORD *)(v6 + 56),
                               *(_QWORD *)(v6 + 64));
    if ( v10 )
      goto LABEL_3;
    MousePerfStage::UpdatePerfData(this, v8);
    v23 = *((_QWORD *)this + 51);
    v24 = (MousePerfSummary *)((char *)this + 80);
  }
  MousePerfStage::UpdatePerfData(v24, v23);
  MousePerfStage::UpdatePerfData((MousePerfSummary *)((char *)this + 200), *((_QWORD *)this + 52));
LABEL_3:
  MousePerfSummary::LogMouseLatencyEvents(this, v9);
  if ( *((_BYTE *)this + 528) == 1 )
  {
    *((_QWORD *)this + 67) = *((_QWORD *)this + 50);
    *((_QWORD *)this + 68) = *((_QWORD *)this + 51);
    *((_QWORD *)this + 69) = *((_QWORD *)this + 52);
    *((_QWORD *)this + 74) = *((_QWORD *)this + 57);
    *((_QWORD *)this + 75) = *((_QWORD *)this + 58);
    *((_QWORD *)this + 76) = *((_QWORD *)this + 59);
    *((_BYTE *)this + 528) = 0;
  }
  if ( (unsigned int)(*((_DWORD *)this + 122) - 2) > 1 )
  {
    MousePerfSummary::SendMousePerfSummaryTelemetry(this);
    MousePerfSummary::SendMouseLatencyTelemetryRandomPick(this);
  }
}
