/*
 * XREFs of ?SetStyle@CInkProxy@DirectComposition@@UEAAJPEBUD2D1_INK_STYLE_PROPERTIES@@@Z @ 0x1800F61C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInkProxy::SetStyle(
        DirectComposition::CInkProxy *this,
        const struct D2D1_INK_STYLE_PROPERTIES *a2)
{
  return DirectComposition::CResourceProxy::SetBufferProperty(
           (DirectComposition::CInkProxy *)((char *)this + 8),
           1,
           a2,
           0x1CuLL);
}
