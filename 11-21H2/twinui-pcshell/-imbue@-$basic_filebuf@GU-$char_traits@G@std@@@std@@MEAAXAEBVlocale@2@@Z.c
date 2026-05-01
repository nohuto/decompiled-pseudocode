/*
 * XREFs of ?imbue@?$basic_filebuf@GU?$char_traits@G@std@@@std@@MEAAXAEBVlocale@2@@Z @ 0x1805DE4D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$use_facet@V?$codecvt@GDU_Mbstatet@@@std@@@std@@YAAEBV?$codecvt@GDU_Mbstatet@@@0@AEBVlocale@0@@Z @ 0x1805DCEAC (--$use_facet@V-$codecvt@GDU_Mbstatet@@@std@@@std@@YAAEBV-$codecvt@GDU_Mbstatet@@@0@AEBVlocale@0@.c)
 */

char __fastcall std::basic_filebuf<unsigned short>::imbue(__int64 a1, std::locale *a2)
{
  struct std::_Facet_base *v3; // rax

  v3 = std::use_facet<std::codecvt<unsigned short,char,_Mbstatet>>(a2);
  return std::basic_filebuf<unsigned short>::_Initcvt(a1, v3);
}
