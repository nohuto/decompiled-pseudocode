/*
 * XREFs of ?InputProcessorUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z @ 0x1801A87FC
 * Callers:
 *     ?SendTelemetry@CInteractionFrameStats@@MEAAXXZ @ 0x1801A59E0 (-SendTelemetry@CInteractionFrameStats@@MEAAXXZ.c)
 *     ?CalcAverageInputProcessorLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A76AC (-CalcAverageInputProcessorLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?SendTelemetry@CTouchFrameStats@@MEAAXXZ @ 0x1801A8B60 (-SendTelemetry@CTouchFrameStats@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CTouchFrameStats::CInteractionInfo::InputProcessorUs(
        CTouchFrameStats::CInteractionInfo *this,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *((_QWORD *)this + 6);
  if ( (v2 || (v2 = *((_QWORD *)this + 7)) != 0 || (v2 = *((_QWORD *)this + 8)) != 0) && v2 > *((_QWORD *)this + 5) )
    return (v2 - *((_QWORD *)this + 5)) / (a2 / 0xF4240);
  else
    return 0LL;
}
