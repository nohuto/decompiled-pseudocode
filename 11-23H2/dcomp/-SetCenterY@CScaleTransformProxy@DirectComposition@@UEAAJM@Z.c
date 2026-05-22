/*
 * XREFs of ?SetCenterY@CScaleTransformProxy@DirectComposition@@UEAAJM@Z @ 0x18000CE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CScaleTransformProxy::SetCenterY(
        DirectComposition::CScaleTransformProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CScaleTransformProxy *)((char *)this + 8),
           3u,
           a2);
}
