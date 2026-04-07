/*
 * XREFs of ??_D?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x1800F1768
 * Callers:
 *     _tip::details::test_common_data_0_::data_::_1_::dtor$0 @ 0x1800F2DDA (_tip--details--test_common_data_0_--data_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x1800F11C4 (--1-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ.c)
 */

__int64 __fastcall std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vbase destructor'(
        __int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 152;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream<char,std::char_traits<char>,std::allocator<char>>(a1 + 152);
  return std::ios::~ios<char,std::char_traits<char>>(v1);
}
