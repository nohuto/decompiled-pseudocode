/*
 * XREFs of ?RimSignalUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z @ 0x1801A8B20
 * Callers:
 *     ?SendTelemetry@CInteractionFrameStats@@MEAAXXZ @ 0x1801A59E0 (-SendTelemetry@CInteractionFrameStats@@MEAAXXZ.c)
 *     ?CalcAverageRimSignalLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A7C24 (-CalcAverageRimSignalLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?SendTelemetry@CTouchFrameStats@@MEAAXXZ @ 0x1801A8B60 (-SendTelemetry@CTouchFrameStats@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CTouchFrameStats::CInteractionInfo::RimSignalUs(
        CTouchFrameStats::CInteractionInfo *this,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *((_QWORD *)this + 5);
  if ( v2 <= *((_QWORD *)this + 4) )
    return 0LL;
  else
    return (v2 - *((_QWORD *)this + 4)) / (a2 / 0xF4240);
}
