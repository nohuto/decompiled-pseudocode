/*
 * XREFs of ?AddRef@CVirtualSurface@DirectComposition@@WBA@EAAKXZ @ 0x1800A91D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVirtualSurface::AddRef(__int64 a1)
{
  return CMILCOMBaseT<IPresentationBuffer>::AddRef(a1 - 16);
}
