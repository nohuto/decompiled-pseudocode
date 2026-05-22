/*
 * XREFs of ?AddRef@CCompositionSurface@DirectComposition@@UEAAKXZ @ 0x18008EA80
 * Callers:
 *     ?AddRef@CCompositionSurface@DirectComposition@@W7EAAKXZ @ 0x1800A8250 (-AddRef@CCompositionSurface@DirectComposition@@W7EAAKXZ.c)
 *     ?AddRef@CCompositionSurface@DirectComposition@@WBA@EAAKXZ @ 0x1800A8270 (-AddRef@CCompositionSurface@DirectComposition@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionSurface::AddRef(DirectComposition::CCompositionSurface *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
