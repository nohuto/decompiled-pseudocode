/*
 * XREFs of ??0?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800F0B80
 * Callers:
 *     ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800F2BC4 (-data@-$test_common_data@$0A@@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
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
