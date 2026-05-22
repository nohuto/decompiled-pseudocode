/*
 * XREFs of ?SetValue@CScalarProxy@DirectComposition@@UEAAJM@Z @ 0x1800F65F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CScalarProxy::SetValue(DirectComposition::CScalarProxy *this, float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CScalarProxy *)((char *)this + 8),
           0,
           a2);
}
