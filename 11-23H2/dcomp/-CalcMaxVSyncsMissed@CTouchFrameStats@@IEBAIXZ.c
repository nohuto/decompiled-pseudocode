/*
 * XREFs of ?CalcMaxVSyncsMissed@CTouchFrameStats@@IEBAIXZ @ 0x1801A82B8
 * Callers:
 *     ?SendTelemetry@CInteractionFrameStats@@MEAAXXZ @ 0x1801A59E0 (-SendTelemetry@CInteractionFrameStats@@MEAAXXZ.c)
 *     ?SendTelemetry@CTouchFrameStats@@MEAAXXZ @ 0x1801A8B60 (-SendTelemetry@CTouchFrameStats@@MEAAXXZ.c)
 * Callees:
 *     ?VSyncsMissed@CInteractionInfo@CTouchFrameStats@@QEBAGXZ @ 0x1801A954C (-VSyncsMissed@CInteractionInfo@CTouchFrameStats@@QEBAGXZ.c)
 */

__int64 __fastcall CTouchFrameStats::CalcMaxVSyncsMissed(CTouchFrameStats *this)
{
  CTouchFrameStats::CInteractionInfo *v1; // rbx
  unsigned int v2; // r10d
  CTouchFrameStats::CInteractionInfo *v3; // r11
  unsigned int v4; // r9d
  unsigned int v5; // r10d
  __int64 v6; // r11

  v1 = (CTouchFrameStats::CInteractionInfo *)*((_QWORD *)this + 31);
  v2 = 0;
  v3 = (CTouchFrameStats::CInteractionInfo *)*((_QWORD *)this + 30);
  while ( v3 != v1 )
  {
    v4 = CTouchFrameStats::CInteractionInfo::VSyncsMissed(v3);
    if ( v5 > v4 )
      v4 = v5;
    v3 = (CTouchFrameStats::CInteractionInfo *)(v6 + 224);
    v2 = v4;
  }
  return v2;
}
