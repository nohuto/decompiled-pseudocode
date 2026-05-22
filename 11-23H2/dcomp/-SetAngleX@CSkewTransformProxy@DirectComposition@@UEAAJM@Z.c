/*
 * XREFs of ?SetAngleX@CSkewTransformProxy@DirectComposition@@UEAAJM@Z @ 0x1800F4680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSkewTransformProxy::SetAngleX(
        DirectComposition::CSkewTransformProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CSkewTransformProxy *)((char *)this + 8),
           0,
           a2);
}
