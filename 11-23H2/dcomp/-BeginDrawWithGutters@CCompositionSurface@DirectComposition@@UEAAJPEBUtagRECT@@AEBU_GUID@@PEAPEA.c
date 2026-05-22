/*
 * XREFs of ?BeginDrawWithGutters@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x18002E950
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginDrawHelper@CCompositionSurface@DirectComposition@@QEAAJPEBUtagRECT@@AEBU_GUID@@_NPEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x18002E990 (-BeginDrawHelper@CCompositionSurface@DirectComposition@@QEAAJPEBUtagRECT@@AEBU_GUID@@_NPEAPEAXPE.c)
 */

int __fastcall DirectComposition::CCompositionSurface::BeginDrawWithGutters(
        DirectComposition::CCompositionSurface *this,
        const struct tagRECT *a2,
        const struct _GUID *a3,
        void **a4,
        struct tagPOINT *a5,
        struct DCOMPOSITION_GUTTERS *a6)
{
  return DirectComposition::CCompositionSurface::BeginDrawHelper(this, a2, a3, 0, a4, a5, a6);
}
