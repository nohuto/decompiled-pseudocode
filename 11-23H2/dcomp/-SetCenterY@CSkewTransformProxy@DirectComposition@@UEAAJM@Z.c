/*
 * XREFs of ?SetCenterY@CSkewTransformProxy@DirectComposition@@UEAAJM@Z @ 0x1800F4EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSkewTransformProxy::SetCenterY(
        DirectComposition::CSkewTransformProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CSkewTransformProxy *)((char *)this + 8),
           3,
           a2);
}
