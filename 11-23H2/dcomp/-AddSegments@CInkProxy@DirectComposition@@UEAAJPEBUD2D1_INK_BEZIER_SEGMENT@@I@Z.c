/*
 * XREFs of ?AddSegments@CInkProxy@DirectComposition@@UEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@I@Z @ 0x1800ED9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInkProxy::AddSegments(
        DirectComposition::CInkProxy *this,
        const struct D2D1_INK_BEZIER_SEGMENT *a2,
        unsigned int a3)
{
  return DirectComposition::CResourceProxy::SetBufferProperty(
           (DirectComposition::CInkProxy *)((char *)this + 8),
           3,
           a2,
           36LL * a3);
}
