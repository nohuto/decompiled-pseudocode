/*
 * XREFs of ?SetRed@CPrimitiveColorProxy@DirectComposition@@UEAAJM@Z @ 0x1800F5C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPrimitiveColorProxy::SetRed(
        DirectComposition::CPrimitiveColorProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CPrimitiveColorProxy *)((char *)this + 8),
           1,
           a2);
}
