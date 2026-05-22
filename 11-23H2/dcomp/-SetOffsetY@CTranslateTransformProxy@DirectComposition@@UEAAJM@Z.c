/*
 * XREFs of ?SetOffsetY@CTranslateTransformProxy@DirectComposition@@UEAAJM@Z @ 0x1800F5B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTranslateTransformProxy::SetOffsetY(
        DirectComposition::CTranslateTransformProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CTranslateTransformProxy *)((char *)this + 8),
           1,
           a2);
}
