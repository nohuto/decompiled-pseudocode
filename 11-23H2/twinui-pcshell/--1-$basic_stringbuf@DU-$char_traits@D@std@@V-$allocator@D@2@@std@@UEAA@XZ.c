/*
 * XREFs of ??1?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x180416C60
 * Callers:
 *     ??_E?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z @ 0x180417A90 (--_E-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IEAAXXZ @ 0x1800BE5CC (-_Tidy@-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@IEAAXXZ.c)
 */

__int64 __fastcall std::stringbuf::~stringbuf(_QWORD *a1)
{
  *a1 = &std::stringbuf::`vftable';
  std::stringbuf::_Tidy((__int64)a1);
  return std::streambuf::~streambuf<char,std::char_traits<char>>(a1);
}
