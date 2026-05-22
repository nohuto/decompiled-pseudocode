/*
 * XREFs of ?SetGreen@CPrimitiveColorProxy@DirectComposition@@UEAAJM@Z @ 0x1800F52D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPrimitiveColorProxy::SetGreen(
        DirectComposition::CPrimitiveColorProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CPrimitiveColorProxy *)((char *)this + 8),
           2,
           a2);
}
