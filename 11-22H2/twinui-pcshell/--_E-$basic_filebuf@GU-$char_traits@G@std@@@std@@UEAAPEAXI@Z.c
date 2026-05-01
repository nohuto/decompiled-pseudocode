/*
 * XREFs of ??_E?$basic_filebuf@GU?$char_traits@G@std@@@std@@UEAAPEAXI@Z @ 0x1806E1E00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$basic_filebuf@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x1806E193C (--1-$basic_filebuf@GU-$char_traits@G@std@@@std@@UEAA@XZ.c)
 */

void *__fastcall std::basic_filebuf<unsigned short>::`vector deleting destructor'(void *a1, char a2)
{
  std::basic_filebuf<unsigned short>::~basic_filebuf<unsigned short,std::char_traits<unsigned short>>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
