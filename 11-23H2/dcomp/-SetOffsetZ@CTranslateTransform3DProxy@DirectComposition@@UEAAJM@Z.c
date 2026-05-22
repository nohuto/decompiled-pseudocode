/*
 * XREFs of ?SetOffsetZ@CTranslateTransform3DProxy@DirectComposition@@UEAAJM@Z @ 0x1800F5BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTranslateTransform3DProxy::SetOffsetZ(
        DirectComposition::CTranslateTransform3DProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CTranslateTransform3DProxy *)((char *)this + 8),
           2,
           a2);
}
