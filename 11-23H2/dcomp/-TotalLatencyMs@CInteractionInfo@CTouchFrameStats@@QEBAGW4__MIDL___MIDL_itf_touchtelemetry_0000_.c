/*
 * XREFs of ?TotalLatencyMs@CInteractionInfo@CTouchFrameStats@@QEBAGW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0006@@_K@Z @ 0x1801A94E4
 * Callers:
 *     ?SendTelemetry@CInteractionFrameStats@@MEAAXXZ @ 0x1801A59E0 (-SendTelemetry@CInteractionFrameStats@@MEAAXXZ.c)
 *     ?CalcAverageTotalLatency@CTouchFrameStats@@IEBAMW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0006@@@Z @ 0x1801A7D80 (-CalcAverageTotalLatency@CTouchFrameStats@@IEBAMW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_000.c)
 *     ?SendTelemetry@CTouchFrameStats@@MEAAXXZ @ 0x1801A8B60 (-SendTelemetry@CTouchFrameStats@@MEAAXXZ.c)
 * Callees:
 *     ?StartTime@CInteractionInfo@CTouchFrameStats@@QEBA_KW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0006@@@Z @ 0x1801A94B0 (-StartTime@CInteractionInfo@CTouchFrameStats@@QEBA_KW4__MIDL___MIDL_itf_touchtelemetry_0000_0000.c)
 */

unsigned __int64 __fastcall CTouchFrameStats::CInteractionInfo::TotalLatencyMs(__int64 a1, int a2)
{
  __int64 v2; // r11
  unsigned __int64 started; // rax
  unsigned __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // r10

  LOWORD(v2) = 0;
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 8LL) || !*(_QWORD *)(*(_QWORD *)a1 + 16LL) )
    return (unsigned __int16)v2;
  started = CTouchFrameStats::CInteractionInfo::StartTime(a1, a2);
  if ( *(_QWORD *)(v5 + 48) != v2 )
    v6 = (_QWORD *)(v5 + 104);
  if ( *v6 > started )
    return (*v6 - started) / (v4 / 0x3E8);
  else
    return (unsigned __int16)v2;
}
