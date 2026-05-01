/*
 * XREFs of ??0?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAA@QEAVJSONOutputArchive@1@@Z @ 0x1800871B0
 * Callers:
 *     ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x180085E80 (-data@-$test_common_data@$0A@@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     ??0JSONOutputArchive@cereal@@QEAA@AEAV?$basic_ostream@DU?$char_traits@D@std@@@std@@AEBVOptions@01@@Z @ 0x180121330 (--0JSONOutputArchive@cereal@@QEAA@AEAV-$basic_ostream@DU-$char_traits@D@std@@@std@@AEBVOptions@0.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBDI@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBDI@std@@@std@@@std@@@2@@Z @ 0x180088620 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_180088620.c)
 *     ??0?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@_K@1@@Z @ 0x1800886B0 (--0-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$alloc.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::OutputArchive<cereal::JSONOutputArchive,0>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rsi
  _QWORD *v4; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  *(_QWORD *)a1 = &cereal::OutputArchive<cereal::JSONOutputArchive,0>::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = a2;
  v3 = a1 + 40;
  v15 = a1 + 40;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  v4 = operator new(0x28uLL);
  *v4 = v4;
  v4[1] = v4;
  *(_QWORD *)(v3 + 8) = v4;
  *(_QWORD *)(v3 + 24) = 0LL;
  *(_QWORD *)(v3 + 32) = 0LL;
  *(_QWORD *)(v3 + 40) = 0LL;
  *(_QWORD *)(v3 + 48) = 7LL;
  *(_QWORD *)(v3 + 56) = 8LL;
  *(_DWORD *)v3 = 1065353216;
  v5 = *(_QWORD *)(v3 + 8);
  v6 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(128LL);
  *(_QWORD *)(v3 + 24) = v6;
  v7 = v6 + 16;
  *(_QWORD *)(v3 + 32) = v6 + 16;
  *(_QWORD *)(v3 + 40) = v6 + 16;
  do
    *v6++ = v5;
  while ( v6 != v7 );
  v15 = a1 + 104;
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  v8 = operator new(0x20uLL);
  *v8 = v8;
  v8[1] = v8;
  *(_QWORD *)(a1 + 112) = v8;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 7LL;
  *(_QWORD *)(a1 + 160) = 8LL;
  *(_DWORD *)(a1 + 104) = 1065353216;
  v9 = *(_QWORD *)(a1 + 112);
  v10 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(128LL);
  *(_QWORD *)(a1 + 128) = v10;
  v11 = v10 + 16;
  *(_QWORD *)(a1 + 136) = v10 + 16;
  *(_QWORD *)(a1 + 144) = v10 + 16;
  do
    *v10++ = v9;
  while ( v10 != v11 );
  *(_DWORD *)(a1 + 168) = 1;
  v15 = a1 + 176;
  *(_DWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  v12 = operator new(0x20uLL);
  *v12 = v12;
  v12[1] = v12;
  *(_QWORD *)(a1 + 184) = v12;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 7LL;
  *(_QWORD *)(a1 + 232) = 8LL;
  *(_DWORD *)(a1 + 176) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<char const * const,unsigned int>>>>>>::_Assign_grow(
    a1 + 200,
    v13,
    *(_QWORD *)(a1 + 184));
  *(_DWORD *)(a1 + 240) = 1;
  HIDWORD(v15) = (unsigned __int64)(a1 + 248) >> 32;
  LODWORD(v15) = 0;
  std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>(
    a1 + 248,
    &v15);
  return a1;
}
