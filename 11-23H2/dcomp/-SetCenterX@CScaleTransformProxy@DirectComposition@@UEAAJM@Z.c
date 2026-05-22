/*
 * XREFs of ?SetCenterX@CScaleTransformProxy@DirectComposition@@UEAAJM@Z @ 0x18000CE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CScaleTransformProxy::SetCenterX(
        DirectComposition::CScaleTransformProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CScaleTransformProxy *)((char *)this + 8),
           2u,
           a2);
}
