/*
 * XREFs of ??_E?$_Mpunct@G@std@@MEAAPEAXI@Z @ 0x18000FCC0
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z_0 @ 0x180021DD4 (--_V@YAXPEAX@Z_0.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180022171 (--3@YAXPEAX@Z_0.c)
 */

void **__fastcall std::_Mpunct<unsigned short>::`vector deleting destructor'(void **a1, char a2)
{
  *a1 = &std::moneypunct<unsigned short,1>::`vftable';
  operator delete[](a1[2]);
  operator delete[](a1[4]);
  operator delete[](a1[5]);
  operator delete[](a1[6]);
  *a1 = &std::_Facet_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
