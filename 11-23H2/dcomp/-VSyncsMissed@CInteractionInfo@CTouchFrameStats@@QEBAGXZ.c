/*
 * XREFs of ?VSyncsMissed@CInteractionInfo@CTouchFrameStats@@QEBAGXZ @ 0x1801A954C
 * Callers:
 *     ?SendTelemetry@CInteractionFrameStats@@MEAAXXZ @ 0x1801A59E0 (-SendTelemetry@CInteractionFrameStats@@MEAAXXZ.c)
 *     ?CalcAverageVSyncsMissed@CTouchFrameStats@@IEBAMXZ @ 0x1801A7EF0 (-CalcAverageVSyncsMissed@CTouchFrameStats@@IEBAMXZ.c)
 *     ?CalcMaxVSyncsMissed@CTouchFrameStats@@IEBAIXZ @ 0x1801A82B8 (-CalcMaxVSyncsMissed@CTouchFrameStats@@IEBAIXZ.c)
 *     ?SendTelemetry@CTouchFrameStats@@MEAAXXZ @ 0x1801A8B60 (-SendTelemetry@CTouchFrameStats@@MEAAXXZ.c)
 * Callees:
 *     ?Presented@CInteractionInfo@CTouchFrameStats@@QEBA_NXZ @ 0x1801A88F0 (-Presented@CInteractionInfo@CTouchFrameStats@@QEBA_NXZ.c)
 */

unsigned __int64 __fastcall CTouchFrameStats::CInteractionInfo::VSyncsMissed(CTouchFrameStats::CInteractionInfo *this)
{
  _QWORD *v1; // rcx
  _QWORD *v2; // rcx
  unsigned __int64 v3; // rdx

  if ( CTouchFrameStats::CInteractionInfo::Presented(this) && (v2 = (_QWORD *)*v1, v3 = v2[10], v2[13] >= v3) )
    return (v2[13] + (v2[7] >> 1) - v3) / v2[7];
  else
    return 0LL;
}
