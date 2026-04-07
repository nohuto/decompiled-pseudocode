/*
 * XREFs of ??1?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x180042CA8
 * Callers:
 *     ??1?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x180042B84 (--1-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ.c)
 *     ??_E?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z @ 0x1800F37C0 (--_E-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IEAAXXZ @ 0x180042CDC (-_Tidy@-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@IEAAXXZ.c)
 */

__int64 __fastcall std::stringbuf::~stringbuf(_QWORD *a1)
{
  *a1 = &std::stringbuf::`vftable';
  std::stringbuf::_Tidy();
  return std::streambuf::~streambuf<char,std::char_traits<char>>(a1);
}
