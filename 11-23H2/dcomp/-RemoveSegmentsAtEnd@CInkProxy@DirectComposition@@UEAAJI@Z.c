/*
 * XREFs of ?RemoveSegmentsAtEnd@CInkProxy@DirectComposition@@UEAAJI@Z @ 0x1800F4090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInkProxy::RemoveSegmentsAtEnd(
        DirectComposition::CInkProxy *this,
        unsigned int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CInkProxy *)((char *)this + 8),
           4,
           a2);
}
