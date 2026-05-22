/*
 * XREFs of ?Presented@CInteractionInfo@CTouchFrameStats@@QEBA_NXZ @ 0x1801A88F0
 * Callers:
 *     ?CalcAverageDwmPresentLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A7270 (-CalcAverageDwmPresentLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?CalcAverageDwmRenderLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A73E0 (-CalcAverageDwmRenderLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?CalcAverageVSyncsMissed@CTouchFrameStats@@IEBAMXZ @ 0x1801A7EF0 (-CalcAverageVSyncsMissed@CTouchFrameStats@@IEBAMXZ.c)
 *     ?DwmPresentUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z @ 0x1801A8488 (-DwmPresentUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z.c)
 *     ?DwmRenderUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z @ 0x1801A84D8 (-DwmRenderUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z.c)
 *     ?VSyncsMissed@CInteractionInfo@CTouchFrameStats@@QEBAGXZ @ 0x1801A954C (-VSyncsMissed@CInteractionInfo@CTouchFrameStats@@QEBAGXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTouchFrameStats::CInteractionInfo::Presented(CTouchFrameStats::CInteractionInfo *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *(_QWORD *)this;
  result = 0;
  if ( *(_QWORD *)(*(_QWORD *)this + 8LL) )
  {
    if ( *(_QWORD *)(v1 + 16) )
      return *(_QWORD *)(v1 + 48) != 0LL;
  }
  return result;
}
