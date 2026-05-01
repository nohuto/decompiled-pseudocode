/*
 * XREFs of ??0?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@H@Z @ 0x18022C184
 * Callers:
 *     ?update_from_test_info@?$test_common_data@$00@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x180120C60 (-update_from_test_info@-$test_common_data@$00@details@tip@@AEAAXAEBUTestInfo@@@Z.c)
 * Callees:
 *     ?_Init@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IEAAXPEBD_KH@Z @ 0x180350D38 (-_Init@-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@IEAAXPEBD_KH@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // r8

  *a1 = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vbtable'{for `std::istream'};
  a1[2] = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vbtable'{for `std::ostream'};
  std::ios::ios(a1 + 19);
  std::iostream::basic_iostream<char>(a1, a1 + 3, 0LL);
  *(_QWORD *)((char *)a1 + *(int *)(*a1 + 4LL)) = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vftable';
  *(_DWORD *)((char *)a1 + *(int *)(*a1 + 4LL) - 4) = *(_DWORD *)(*a1 + 4LL) - 152;
  std::streambuf::streambuf(a1 + 3);
  a1[3] = &std::stringbuf::`vftable';
  v4 = a2[2];
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  std::stringbuf::_Init(a1 + 3, a2, v4, 0LL);
  return a1;
}
