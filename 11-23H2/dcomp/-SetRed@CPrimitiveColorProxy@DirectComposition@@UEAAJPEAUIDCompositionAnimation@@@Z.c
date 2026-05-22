/*
 * XREFs of ?SetRed@CPrimitiveColorProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F5C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPrimitiveColorProxy::SetRed(
        DirectComposition::CPrimitiveColorProxy *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CPrimitiveColorProxy *)((char *)this + 8),
           1u,
           a2);
}
