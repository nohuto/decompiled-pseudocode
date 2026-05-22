/*
 * XREFs of ?Scroll@CVirtualSurface@DirectComposition@@WEI@EAAJPEBUtagRECT@@0HH@Z @ 0x1800A93B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVirtualSurface::Scroll(
        __int64 a1,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        int a4,
        int a5)
{
  return DirectComposition::CVirtualSurface::Scroll((DirectComposition::CVirtualSurface *)(a1 - 72), a2, a3, a4, a5);
}
