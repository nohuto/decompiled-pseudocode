/*
 * XREFs of ?SetStartPoint@CInkProxy@DirectComposition@@UEAAJPEBUD2D1_INK_POINT@@@Z @ 0x1800F6180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInkProxy::SetStartPoint(
        DirectComposition::CInkProxy *this,
        const struct D2D1_INK_POINT *a2)
{
  return DirectComposition::CResourceProxy::SetBufferProperty(
           (DirectComposition::CInkProxy *)((char *)this + 8),
           2,
           a2,
           0xCuLL);
}
