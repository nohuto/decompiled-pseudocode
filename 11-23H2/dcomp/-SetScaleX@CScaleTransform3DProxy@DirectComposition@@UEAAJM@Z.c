/*
 * XREFs of ?SetScaleX@CScaleTransform3DProxy@DirectComposition@@UEAAJM@Z @ 0x1800F5F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CScaleTransform3DProxy::SetScaleX(
        DirectComposition::CScaleTransform3DProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CScaleTransform3DProxy *)((char *)this + 8),
           0,
           a2);
}
