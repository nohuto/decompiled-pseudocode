/*
 * XREFs of ?AppDeliveryUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z @ 0x1801A6C3C
 * Callers:
 *     ?CalcAverageAppDeliveryLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A6E54 (-CalcAverageAppDeliveryLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?SendTelemetry@CTouchFrameStats@@MEAAXXZ @ 0x1801A8B60 (-SendTelemetry@CTouchFrameStats@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CTouchFrameStats::CInteractionInfo::AppDeliveryUs(
        CTouchFrameStats::CInteractionInfo *this,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *((_QWORD *)this + 9);
  if ( v2 && v2 > *((_QWORD *)this + 8) )
    return (v2 - *((_QWORD *)this + 8)) / (a2 / 0xF4240);
  else
    return 0LL;
}
