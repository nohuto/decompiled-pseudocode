/*
 * XREFs of ?SetCenterY@CRotateTransformProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F4E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRotateTransformProxy::SetCenterY(
        DirectComposition::CRotateTransformProxy *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CRotateTransformProxy *)((char *)this + 8),
           2u,
           a2);
}
