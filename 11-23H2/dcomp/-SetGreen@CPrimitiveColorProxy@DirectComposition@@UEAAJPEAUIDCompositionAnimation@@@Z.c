/*
 * XREFs of ?SetGreen@CPrimitiveColorProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F52F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPrimitiveColorProxy::SetGreen(
        DirectComposition::CPrimitiveColorProxy *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CPrimitiveColorProxy *)((char *)this + 8),
           2u,
           a2);
}
