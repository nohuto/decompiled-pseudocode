/*
 * XREFs of ?SetAxisY@CRotateTransform3DProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F4760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRotateTransform3DProxy::SetAxisY(
        DirectComposition::CRotateTransform3DProxy *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CRotateTransform3DProxy *)((char *)this + 8),
           2u,
           a2);
}
