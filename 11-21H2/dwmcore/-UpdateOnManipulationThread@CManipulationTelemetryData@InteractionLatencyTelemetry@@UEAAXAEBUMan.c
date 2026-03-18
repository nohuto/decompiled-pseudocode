/*
 * XREFs of ?UpdateOnManipulationThread@CManipulationTelemetryData@InteractionLatencyTelemetry@@UEAAXAEBUManipulationThreadTelemetryData@@@Z @ 0x1800FAFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall InteractionLatencyTelemetry::CManipulationTelemetryData::UpdateOnManipulationThread(
        InteractionLatencyTelemetry::CManipulationTelemetryData *this,
        const struct ManipulationThreadTelemetryData *a2)
{
  _OWORD *v2; // rcx
  __int128 v3; // xmm0
  char *v4; // rdx

  v2 = (_OWORD *)((char *)this + 16);
  *v2 = *(_OWORD *)a2;
  v2[1] = *((_OWORD *)a2 + 1);
  v2[2] = *((_OWORD *)a2 + 2);
  v2[3] = *((_OWORD *)a2 + 3);
  v2[4] = *((_OWORD *)a2 + 4);
  v2[5] = *((_OWORD *)a2 + 5);
  v2[6] = *((_OWORD *)a2 + 6);
  v2 += 8;
  v3 = *((_OWORD *)a2 + 7);
  v4 = (char *)a2 + 128;
  *(v2 - 1) = v3;
  *v2 = *(_OWORD *)v4;
  v2[1] = *((_OWORD *)v4 + 1);
  v2[2] = *((_OWORD *)v4 + 2);
  *((_QWORD *)v2 + 6) = *((_QWORD *)v4 + 6);
}
