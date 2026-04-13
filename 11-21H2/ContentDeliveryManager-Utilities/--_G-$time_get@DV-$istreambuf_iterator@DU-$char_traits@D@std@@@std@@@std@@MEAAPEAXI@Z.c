/*
 * XREFs of ??_G?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEAAPEAXI@Z @ 0x18001C760
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z_0 @ 0x180021DD4 (--_V@YAXPEAX@Z_0.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180022171 (--3@YAXPEAX@Z_0.c)
 */

void **__fastcall std::time_get<char,std::istreambuf_iterator<char>>::`scalar deleting destructor'(void **a1, char a2)
{
  *a1 = &std::time_get<char,std::istreambuf_iterator<char>>::`vftable';
  operator delete[](a1[2]);
  operator delete[](a1[3]);
  operator delete[](a1[4]);
  *a1 = &std::_Facet_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
