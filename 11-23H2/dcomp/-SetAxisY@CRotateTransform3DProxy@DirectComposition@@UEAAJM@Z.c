/*
 * XREFs of ?SetAxisY@CRotateTransform3DProxy@DirectComposition@@UEAAJM@Z @ 0x1800F4740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRotateTransform3DProxy::SetAxisY(
        DirectComposition::CRotateTransform3DProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CRotateTransform3DProxy *)((char *)this + 8),
           2,
           a2);
}
