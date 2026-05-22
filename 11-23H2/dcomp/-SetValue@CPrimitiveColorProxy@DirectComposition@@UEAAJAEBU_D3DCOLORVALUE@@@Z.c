/*
 * XREFs of ?SetValue@CPrimitiveColorProxy@DirectComposition@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1800F65D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPrimitiveColorProxy::SetValue(
        DirectComposition::CPrimitiveColorProxy *this,
        const struct _D3DCOLORVALUE *a2)
{
  return DirectComposition::CResourceProxy::SetBufferProperty(
           (DirectComposition::CPrimitiveColorProxy *)((char *)this + 8),
           0,
           a2,
           0x10uLL);
}
