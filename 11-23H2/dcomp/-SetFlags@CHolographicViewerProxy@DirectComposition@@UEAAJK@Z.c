/*
 * XREFs of ?SetFlags@CHolographicViewerProxy@DirectComposition@@UEAAJK@Z @ 0x1800E8380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHolographicViewerProxy::SetFlags(
        DirectComposition::CHolographicViewerProxy *this,
        unsigned int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CHolographicViewerProxy *)((char *)this + 8),
           7,
           a2);
}
