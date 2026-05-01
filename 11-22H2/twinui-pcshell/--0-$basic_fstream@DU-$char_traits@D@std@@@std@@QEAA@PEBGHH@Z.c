/*
 * XREFs of ??0?$basic_fstream@DU?$char_traits@D@std@@@std@@QEAA@PEBGHH@Z @ 0x1806F06A0
 * Callers:
 *     ??$?0Vpath@filesystem@std@@$0A@@?$basic_fstream@DU?$char_traits@D@std@@@std@@QEAA@AEBVpath@filesystem@1@HH@Z @ 0x1806EDEF8 (--$-0Vpath@filesystem@std@@$0A@@-$basic_fstream@DU-$char_traits@D@std@@@std@@QEAA@AEBVpath@files.c)
 * Callees:
 *     ??0?$basic_filebuf@DU?$char_traits@D@std@@@std@@QEAA@XZ @ 0x18064B3F8 (--0-$basic_filebuf@DU-$char_traits@D@std@@@std@@QEAA@XZ.c)
 *     ?open@?$basic_filebuf@DU?$char_traits@D@std@@@std@@QEAAPEAV12@PEBGHH@Z @ 0x18064B998 (-open@-$basic_filebuf@DU-$char_traits@D@std@@@std@@QEAAPEAV12@PEBGHH@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::fstream::fstream(_QWORD *a1, const unsigned __int16 *a2)
{
  *a1 = &std::fstream::`vbtable'{for `std::istream'};
  a1[2] = &std::fstream::`vbtable'{for `std::ostream'};
  std::ios::ios(a1 + 23);
  std::iostream::basic_iostream<char>(a1, a1 + 3, 0LL);
  *(_QWORD *)((char *)a1 + *(int *)(*a1 + 4LL)) = &std::fstream::`vftable';
  *(_DWORD *)((char *)a1 + *(int *)(*a1 + 4LL) - 4) = *(_DWORD *)(*a1 + 4LL) - 184;
  std::filebuf::filebuf(a1 + 3);
  if ( !std::filebuf::open((__int64)(a1 + 3), a2, 3) )
    std::ios::setstate((char *)a1 + *(int *)(*a1 + 4LL), 2LL);
  return a1;
}
