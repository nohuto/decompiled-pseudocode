/*
 * XREFs of ?SetBlue@CPrimitiveColorProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F4970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPrimitiveColorProxy::SetBlue(
        DirectComposition::CPrimitiveColorProxy *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CPrimitiveColorProxy *)((char *)this + 8),
           3u,
           a2);
}
