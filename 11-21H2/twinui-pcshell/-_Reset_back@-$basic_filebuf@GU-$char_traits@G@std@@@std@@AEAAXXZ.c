/*
 * XREFs of ?_Reset_back@?$basic_filebuf@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x1805DE300
 * Callers:
 *     ??1?$basic_filebuf@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x1805DD570 (--1-$basic_filebuf@GU-$char_traits@G@std@@@std@@UEAA@XZ.c)
 *     ?overflow@?$basic_filebuf@GU?$char_traits@G@std@@@std@@MEAAGG@Z @ 0x1805DE500 (-overflow@-$basic_filebuf@GU-$char_traits@G@std@@@std@@MEAAGG@Z.c)
 *     ?seekoff@?$basic_filebuf@GU?$char_traits@G@std@@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@_JHH@Z @ 0x1805DE8A0 (-seekoff@-$basic_filebuf@GU-$char_traits@G@std@@@std@@MEAA-AV-$fpos@U_Mbstatet@@@2@_JHH@Z.c)
 *     ?seekpos@?$basic_filebuf@GU?$char_traits@G@std@@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@V32@H@Z @ 0x1805DE990 (-seekpos@-$basic_filebuf@GU-$char_traits@G@std@@@std@@MEAA-AV-$fpos@U_Mbstatet@@@2@V32@H@Z.c)
 *     ?uflow@?$basic_filebuf@GU?$char_traits@G@std@@@std@@MEAAGXZ @ 0x1805DEB90 (-uflow@-$basic_filebuf@GU-$char_traits@G@std@@@std@@MEAAGXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::basic_filebuf<unsigned short>::_Reset_back(__int64 a1)
{
  __int64 result; // rax

  result = std::basic_streambuf<unsigned short>::eback(a1);
  if ( result == a1 + 112 )
    return std::basic_streambuf<unsigned short>::setg(
             a1,
             *(_QWORD *)(a1 + 136),
             *(_QWORD *)(a1 + 136),
             *(_QWORD *)(a1 + 144));
  return result;
}
