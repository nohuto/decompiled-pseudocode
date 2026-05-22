/*
 * XREFs of ?SetAngleY@CSkewTransformProxy@DirectComposition@@UEAAJM@Z @ 0x1800F46C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSkewTransformProxy::SetAngleY(
        DirectComposition::CSkewTransformProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CSkewTransformProxy *)((char *)this + 8),
           1,
           a2);
}
