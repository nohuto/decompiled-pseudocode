/*
 * XREFs of ?_Initcvt@?$basic_filebuf@GU?$char_traits@G@std@@@std@@IEAAXAEBV?$codecvt@GDU_Mbstatet@@@2@@Z @ 0x1806E3EF0
 * Callers:
 *     ??0?$basic_ifstream@GU?$char_traits@G@std@@@std@@QEAA@PEBGHH@Z @ 0x1806E1274 (--0-$basic_ifstream@GU-$char_traits@G@std@@@std@@QEAA@PEBGHH@Z.c)
 *     ?imbue@?$basic_filebuf@GU?$char_traits@G@std@@@std@@MEAAXAEBVlocale@2@@Z @ 0x1806E4470 (-imbue@-$basic_filebuf@GU-$char_traits@G@std@@@std@@MEAAXAEBVlocale@2@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall std::basic_filebuf<unsigned short>::_Initcvt(__int64 a1, std::codecvt_base *a2)
{
  char result; // al

  result = std::codecvt_base::always_noconv(a2);
  if ( result )
  {
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  else
  {
    *(_QWORD *)(a1 + 104) = a2;
    return std::basic_streambuf<unsigned short>::_Init(a1);
  }
  return result;
}
