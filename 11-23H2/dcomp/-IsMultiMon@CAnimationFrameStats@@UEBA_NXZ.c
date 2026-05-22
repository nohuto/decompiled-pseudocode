/*
 * XREFs of ?IsMultiMon@CAnimationFrameStats@@UEBA_NXZ @ 0x1801A40A0
 * Callers:
 *     ?IsMultiMon@CAnimationFrameStats@@WKA@EBA_NXZ @ 0x1800B16A0 (-IsMultiMon@CAnimationFrameStats@@WKA@EBA_NXZ.c)
 *     ?IsMultiMon@CInteractionFrameStats@@WBGA@EBA_NXZ @ 0x1800B19C0 (-IsMultiMon@CInteractionFrameStats@@WBGA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
bool __fastcall CAnimationFrameStats::IsMultiMon(CAnimationFrameStats *this)
{
  return CCompFrameStats::IsMultiMon(this);
}
