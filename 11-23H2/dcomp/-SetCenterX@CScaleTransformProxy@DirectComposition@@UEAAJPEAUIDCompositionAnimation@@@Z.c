/*
 * XREFs of ?SetCenterX@CScaleTransformProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F4D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CScaleTransformProxy::SetCenterX(
        DirectComposition::CScaleTransformProxy *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CScaleTransformProxy *)((char *)this + 8),
           2u,
           a2);
}
