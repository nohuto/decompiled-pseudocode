/*
 * XREFs of ?Release@DWMInputRouter@@UEAAKXZ @ 0x1800F1A80
 * Callers:
 *     ?Release@DWMInputRouter@@W7EAAKXZ @ 0x180053100 (-Release@DWMInputRouter@@W7EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WBA@EAAKXZ @ 0x180053120 (-Release@DWMInputRouter@@WBA@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WBI@EAAKXZ @ 0x180053140 (-Release@DWMInputRouter@@WBI@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WCA@EAAKXZ @ 0x180053160 (-Release@DWMInputRouter@@WCA@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WCI@EAAKXZ @ 0x180053180 (-Release@DWMInputRouter@@WCI@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WDA@EAAKXZ @ 0x1800531A0 (-Release@DWMInputRouter@@WDA@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WDI@EAAKXZ @ 0x1800531C0 (-Release@DWMInputRouter@@WDI@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WEA@EAAKXZ @ 0x1800531E0 (-Release@DWMInputRouter@@WEA@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WEI@EAAKXZ @ 0x180053200 (-Release@DWMInputRouter@@WEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::Release(DWMInputRouter *this)
{
  return RefCountedObject::Release((DWMInputRouter *)((char *)this + 72));
}
