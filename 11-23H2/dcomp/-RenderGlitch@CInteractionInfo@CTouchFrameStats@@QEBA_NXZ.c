/*
 * XREFs of ?RenderGlitch@CInteractionInfo@CTouchFrameStats@@QEBA_NXZ @ 0x1801A8998
 * Callers:
 *     ?SendTelemetry@CInteractionFrameStats@@MEAAXXZ @ 0x1801A59E0 (-SendTelemetry@CInteractionFrameStats@@MEAAXXZ.c)
 *     ?CalcRenderGlitches@CTouchFrameStats@@IEBAIXZ @ 0x1801A8304 (-CalcRenderGlitches@CTouchFrameStats@@IEBAIXZ.c)
 *     ?SendTelemetry@CTouchFrameStats@@MEAAXXZ @ 0x1801A8B60 (-SendTelemetry@CTouchFrameStats@@MEAAXXZ.c)
 * Callees:
 *     ?IsGPUGlitch@CCompFrameStats@@KA_NAEBUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x1801A884C (-IsGPUGlitch@CCompFrameStats@@KA_NAEBUtagCOMPOSITION_TARGET_STATS@@@Z.c)
 */

bool __fastcall CTouchFrameStats::CInteractionInfo::RenderGlitch(CTouchFrameStats::CInteractionInfo *this)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rcx

  v1 = *(_QWORD *)this;
  if ( !*(_QWORD *)(*(_QWORD *)this + 8LL) || !*(_QWORD *)(v1 + 16) )
    return 0;
  v2 = *(_QWORD *)(v1 + 48);
  return v2 && v2 > *(_QWORD *)(v1 + 16) && v2 - *(_QWORD *)(v1 + 16) >= *(_QWORD *)(v1 + 56)
      || CCompFrameStats::IsGPUGlitch((const struct tagCOMPOSITION_TARGET_STATS *)(v1 + 40));
}
