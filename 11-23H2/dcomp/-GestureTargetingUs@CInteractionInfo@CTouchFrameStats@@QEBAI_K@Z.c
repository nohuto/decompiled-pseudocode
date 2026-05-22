/*
 * XREFs of ?GestureTargetingUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z @ 0x1801A86B0
 * Callers:
 *     ?SendTelemetry@CInteractionFrameStats@@MEAAXXZ @ 0x1801A59E0 (-SendTelemetry@CInteractionFrameStats@@MEAAXXZ.c)
 *     ?CalcAverageGestureTargetingLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A7550 (-CalcAverageGestureTargetingLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?SendTelemetry@CTouchFrameStats@@MEAAXXZ @ 0x1801A8B60 (-SendTelemetry@CTouchFrameStats@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CTouchFrameStats::CInteractionInfo::GestureTargetingUs(
        CTouchFrameStats::CInteractionInfo *this,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // r8

  v2 = *((_QWORD *)this + 7);
  if ( !v2 )
    return 0LL;
  v3 = *((_QWORD *)this + 8);
  if ( !v3 )
  {
    v3 = *((_QWORD *)this + 10);
    if ( !v3 )
      v3 = *((_QWORD *)this + 20);
  }
  if ( v3 > v2 )
    return (v3 - v2) / (a2 / 0xF4240);
  else
    return 0LL;
}
