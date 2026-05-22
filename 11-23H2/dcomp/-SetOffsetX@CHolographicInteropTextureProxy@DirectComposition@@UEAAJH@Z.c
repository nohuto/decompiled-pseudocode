/*
 * XREFs of ?SetOffsetX@CHolographicInteropTextureProxy@DirectComposition@@UEAAJH@Z @ 0x1800E7A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHolographicInteropTextureProxy::SetOffsetX(
        DirectComposition::CHolographicInteropTextureProxy *this,
        int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CHolographicInteropTextureProxy *)((char *)this + 8),
           3,
           a2);
}
