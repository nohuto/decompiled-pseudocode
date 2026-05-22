/*
 * XREFs of ?SetOffsetX@CTranslateTransformProxy@DirectComposition@@UEAAJM@Z @ 0x1800F5AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTranslateTransformProxy::SetOffsetX(
        DirectComposition::CTranslateTransformProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CTranslateTransformProxy *)((char *)this + 8),
           0,
           a2);
}
