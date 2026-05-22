/*
 * XREFs of ?StartTime@CInteractionInfo@CTouchFrameStats@@QEBA_KW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0006@@@Z @ 0x1801A94B0
 * Callers:
 *     ?InputGlitch@CInteractionInfo@CTouchFrameStats@@QEBA_NW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0006@@PEBV12@@Z @ 0x1801A8704 (-InputGlitch@CInteractionInfo@CTouchFrameStats@@QEBA_NW4__MIDL___MIDL_itf_touchtelemetry_0000_00.c)
 *     ?TotalLatencyMs@CInteractionInfo@CTouchFrameStats@@QEBAGW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0006@@_K@Z @ 0x1801A94E4 (-TotalLatencyMs@CInteractionInfo@CTouchFrameStats@@QEBAGW4__MIDL___MIDL_itf_touchtelemetry_0000_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTouchFrameStats::CInteractionInfo::StartTime(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( ((a2 - 2) & 0xFFFFFFFC) != 0 )
    return *(_QWORD *)(a1 + 160);
  if ( a2 == 4 )
    return *(_QWORD *)(a1 + 160);
  if ( !*(_WORD *)(a1 + 196) )
    return *(_QWORD *)(a1 + 160);
  result = *(_QWORD *)(a1 + 16);
  if ( !result )
    return *(_QWORD *)(a1 + 160);
  return result;
}
