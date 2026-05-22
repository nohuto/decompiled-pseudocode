/*
 * XREFs of ?SetOffsetX@CTranslateTransform3DProxy@DirectComposition@@UEAAJM@Z @ 0x1800F5A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTranslateTransform3DProxy::SetOffsetX(
        DirectComposition::CTranslateTransform3DProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CTranslateTransform3DProxy *)((char *)this + 8),
           0,
           a2);
}
