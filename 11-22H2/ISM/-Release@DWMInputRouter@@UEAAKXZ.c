/*
 * XREFs of ?Release@DWMInputRouter@@UEAAKXZ @ 0x1801192C0
 * Callers:
 *     ?Release@DWMInputRouter@@W7EAAKXZ @ 0x18007DE30 (-Release@DWMInputRouter@@W7EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WBA@EAAKXZ @ 0x18007DE50 (-Release@DWMInputRouter@@WBA@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WBI@EAAKXZ @ 0x18007DE70 (-Release@DWMInputRouter@@WBI@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WCA@EAAKXZ @ 0x18007DE90 (-Release@DWMInputRouter@@WCA@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WCI@EAAKXZ @ 0x18007DEB0 (-Release@DWMInputRouter@@WCI@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WDA@EAAKXZ @ 0x18007DED0 (-Release@DWMInputRouter@@WDA@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WDI@EAAKXZ @ 0x18007DEF0 (-Release@DWMInputRouter@@WDI@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WEA@EAAKXZ @ 0x18007DF10 (-Release@DWMInputRouter@@WEA@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WEI@EAAKXZ @ 0x18007DF30 (-Release@DWMInputRouter@@WEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::Release(DWMInputRouter *this)
{
  return RefCountedObject::Release((DWMInputRouter *)((char *)this + 72));
}
