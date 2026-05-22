/*
 * XREFs of ?SetWidth@CHolographicInteropTextureProxy@DirectComposition@@UEAAJI@Z @ 0x1800E7AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHolographicInteropTextureProxy::SetWidth(
        DirectComposition::CHolographicInteropTextureProxy *this,
        unsigned int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CHolographicInteropTextureProxy *)((char *)this + 8),
           1,
           a2);
}
