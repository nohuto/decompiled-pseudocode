/*
 * XREFs of ?BeginDraw@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@@Z @ 0x180036F50
 * Callers:
 *     ?BeginDraw@CVirtualSurface@DirectComposition@@WEI@EAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@@Z @ 0x1800A9250 (-BeginDraw@CVirtualSurface@DirectComposition@@WEI@EAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOIN.c)
 * Callees:
 *     ?BeginDrawWithGutters@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x180036F80 (-BeginDrawWithGutters@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEA.c)
 */

int __fastcall DirectComposition::CVirtualSurface::BeginDraw(
        DirectComposition::CVirtualSurface *this,
        const struct tagRECT *a2,
        const struct _GUID *a3,
        void **a4,
        struct tagPOINT *a5)
{
  return DirectComposition::CVirtualSurface::BeginDrawWithGutters(
           (DirectComposition::CVirtualSurface *)((char *)this + 72),
           a2,
           a3,
           a4,
           a5,
           0LL);
}
