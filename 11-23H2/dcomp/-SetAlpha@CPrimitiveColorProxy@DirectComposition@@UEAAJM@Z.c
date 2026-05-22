/*
 * XREFs of ?SetAlpha@CPrimitiveColorProxy@DirectComposition@@UEAAJM@Z @ 0x1800F43A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPrimitiveColorProxy::SetAlpha(
        DirectComposition::CPrimitiveColorProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CPrimitiveColorProxy *)((char *)this + 8),
           4,
           a2);
}
