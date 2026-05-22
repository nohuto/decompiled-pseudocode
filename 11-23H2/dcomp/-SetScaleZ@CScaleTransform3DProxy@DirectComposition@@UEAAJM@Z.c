/*
 * XREFs of ?SetScaleZ@CScaleTransform3DProxy@DirectComposition@@UEAAJM@Z @ 0x1800F6010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CScaleTransform3DProxy::SetScaleZ(
        DirectComposition::CScaleTransform3DProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CScaleTransform3DProxy *)((char *)this + 8),
           2,
           a2);
}
