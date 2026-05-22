/*
 * XREFs of ?SetFlags@CHolographicInteropTextureProxy@DirectComposition@@UEAAJI@Z @ 0x1800E7A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHolographicInteropTextureProxy::SetFlags(
        DirectComposition::CHolographicInteropTextureProxy *this,
        unsigned int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CHolographicInteropTextureProxy *)((char *)this + 8),
           0,
           a2);
}
