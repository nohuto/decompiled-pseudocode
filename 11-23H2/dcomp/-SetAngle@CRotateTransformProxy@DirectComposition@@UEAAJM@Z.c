/*
 * XREFs of ?SetAngle@CRotateTransformProxy@DirectComposition@@UEAAJM@Z @ 0x1800F4640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRotateTransformProxy::SetAngle(
        DirectComposition::CRotateTransformProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CRotateTransformProxy *)((char *)this + 8),
           0,
           a2);
}
