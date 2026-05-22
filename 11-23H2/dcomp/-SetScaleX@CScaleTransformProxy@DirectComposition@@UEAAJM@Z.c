/*
 * XREFs of ?SetScaleX@CScaleTransformProxy@DirectComposition@@UEAAJM@Z @ 0x18000C2C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CScaleTransformProxy::SetScaleX(
        DirectComposition::CScaleTransformProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CScaleTransformProxy *)((char *)this + 8),
           0,
           a2);
}
