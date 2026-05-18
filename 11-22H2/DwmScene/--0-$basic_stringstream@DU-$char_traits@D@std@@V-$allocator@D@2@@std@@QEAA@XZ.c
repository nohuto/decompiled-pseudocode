/*
 * XREFs of ??0?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800205F0
 * Callers:
 *     ?ToString@ExceptionDetails@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUD3D11_TEXTURE2D_DESC@@AEBV?$vector@UD3D11_SUBRESOURCE_DATA@@V?$allocator@UD3D11_SUBRESOURCE_DATA@@@std@@@3@@Z @ 0x1800CF074 (-ToString@ExceptionDetails@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AE.c)
 *     ?ToString@ExceptionDetails@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@UD3D11_SUBRESOURCE_DATA@@V?$allocator@UD3D11_SUBRESOURCE_DATA@@@std@@@3@@Z @ 0x1800CF140 (-ToString@ExceptionDetails@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator_ea_1800CF140.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>(
        __int64 a1)
{
  *(_QWORD *)a1 = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vbtable'{for `std::istream'};
  *(_QWORD *)(a1 + 16) = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vbtable'{for `std::ostream'};
  std::ios::ios(a1 + 152);
  std::iostream::basic_iostream<char>(a1, a1 + 24, 0LL);
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1) = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vftable';
  *(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 - 4) = *(_DWORD *)(*(_QWORD *)a1 + 4LL) - 152;
  std::streambuf::streambuf(a1 + 24);
  *(_QWORD *)(a1 + 24) = &std::stringbuf::`vftable';
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_DWORD *)(a1 + 136) = 0;
  return a1;
}
