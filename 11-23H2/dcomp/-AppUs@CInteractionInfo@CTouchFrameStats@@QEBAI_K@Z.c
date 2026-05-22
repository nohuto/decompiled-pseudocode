/*
 * XREFs of ?AppUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z @ 0x1801A6CB8
 * Callers:
 *     ?SendTelemetry@CInteractionFrameStats@@MEAAXXZ @ 0x1801A59E0 (-SendTelemetry@CInteractionFrameStats@@MEAAXXZ.c)
 *     ?CalcAverageAppLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A7114 (-CalcAverageAppLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?SendTelemetry@CTouchFrameStats@@MEAAXXZ @ 0x1801A8B60 (-SendTelemetry@CTouchFrameStats@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CTouchFrameStats::CInteractionInfo::AppUs(
        CTouchFrameStats::CInteractionInfo *this,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rax

  v2 = *((_QWORD *)this + 21);
  v3 = *((_QWORD *)this + 20);
  if ( v2 <= v3 )
    return 0LL;
  else
    return (v2 - v3) / (a2 / 0xF4240);
}
