/*
 * XREFs of ?ResetPeriod@?$CAggregateTelemetryLazyUpdate@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAAX_N@Z @ 0x14009C8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAggregateTelemetryLazyUpdate<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>::ResetPeriod(
        _QWORD *a1)
{
  a1[4] = 0LL;
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
}
