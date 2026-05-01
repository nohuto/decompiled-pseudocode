/*
 * XREFs of ??1?$basic_filebuf@DU?$char_traits@D@std@@@std@@UEAA@XZ @ 0x18064B450
 * Callers:
 *     ??_E?$basic_filebuf@DU?$char_traits@D@std@@@std@@UEAAPEAXI@Z @ 0x18064B4A0 (--_E-$basic_filebuf@DU-$char_traits@D@std@@@std@@UEAAPEAXI@Z.c)
 *     _std::basic_fstream_char_std::char_traits_char___::basic_fstream_char_std::char_traits_char____::_1_::dtor$2 @ 0x1806F07CF (_std--basic_fstream_char_std--char_traits_char___--basic_fstream_char_std--char_tra_ea_1806F07CF.c)
 *     ??1?$basic_fstream@DU?$char_traits@D@std@@@std@@UEAA@XZ @ 0x1806F0958 (--1-$basic_fstream@DU-$char_traits@D@std@@@std@@UEAA@XZ.c)
 * Callees:
 *     ?_Reset_back@?$basic_filebuf@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x18064B7A8 (-_Reset_back@-$basic_filebuf@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?close@?$basic_filebuf@DU?$char_traits@D@std@@@std@@QEAAPEAV12@XZ @ 0x18064B8BC (-close@-$basic_filebuf@DU-$char_traits@D@std@@@std@@QEAAPEAV12@XZ.c)
 */

__int64 __fastcall std::filebuf::~filebuf<char,std::char_traits<char>>(__int64 a1)
{
  *(_QWORD *)a1 = &std::filebuf::`vftable';
  if ( *(_QWORD *)(a1 + 128) )
    std::filebuf::_Reset_back();
  if ( *(_BYTE *)(a1 + 124) )
    std::filebuf::close(a1);
  return std::streambuf::~streambuf<char,std::char_traits<char>>(a1);
}
