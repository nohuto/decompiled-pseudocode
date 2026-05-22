/*
 * XREFs of ?QueryInterface@CYCbCrSurface@DirectComposition@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A9410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CYCbCrSurface::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CPresentationFactory::QueryInterface((CPresentationFactory *)(a1 - 16), a2, a3);
}
