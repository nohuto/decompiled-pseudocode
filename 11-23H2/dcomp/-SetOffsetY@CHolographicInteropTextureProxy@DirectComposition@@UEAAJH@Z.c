/*
 * XREFs of ?SetOffsetY@CHolographicInteropTextureProxy@DirectComposition@@UEAAJH@Z @ 0x1800E7A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHolographicInteropTextureProxy::SetOffsetY(
        DirectComposition::CHolographicInteropTextureProxy *this,
        int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CHolographicInteropTextureProxy *)((char *)this + 8),
           4,
           a2);
}
