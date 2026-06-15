/*
 * XREFs of ??0?$CSAutoLock@$00@@QEAA@PEAVCSLock@@@Z @ 0x14009B140
 * Callers:
 *     ?AddData@?$CAggregateTelemetry@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAAXW4SpatialObjectCountTypes@@I@Z @ 0x14009BA40 (-AddData@-$CAggregateTelemetry@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTrace.c)
 *     ?Clear@?$CAggregateTelemetry@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAAXXZ @ 0x14009BE30 (-Clear@-$CAggregateTelemetry@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLo.c)
 *     ?Log@?$CAggregateTelemetry@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAAX_N@Z @ 0x14009BF40 (-Log@-$CAggregateTelemetry@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogg.c)
 *     ?SetPeriod@?$CAggregateTelemetryLazyUpdate@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAAX_K@Z @ 0x14009C8E0 (-SetPeriod@-$CAggregateTelemetryLazyUpdate@VCSpatialAudioObjectCountValues@CSpatialCrossProcessE.c)
 * Callees:
 *     <none>
 */

struct _RTL_CRITICAL_SECTION **__fastcall CSAutoLock<1>::CSAutoLock<1>(
        struct _RTL_CRITICAL_SECTION **a1,
        struct _RTL_CRITICAL_SECTION *a2)
{
  *a1 = 0LL;
  if ( a2 )
  {
    *a1 = a2;
    EnterCriticalSection(a2);
  }
  return a1;
}
