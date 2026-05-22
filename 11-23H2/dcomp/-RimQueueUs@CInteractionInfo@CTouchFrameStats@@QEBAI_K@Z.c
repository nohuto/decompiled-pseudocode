/*
 * XREFs of ?RimQueueUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z @ 0x1801A8A9C
 * Callers:
 *     ?SendTelemetry@CInteractionFrameStats@@MEAAXXZ @ 0x1801A59E0 (-SendTelemetry@CInteractionFrameStats@@MEAAXXZ.c)
 *     ?CalcAverageRimQueueLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A7964 (-CalcAverageRimQueueLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?SendTelemetry@CTouchFrameStats@@MEAAXXZ @ 0x1801A8B60 (-SendTelemetry@CTouchFrameStats@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CTouchFrameStats::CInteractionInfo::RimQueueUs(
        CTouchFrameStats::CInteractionInfo *this,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r9

  v2 = *((_QWORD *)this + 3);
  if ( v2 && (v3 = *((_QWORD *)this + 4), v3 > v2) )
    return (v3 - v2) / (a2 / 0xF4240);
  else
    return 0LL;
}
