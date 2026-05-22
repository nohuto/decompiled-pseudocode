/*
 * XREFs of ?SetOffsetZ@CTranslateTransform3DProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F5BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTranslateTransform3DProxy::SetOffsetZ(
        DirectComposition::CTranslateTransform3DProxy *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CTranslateTransform3DProxy *)((char *)this + 8),
           2u,
           a2);
}
