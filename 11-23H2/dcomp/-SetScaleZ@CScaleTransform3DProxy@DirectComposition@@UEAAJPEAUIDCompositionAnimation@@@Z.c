/*
 * XREFs of ?SetScaleZ@CScaleTransform3DProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F6030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CScaleTransform3DProxy::SetScaleZ(
        DirectComposition::CScaleTransform3DProxy *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CScaleTransform3DProxy *)((char *)this + 8),
           2u,
           a2);
}
