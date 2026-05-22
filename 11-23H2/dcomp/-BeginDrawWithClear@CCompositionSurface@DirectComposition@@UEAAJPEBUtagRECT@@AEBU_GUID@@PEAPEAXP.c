/*
 * XREFs of ?BeginDrawWithClear@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@@Z @ 0x1800EB2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginDrawHelper@CCompositionSurface@DirectComposition@@QEAAJPEBUtagRECT@@AEBU_GUID@@_NPEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x18002E990 (-BeginDrawHelper@CCompositionSurface@DirectComposition@@QEAAJPEBUtagRECT@@AEBU_GUID@@_NPEAPEAXPE.c)
 */

__int64 __fastcall DirectComposition::CCompositionSurface::BeginDrawWithClear(
        DirectComposition::CCompositionSurface *this,
        struct tagRECT *a2,
        struct _GUID *a3,
        void **a4,
        struct tagPOINT *a5)
{
  return DirectComposition::CCompositionSurface::BeginDrawHelper(this, a2, a3, 1, a4, a5, 0LL);
}
