/*
 * XREFs of ?EndFrameId@CTouchFrameStats@@WKA@EBA_KXZ @ 0x1800B1660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CTouchFrameStats::EndFrameId(__int64 a1)
{
  return CInteractionFrameStats::EndFrameId((CInteractionFrameStats *)(a1 - 160));
}
