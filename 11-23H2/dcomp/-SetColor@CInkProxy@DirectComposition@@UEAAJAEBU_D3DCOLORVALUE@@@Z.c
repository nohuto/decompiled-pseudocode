/*
 * XREFs of ?SetColor@CInkProxy@DirectComposition@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1800F5180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInkProxy::SetColor(
        DirectComposition::CInkProxy *this,
        const struct _D3DCOLORVALUE *a2)
{
  return DirectComposition::CResourceProxy::SetBufferProperty(
           (DirectComposition::CInkProxy *)((char *)this + 8),
           0,
           a2,
           0x10uLL);
}
