/*
 * XREFs of ?QueryInterface@CCompositionSurface@DirectComposition@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A8290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionSurface::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        DirectComposition::CCompositionSurface **a3)
{
  return DirectComposition::CCompositionSurface::QueryInterface(
           (DirectComposition::CCompositionSurface *)(a1 - 8),
           a2,
           a3);
}
