/*
 * XREFs of ??_E?$basic_filebuf@DU?$char_traits@D@std@@@std@@UEAAPEAXI@Z @ 0x18064B4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$basic_filebuf@DU?$char_traits@D@std@@@std@@UEAA@XZ @ 0x18064B450 (--1-$basic_filebuf@DU-$char_traits@D@std@@@std@@UEAA@XZ.c)
 */

void *__fastcall std::filebuf::`vector deleting destructor'(void *a1, char a2)
{
  std::filebuf::~filebuf<char,std::char_traits<char>>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
