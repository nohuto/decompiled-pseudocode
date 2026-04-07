/*
 * XREFs of ?IsMultiMon@CAnimationFrameStats@@UEBA_NXZ @ 0x18010A940
 * Callers:
 *     ?IsMultiMon@CAnimationFrameStats@@WII@EBA_NXZ @ 0x180064420 (-IsMultiMon@CAnimationFrameStats@@WII@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
bool __fastcall CAnimationFrameStats::IsMultiMon(CAnimationFrameStats *this)
{
  return CCompFrameStats::IsMultiMon(this);
}
