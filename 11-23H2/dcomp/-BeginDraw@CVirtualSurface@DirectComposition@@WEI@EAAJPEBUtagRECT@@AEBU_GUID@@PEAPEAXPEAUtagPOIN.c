/*
 * XREFs of ?BeginDraw@CVirtualSurface@DirectComposition@@WEI@EAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@@Z @ 0x1800A9250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DirectComposition::CVirtualSurface::BeginDraw(
        __int64 a1,
        const struct tagRECT *a2,
        const struct _GUID *a3,
        void **a4,
        struct tagPOINT *a5)
{
  return DirectComposition::CVirtualSurface::BeginDraw((DirectComposition::CVirtualSurface *)(a1 - 72), a2, a3, a4, a5);
}
