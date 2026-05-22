/*
 * XREFs of ?AddRef@DWMInputTarget@@UEAAKXZ @ 0x18002BD70
 * Callers:
 *     ?AddRef@DWMInputTarget@@W7EAAKXZ @ 0x180066690 (-AddRef@DWMInputTarget@@W7EAAKXZ.c)
 *     ?AddRef@DWMInputTarget@@WBA@EAAKXZ @ 0x1800666B0 (-AddRef@DWMInputTarget@@WBA@EAAKXZ.c)
 *     ?AddRef@DWMInputTarget@@WBI@EAAKXZ @ 0x1800666D0 (-AddRef@DWMInputTarget@@WBI@EAAKXZ.c)
 *     ?AddRef@DWMInputTarget@@WCA@EAAKXZ @ 0x1800666F0 (-AddRef@DWMInputTarget@@WCA@EAAKXZ.c)
 *     ?AddRef@DWMInputTarget@@WCI@EAAKXZ @ 0x180066710 (-AddRef@DWMInputTarget@@WCI@EAAKXZ.c)
 *     ?AddRef@DWMInputTarget@@WDA@EAAKXZ @ 0x180066730 (-AddRef@DWMInputTarget@@WDA@EAAKXZ.c)
 *     ?AddRef@DWMInputTarget@@WDI@EAAKXZ @ 0x180066750 (-AddRef@DWMInputTarget@@WDI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputTarget::AddRef(DWMInputTarget *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 16);
}
