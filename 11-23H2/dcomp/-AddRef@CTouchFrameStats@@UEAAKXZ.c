/*
 * XREFs of ?AddRef@CTouchFrameStats@@UEAAKXZ @ 0x18008E880
 * Callers:
 *     ?AddRef@CAnimationFrameStats@@WKA@EAAKXZ @ 0x1800B1620 (-AddRef@CAnimationFrameStats@@WKA@EAAKXZ.c)
 *     ?AddRef@CInteractionFrameStats@@WBGA@EAAKXZ @ 0x1800B1940 (-AddRef@CInteractionFrameStats@@WBGA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTouchFrameStats::AddRef(CTouchFrameStats *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
