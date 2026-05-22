/*
 * XREFs of ?StopCollection@CAnimationFrameStats@@UEAAX_K@Z @ 0x1800064D0
 * Callers:
 *     ?StopCollection@CAnimationFrameStats@@WKA@EAAX_K@Z @ 0x1800B1780 (-StopCollection@CAnimationFrameStats@@WKA@EAAX_K@Z.c)
 *     ?StopCollection@CInteractionFrameStats@@WBGA@EAAX_K@Z @ 0x1800B1B00 (-StopCollection@CInteractionFrameStats@@WBGA@EAAX_K@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CAnimationFrameStats::StopCollection(CAnimationFrameStats *this, unsigned __int64 a2)
{
  CCompFrameStats::StopCollection(this, a2);
}
