/*
 * XREFs of ?SetCenterX@CSkewTransformProxy@DirectComposition@@UEAAJM@Z @ 0x1800F4DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSkewTransformProxy::SetCenterX(
        DirectComposition::CSkewTransformProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CSkewTransformProxy *)((char *)this + 8),
           2,
           a2);
}
