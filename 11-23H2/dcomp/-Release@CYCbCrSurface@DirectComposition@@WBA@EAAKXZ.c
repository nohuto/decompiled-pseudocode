/*
 * XREFs of ?Release@CYCbCrSurface@DirectComposition@@WBA@EAAKXZ @ 0x1800A9430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall DirectComposition::CYCbCrSurface::Release(__int64 a1)
{
  return CPresentationFactory::Release((CPresentationFactory *)(a1 - 16));
}
