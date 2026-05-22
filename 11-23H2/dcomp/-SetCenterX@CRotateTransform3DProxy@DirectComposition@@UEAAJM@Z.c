/*
 * XREFs of ?SetCenterX@CRotateTransform3DProxy@DirectComposition@@UEAAJM@Z @ 0x1800F4CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRotateTransform3DProxy::SetCenterX(
        DirectComposition::CRotateTransform3DProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CRotateTransform3DProxy *)((char *)this + 8),
           4,
           a2);
}
