/*
 * XREFs of ?SetMargins@CGdiSpriteBitmapProxy@DirectComposition@@UEAAJAEBU_MARGINS@@@Z @ 0x1800F57F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CGdiSpriteBitmapProxy::SetMargins(
        DirectComposition::CGdiSpriteBitmapProxy *this,
        const struct _MARGINS *a2)
{
  return DirectComposition::CResourceProxy::SetBufferProperty(
           (DirectComposition::CGdiSpriteBitmapProxy *)((char *)this + 8),
           4,
           a2,
           0x10uLL);
}
