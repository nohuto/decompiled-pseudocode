/*
 * XREFs of ?Clear@?$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAAXXZ @ 0x180062CC0
 * Callers:
 *     ??0?$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@QEAA@PEAV?$CAggregateValuesClusteredBase@W4SarmErrorEvent@@PEAI@@_K11@Z @ 0x180062AF4 (--0-$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@QEAA@PEAV-$CAggregateValuesClu.c)
 * Callees:
 *     ?Clear@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4SarmErrorEvent@@PEAI@@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAAXXZ @ 0x180062D10 (-Clear@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4SarmErrorEvent@@PEAI@@W4SarmErro.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAggregateTelemetryClustered<enum SarmErrorEvent,unsigned int *,0,0>::Clear(__int64 a1)
{
  ULONGLONG TickCount64; // rax

  TickCount64 = GetTickCount64();
  *(_BYTE *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 64) = TickCount64;
  *(_QWORD *)(a1 + 72) = TickCount64;
  *(_QWORD *)(a1 + 88) = TickCount64;
  return CAggregateTelemetry<CAggregateValuesClusteredBase<enum SarmErrorEvent,unsigned int *>,enum SarmErrorEvent,unsigned int *,0,0>::Clear(a1);
}
