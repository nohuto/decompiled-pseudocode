/*
 * XREFs of ?AddRef@CAnimationFrameStats@@WKA@EAAKXZ @ 0x1800B1620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationFrameStats::AddRef(__int64 a1)
{
  return CTouchFrameStats::AddRef((CTouchFrameStats *)(a1 - 160));
}
