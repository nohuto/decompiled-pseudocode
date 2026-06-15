/*
 * XREFs of ??1?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4SpatialCpErrorEvent@@PEAI@@W4SpatialCpErrorEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x14008F0DC
 * Callers:
 *     _CAggregateTelemetryClustered_enum_SpatialCpErrorEvent_unsigned_int___0_0_::CAggregateTelemetryClustered_enum_SpatialCpErrorEvent_unsigned_int___0_0__::_1_::dtor$0 @ 0x14008EDB9 (_CAggregateTelemetryClustered_enum_SpatialCpErrorEvent_unsigned_int___0_0_--CAggregateTelemetryC.c)
 *     ??1?$CAggregateTelemetryClustered@W4SpatialCpErrorEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x14008F22C (--1-$CAggregateTelemetryClustered@W4SpatialCpErrorEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 *     ??_G?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4SpatialCpErrorEvent@@PEAI@@W4SpatialCpErrorEvent@@PEAI$0A@$0A@@@UEAAPEAXI@Z @ 0x14008F380 (--_G-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4SpatialCpErrorEvent@@PEAI@@W4Spatia.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GCSLock@@QEAAPEAXI@Z @ 0x140089C3C (--_GCSLock@@QEAAPEAXI@Z.c)
 *     ?Log@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4SpatialCpErrorEvent@@PEAI@@W4SpatialCpErrorEvent@@PEAI$0A@$0A@@@UEAAX_N@Z @ 0x14008FCD0 (-Log@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4SpatialCpErrorEvent@@PEAI@@W4Spati.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CAggregateTelemetry<CAggregateValuesClusteredBase<enum SpatialCpErrorEvent,unsigned int *>,enum SpatialCpErrorEvent,unsigned int *,0,0>::~CAggregateTelemetry<CAggregateValuesClusteredBase<enum SpatialCpErrorEvent,unsigned int *>,enum SpatialCpErrorEvent,unsigned int *,0,0>(
        __int64 a1,
        __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *result; // rax
  struct _RTL_CRITICAL_SECTION *v4; // rcx
  __int64 (__fastcall ***v5)(_QWORD, __int64); // rcx

  result = (struct _RTL_CRITICAL_SECTION *)&CAggregateTelemetry<CAggregateValuesClusteredBase<enum SpatialCpErrorEvent,unsigned int *>,enum SpatialCpErrorEvent,unsigned int *,0,0>::`vftable';
  *(_QWORD *)a1 = &CAggregateTelemetry<CAggregateValuesClusteredBase<enum SpatialCpErrorEvent,unsigned int *>,enum SpatialCpErrorEvent,unsigned int *,0,0>::`vftable';
  if ( *(_BYTE *)(a1 + 16) )
  {
    LOBYTE(a2) = 1;
    result = (struct _RTL_CRITICAL_SECTION *)CAggregateTelemetry<CAggregateValuesClusteredBase<enum SpatialCpErrorEvent,unsigned int *>,enum SpatialCpErrorEvent,unsigned int *,0,0>::Log(
                                               a1,
                                               a2);
  }
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 + 24);
  if ( v4 )
  {
    result = CSLock::`scalar deleting destructor'(v4);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 17) )
  {
    v5 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 8);
    if ( v5 )
    {
      result = (struct _RTL_CRITICAL_SECTION *)(**v5)(v5, 1LL);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
  }
  return result;
}
