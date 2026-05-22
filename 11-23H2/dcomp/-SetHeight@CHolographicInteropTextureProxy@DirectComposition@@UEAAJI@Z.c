/*
 * XREFs of ?SetHeight@CHolographicInteropTextureProxy@DirectComposition@@UEAAJI@Z @ 0x1800E7A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHolographicInteropTextureProxy::SetHeight(
        DirectComposition::CHolographicInteropTextureProxy *this,
        unsigned int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CHolographicInteropTextureProxy *)((char *)this + 8),
           2,
           a2);
}
