/*
 * XREFs of ??0?$basic_filebuf@DU?$char_traits@D@std@@@std@@QEAA@XZ @ 0x18064B3F8
 * Callers:
 *     ??0?$basic_fstream@DU?$char_traits@D@std@@@std@@QEAA@PEBGHH@Z @ 0x1806F06A0 (--0-$basic_fstream@DU-$char_traits@D@std@@@std@@QEAA@PEBGHH@Z.c)
 * Callees:
 *     ?_Init@?$basic_filebuf@DU?$char_traits@D@std@@@std@@IEAAXPEAU_iobuf@@W4_Initfl@12@@Z @ 0x18064B66C (-_Init@-$basic_filebuf@DU-$char_traits@D@std@@@std@@IEAAXPEAU_iobuf@@W4_Initfl@12@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::filebuf::filebuf(_QWORD *a1)
{
  std::streambuf::streambuf(a1);
  *a1 = &std::filebuf::`vftable';
  std::filebuf::_Init(a1, 0LL, 0LL);
  return a1;
}
