/*
 * XREFs of ?AddRef@CInteractionFrameStats@@WBGA@EAAKXZ @ 0x1800B1940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionFrameStats::AddRef(__int64 a1)
{
  return CTouchFrameStats::AddRef((CTouchFrameStats *)(a1 - 352));
}
