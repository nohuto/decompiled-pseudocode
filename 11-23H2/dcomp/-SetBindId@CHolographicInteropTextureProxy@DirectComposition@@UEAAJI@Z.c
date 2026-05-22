/*
 * XREFs of ?SetBindId@CHolographicInteropTextureProxy@DirectComposition@@UEAAJI@Z @ 0x1800E7A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHolographicInteropTextureProxy::SetBindId(
        DirectComposition::CHolographicInteropTextureProxy *this,
        unsigned int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CHolographicInteropTextureProxy *)((char *)this + 8),
           5,
           a2);
}
