/*
 * XREFs of ?Clear@?$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAAXXZ @ 0x14008FC30
 * Callers:
 *     ??0?$CAggregateTelemetryClustered@W4SpatialCpErrorEvent@@PEAI$0A@$0A@@@QEAA@PEAV?$CAggregateValuesClusteredBase@W4SpatialCpErrorEvent@@PEAI@@_K11@Z @ 0x14008ED0C (--0-$CAggregateTelemetryClustered@W4SpatialCpErrorEvent@@PEAI$0A@$0A@@@QEAA@PEAV-$CAggregateValu.c)
 *     ??0?$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@QEAA@PEAV?$CAggregateValuesClusteredBase@W4SpatialCpGlitchEvent@@PEAI@@_K11@Z @ 0x14008EDCC (--0-$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@QEAA@PEAV-$CAggregateVal.c)
 * Callees:
 *     ?Clear@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4SpatialCpErrorEvent@@PEAI@@W4SpatialCpErrorEvent@@PEAI$0A@$0A@@@UEAAXXZ @ 0x14008FB70 (-Clear@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4SpatialCpErrorEvent@@PEAI@@W4Spa.c)
 */

__int64 __fastcall CAggregateTelemetryClustered<enum SpatialCpGlitchEvent,unsigned int *,0,0>::Clear(__int64 a1)
{
  ULONGLONG TickCount64; // rax

  TickCount64 = GetTickCount64();
  *(_BYTE *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 64) = TickCount64;
  *(_QWORD *)(a1 + 72) = TickCount64;
  *(_QWORD *)(a1 + 88) = TickCount64;
  return CAggregateTelemetry<CAggregateValuesClusteredBase<enum SpatialCpErrorEvent,unsigned int *>,enum SpatialCpErrorEvent,unsigned int *,0,0>::Clear(a1);
}
