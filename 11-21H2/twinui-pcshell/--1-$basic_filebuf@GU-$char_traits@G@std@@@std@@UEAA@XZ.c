/*
 * XREFs of ??1?$basic_filebuf@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x1805DD570
 * Callers:
 *     _std::basic_ifstream_unsigned_short_std::char_traits_unsigned_short___::basic_ifstream_unsigned_short_std::char_traits_unsigned_short____::_1_::dtor$2 @ 0x1805DD15B (_std--basic_ifstream_unsigned_short_std--char_traits_unsigned_short___--basic_ifstr_ea_1805DD15B.c)
 *     ??1?$basic_ifstream@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x1805DD5BC (--1-$basic_ifstream@GU-$char_traits@G@std@@@std@@UEAA@XZ.c)
 *     ??_E?$basic_filebuf@GU?$char_traits@G@std@@@std@@UEAAPEAXI@Z @ 0x1805DD7F0 (--_E-$basic_filebuf@GU-$char_traits@G@std@@@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Reset_back@?$basic_filebuf@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x1805DE300 (-_Reset_back@-$basic_filebuf@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?close@?$basic_filebuf@GU?$char_traits@G@std@@@std@@QEAAPEAV12@XZ @ 0x1805DE448 (-close@-$basic_filebuf@GU-$char_traits@G@std@@@std@@QEAAPEAV12@XZ.c)
 */

__int64 __fastcall std::basic_filebuf<unsigned short>::~basic_filebuf<unsigned short,std::char_traits<unsigned short>>(
        __int64 a1)
{
  *(_QWORD *)a1 = &std::basic_filebuf<unsigned short>::`vftable';
  if ( *(_QWORD *)(a1 + 128) )
    std::basic_filebuf<unsigned short>::_Reset_back();
  if ( *(_BYTE *)(a1 + 124) )
    std::basic_filebuf<unsigned short>::close(a1);
  return std::basic_streambuf<unsigned short>::~basic_streambuf<unsigned short,std::char_traits<unsigned short>>(a1);
}
