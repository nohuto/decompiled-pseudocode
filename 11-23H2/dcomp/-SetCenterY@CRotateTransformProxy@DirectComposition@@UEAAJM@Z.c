/*
 * XREFs of ?SetCenterY@CRotateTransformProxy@DirectComposition@@UEAAJM@Z @ 0x1800F4E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRotateTransformProxy::SetCenterY(
        DirectComposition::CRotateTransformProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CRotateTransformProxy *)((char *)this + 8),
           2,
           a2);
}
