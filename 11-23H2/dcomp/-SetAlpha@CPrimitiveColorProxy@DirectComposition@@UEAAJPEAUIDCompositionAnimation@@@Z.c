/*
 * XREFs of ?SetAlpha@CPrimitiveColorProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F43C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPrimitiveColorProxy::SetAlpha(
        DirectComposition::CPrimitiveColorProxy *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CPrimitiveColorProxy *)((char *)this + 8),
           4u,
           a2);
}
