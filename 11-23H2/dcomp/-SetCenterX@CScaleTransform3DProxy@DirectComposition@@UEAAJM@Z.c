/*
 * XREFs of ?SetCenterX@CScaleTransform3DProxy@DirectComposition@@UEAAJM@Z @ 0x1800F4D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CScaleTransform3DProxy::SetCenterX(
        DirectComposition::CScaleTransform3DProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CScaleTransform3DProxy *)((char *)this + 8),
           3,
           a2);
}
