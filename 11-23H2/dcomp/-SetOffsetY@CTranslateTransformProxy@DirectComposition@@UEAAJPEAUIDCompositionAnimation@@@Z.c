/*
 * XREFs of ?SetOffsetY@CTranslateTransformProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F5B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTranslateTransformProxy::SetOffsetY(
        DirectComposition::CTranslateTransformProxy *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CTranslateTransformProxy *)((char *)this + 8),
           1u,
           a2);
}
