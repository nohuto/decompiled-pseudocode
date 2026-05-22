/*
 * XREFs of ?BeginDraw@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@@Z @ 0x18002E920
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginDrawHelper@CCompositionSurface@DirectComposition@@QEAAJPEBUtagRECT@@AEBU_GUID@@_NPEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x18002E990 (-BeginDrawHelper@CCompositionSurface@DirectComposition@@QEAAJPEBUtagRECT@@AEBU_GUID@@_NPEAPEAXPE.c)
 */

int __fastcall DirectComposition::CCompositionSurface::BeginDraw(
        DirectComposition::CCompositionSurface *this,
        const struct tagRECT *a2,
        const struct _GUID *a3,
        void **a4,
        struct tagPOINT *a5)
{
  return DirectComposition::CCompositionSurface::BeginDrawHelper(this, a2, a3, 0, a4, a5, 0LL);
}
