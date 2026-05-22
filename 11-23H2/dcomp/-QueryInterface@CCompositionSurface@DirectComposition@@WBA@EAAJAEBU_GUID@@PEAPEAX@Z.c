/*
 * XREFs of ?QueryInterface@CCompositionSurface@DirectComposition@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A82B0
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
           (DirectComposition::CCompositionSurface *)(a1 - 16),
           a2,
           a3);
}
