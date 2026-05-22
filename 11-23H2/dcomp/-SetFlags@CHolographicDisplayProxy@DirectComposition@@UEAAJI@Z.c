/*
 * XREFs of ?SetFlags@CHolographicDisplayProxy@DirectComposition@@UEAAJI@Z @ 0x1800E7760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHolographicDisplayProxy::SetFlags(
        DirectComposition::CHolographicDisplayProxy *this,
        unsigned int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CHolographicDisplayProxy *)((char *)this + 8),
           1,
           a2);
}
