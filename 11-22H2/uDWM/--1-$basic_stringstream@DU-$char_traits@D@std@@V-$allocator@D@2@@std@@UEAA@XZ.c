/*
 * XREFs of ??1?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x1800F11C4
 * Callers:
 *     ??_D?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x1800F1768 (--_D-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 *     ??_G?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z @ 0x1800F1850 (--_G-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAAPEAXI@Z.c)
 *     ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800F2BC4 (-data@-$test_common_data@$0A@@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 * Callees:
 *     ??1?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x1800F1190 (--1-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ.c)
 */

__int64 __fastcall std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream<char,std::char_traits<char>,std::allocator<char>>(
        __int64 a1)
{
  __int64 v2; // rdx

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 152) + 4LL) + a1 - 152) = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vftable';
  v2 = *(int *)(*(_QWORD *)(a1 - 152) + 4LL);
  *(_DWORD *)(v2 + a1 - 156) = v2 - 152;
  std::stringbuf::~stringbuf((_QWORD *)(a1 - 128));
  return std::iostream::~basic_iostream<char,std::char_traits<char>>(a1 - 120);
}
