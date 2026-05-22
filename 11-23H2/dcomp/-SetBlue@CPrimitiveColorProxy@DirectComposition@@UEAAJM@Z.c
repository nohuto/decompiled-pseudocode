/*
 * XREFs of ?SetBlue@CPrimitiveColorProxy@DirectComposition@@UEAAJM@Z @ 0x1800F4950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPrimitiveColorProxy::SetBlue(
        DirectComposition::CPrimitiveColorProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CPrimitiveColorProxy *)((char *)this + 8),
           3,
           a2);
}
