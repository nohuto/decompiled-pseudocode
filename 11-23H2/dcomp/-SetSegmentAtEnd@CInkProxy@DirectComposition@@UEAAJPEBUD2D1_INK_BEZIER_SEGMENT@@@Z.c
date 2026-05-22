/*
 * XREFs of ?SetSegmentAtEnd@CInkProxy@DirectComposition@@UEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@@Z @ 0x1800F6070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInkProxy::SetSegmentAtEnd(
        DirectComposition::CInkProxy *this,
        const struct D2D1_INK_BEZIER_SEGMENT *a2)
{
  return DirectComposition::CResourceProxy::SetBufferProperty(
           (DirectComposition::CInkProxy *)((char *)this + 8),
           5,
           a2,
           0x24uLL);
}
