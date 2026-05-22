/*
 * XREFs of ?CalcRenderGlitches@CTouchFrameStats@@IEBAIXZ @ 0x1801A8304
 * Callers:
 *     ?SendTelemetry@CInteractionFrameStats@@MEAAXXZ @ 0x1801A59E0 (-SendTelemetry@CInteractionFrameStats@@MEAAXXZ.c)
 *     ?SendTelemetry@CTouchFrameStats@@MEAAXXZ @ 0x1801A8B60 (-SendTelemetry@CTouchFrameStats@@MEAAXXZ.c)
 * Callees:
 *     ?RenderGlitch@CInteractionInfo@CTouchFrameStats@@QEBA_NXZ @ 0x1801A8998 (-RenderGlitch@CInteractionInfo@CTouchFrameStats@@QEBA_NXZ.c)
 */

__int64 __fastcall CTouchFrameStats::CalcRenderGlitches(CTouchFrameStats *this)
{
  CTouchFrameStats::CInteractionInfo *v1; // r10
  unsigned int v2; // r8d
  CTouchFrameStats::CInteractionInfo *v3; // r9
  bool v4; // al
  unsigned int v5; // r8d
  __int64 v6; // r9
  unsigned int v7; // ecx

  v1 = (CTouchFrameStats::CInteractionInfo *)*((_QWORD *)this + 31);
  v2 = 0;
  v3 = (CTouchFrameStats::CInteractionInfo *)*((_QWORD *)this + 30);
  while ( v3 != v1 )
  {
    v4 = CTouchFrameStats::CInteractionInfo::RenderGlitch(v3);
    v7 = v5 + 1;
    if ( !v4 )
      v7 = v5;
    v3 = (CTouchFrameStats::CInteractionInfo *)(v6 + 224);
    v2 = v7;
  }
  return v2;
}
