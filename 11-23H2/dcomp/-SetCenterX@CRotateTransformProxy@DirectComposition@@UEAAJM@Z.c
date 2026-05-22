/*
 * XREFs of ?SetCenterX@CRotateTransformProxy@DirectComposition@@UEAAJM@Z @ 0x1800F4D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRotateTransformProxy::SetCenterX(
        DirectComposition::CRotateTransformProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CRotateTransformProxy *)((char *)this + 8),
           1,
           a2);
}
