/*
 * XREFs of ?StartCollection@CTouchFrameStats@@UEAAX_K@Z @ 0x180009CC0
 * Callers:
 *     ?StartCollection@CTouchFrameStats@@WKA@EAAX_K@Z @ 0x1800B1740 (-StartCollection@CTouchFrameStats@@WKA@EAAX_K@Z.c)
 *     ?StartCollection@CInteractionFrameStats@@WBGA@EAAX_K@Z @ 0x1800B1AC0 (-StartCollection@CInteractionFrameStats@@WBGA@EAAX_K@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CTouchFrameStats::StartCollection(CTouchFrameStats *this, unsigned __int64 a2)
{
  CCompFrameStats::StartCollection(this, a2);
}
