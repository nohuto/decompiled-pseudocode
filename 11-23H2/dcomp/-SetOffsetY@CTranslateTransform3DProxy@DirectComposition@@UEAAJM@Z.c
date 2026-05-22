/*
 * XREFs of ?SetOffsetY@CTranslateTransform3DProxy@DirectComposition@@UEAAJM@Z @ 0x1800F5B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTranslateTransform3DProxy::SetOffsetY(
        DirectComposition::CTranslateTransform3DProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CTranslateTransform3DProxy *)((char *)this + 8),
           1,
           a2);
}
