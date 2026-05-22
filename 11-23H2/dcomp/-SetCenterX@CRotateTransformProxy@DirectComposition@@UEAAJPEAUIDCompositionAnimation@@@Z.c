/*
 * XREFs of ?SetCenterX@CRotateTransformProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F4D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRotateTransformProxy::SetCenterX(
        DirectComposition::CRotateTransformProxy *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CRotateTransformProxy *)((char *)this + 8),
           1u,
           a2);
}
