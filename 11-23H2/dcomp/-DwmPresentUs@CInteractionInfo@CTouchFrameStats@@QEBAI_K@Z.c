/*
 * XREFs of ?DwmPresentUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z @ 0x1801A8488
 * Callers:
 *     ?SendTelemetry@CInteractionFrameStats@@MEAAXXZ @ 0x1801A59E0 (-SendTelemetry@CInteractionFrameStats@@MEAAXXZ.c)
 *     ?CalcAverageDwmPresentLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A7270 (-CalcAverageDwmPresentLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?SendTelemetry@CTouchFrameStats@@MEAAXXZ @ 0x1801A8B60 (-SendTelemetry@CTouchFrameStats@@MEAAXXZ.c)
 * Callees:
 *     ?Presented@CInteractionInfo@CTouchFrameStats@@QEBA_NXZ @ 0x1801A88F0 (-Presented@CInteractionInfo@CTouchFrameStats@@QEBA_NXZ.c)
 */

unsigned __int64 __fastcall CTouchFrameStats::CInteractionInfo::DwmPresentUs(CTouchFrameStats::CInteractionInfo *this)
{
  __int64 *v1; // rcx
  unsigned __int64 v2; // r9
  __int64 v3; // rcx
  unsigned __int64 v4; // r8

  if ( CTouchFrameStats::CInteractionInfo::Presented(this)
    && (v3 = *v1, v4 = *(_QWORD *)(v3 + 104), v4 > *(_QWORD *)(v3 + 48)) )
  {
    return (v4 - *(_QWORD *)(v3 + 48)) / (v2 / 0xF4240);
  }
  else
  {
    return 0LL;
  }
}
