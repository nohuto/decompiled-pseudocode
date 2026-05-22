/*
 * XREFs of ?SetScaleY@CScaleTransformProxy@DirectComposition@@UEAAJM@Z @ 0x18000C2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CScaleTransformProxy::SetScaleY(
        DirectComposition::CScaleTransformProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CScaleTransformProxy *)((char *)this + 8),
           1u,
           a2);
}
