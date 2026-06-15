/*
 * XREFs of ??1?$CAggregateTelemetryClustered@W4SpatialCpErrorEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x14008F22C
 * Callers:
 *     _CSpatialCrossProcessEndpointTraceLogger::CSpatialCrossProcessEndpointTraceLogger_::_1_::dtor$4 @ 0x14008F0B0 (_CSpatialCrossProcessEndpointTraceLogger--CSpatialCrossProcessEndpointTraceLogger_--_1_--dtor$4.c)
 *     ??1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x14008F308 (--1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ.c)
 *     ??_G?$CAggregateTelemetryClustered@W4SpatialCpErrorEvent@@PEAI$0A@$0A@@@UEAAPEAXI@Z @ 0x14008F440 (--_G-$CAggregateTelemetryClustered@W4SpatialCpErrorEvent@@PEAI$0A@$0A@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Log@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4SpatialCpErrorEvent@@PEAI@@W4SpatialCpErrorEvent@@PEAI$0A@$0A@@@UEAAX_N@Z @ 0x14008FCD0 (-Log@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4SpatialCpErrorEvent@@PEAI@@W4Spati.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CAggregateTelemetryClustered<enum SpatialCpErrorEvent,unsigned int *,0,0>::~CAggregateTelemetryClustered<enum SpatialCpErrorEvent,unsigned int *,0,0>(
        __int64 a1)
{
  ULONGLONG TickCount64; // rax
  __int64 v3; // rdx

  *(_QWORD *)a1 = &CAggregateTelemetryClustered<enum SpatialCpErrorEvent,unsigned int *,0,0>::`vftable';
  TickCount64 = GetTickCount64();
  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    if ( TickCount64 - *(_QWORD *)(a1 + 48) > *(_QWORD *)(a1 + 40) )
    {
      LOBYTE(v3) = 1;
      CAggregateTelemetry<CAggregateValuesClusteredBase<enum SpatialCpErrorEvent,unsigned int *>,enum SpatialCpErrorEvent,unsigned int *,0,0>::Log(
        a1,
        v3);
    }
  }
  return CAggregateTelemetry<CAggregateValuesClusteredBase<enum SpatialCpErrorEvent,unsigned int *>,enum SpatialCpErrorEvent,unsigned int *,0,0>::~CAggregateTelemetry<CAggregateValuesClusteredBase<enum SpatialCpErrorEvent,unsigned int *>,enum SpatialCpErrorEvent,unsigned int *,0,0>(
           a1,
           v3);
}
