/*
 * XREFs of ?SetCenterZ@CScaleTransform3DProxy@DirectComposition@@UEAAJM@Z @ 0x1800F4F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CScaleTransform3DProxy::SetCenterZ(
        DirectComposition::CScaleTransform3DProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CScaleTransform3DProxy *)((char *)this + 8),
           5,
           a2);
}
