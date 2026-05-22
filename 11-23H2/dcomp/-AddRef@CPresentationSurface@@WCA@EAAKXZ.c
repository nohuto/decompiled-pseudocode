/*
 * XREFs of ?AddRef@CPresentationSurface@@WCA@EAAKXZ @ 0x1800B1D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPresentationSurface::AddRef(__int64 a1)
{
  return CMILCOMBaseT<IPresentationBuffer>::AddRef(a1 - 32);
}
