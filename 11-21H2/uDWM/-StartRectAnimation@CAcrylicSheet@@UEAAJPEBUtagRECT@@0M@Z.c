/*
 * XREFs of ?StartRectAnimation@CAcrylicSheet@@UEAAJPEBUtagRECT@@0M@Z @ 0x18009B220
 * Callers:
 *     <none>
 * Callees:
 *     ?StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@@Z @ 0x18009B0A8 (-StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@@Z.c)
 */

__int64 __fastcall CAcrylicSheet::StartRectAnimation(
        CAcrylicSheet *this,
        struct tagRECT *a2,
        const struct tagRECT *a3,
        float a4)
{
  return CAcrylicSheet::StartRectAnimation((__int64)this - 296, a2, (__int128 *)&a3->left);
}
