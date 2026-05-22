/*
 * XREFs of ?DirtyRectangles@CGdiSpriteBitmapProxy@DirectComposition@@UEAAJPEBUtagRECT@@I@Z @ 0x1800F16E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CGdiSpriteBitmapProxy::DirtyRectangles(
        DirectComposition::CGdiSpriteBitmapProxy *this,
        const struct tagRECT *a2,
        unsigned int a3)
{
  unsigned __int64 v3; // rax

  v3 = 16LL * a3;
  if ( v3 > 0xFFFFFFFF )
    return 2147942934LL;
  else
    return DirectComposition::CResourceProxy::SetBufferProperty(
             (DirectComposition::CGdiSpriteBitmapProxy *)((char *)this + 8),
             0,
             a2,
             (unsigned int)v3);
}
