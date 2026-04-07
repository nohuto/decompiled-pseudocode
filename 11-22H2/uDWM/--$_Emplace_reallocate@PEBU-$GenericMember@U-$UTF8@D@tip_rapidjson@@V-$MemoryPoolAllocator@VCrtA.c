/*
 * XREFs of ??$_Emplace_reallocate@PEBU?$GenericMember@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@PEBU12@@?$vector@VIterator@JSONInputArchive@cereal@@V?$allocator@VIterator@JSONInputArchive@cereal@@@std@@@std@@QEAAPEAVIterator@JSONInputArchive@cereal@@QEAV234@$$QEAPEBU?$GenericMember@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@1@Z @ 0x1800EF6D4
 * Callers:
 *     ??$emplace_back@PEBU?$GenericMember@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@PEBU12@@?$vector@VIterator@JSONInputArchive@cereal@@V?$allocator@VIterator@JSONInputArchive@cereal@@@std@@@std@@QEAA?A_T$$QEAPEBU?$GenericMember@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@0@Z @ 0x1800EFE8C (--$emplace_back@PEBU-$GenericMember@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocato.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001BD70 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180047B6C (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAVIterator@JSONInputArchive@cereal@@V?$allocator@VIterator@JSONInputArchive@cereal@@@std@@@std@@YAPEAVIterator@JSONInputArchive@cereal@@QEAV123@0PEAV123@AEAV?$allocator@VIterator@JSONInputArchive@cereal@@@0@@Z @ 0x1800EFD04 (--$_Uninitialized_move@PEAVIterator@JSONInputArchive@cereal@@V-$allocator@VIterator@JSONInputArc.c)
 *     ?_Calculate_growth@?$vector@VIterator@JSONInputArchive@cereal@@V?$allocator@VIterator@JSONInputArchive@cereal@@@std@@@std@@AEBA_K_K@Z @ 0x1800F25CC (-_Calculate_growth@-$vector@VIterator@JSONInputArchive@cereal@@V-$allocator@VIterator@JSONInputA.c)
 *     ?_Change_array@?$vector@VIterator@JSONInputArchive@cereal@@V?$allocator@VIterator@JSONInputArchive@cereal@@@std@@@std@@AEAAXQEAVIterator@JSONInputArchive@cereal@@_K1@Z @ 0x1800F26D8 (-_Change_array@-$vector@VIterator@JSONInputArchive@cereal@@V-$allocator@VIterator@JSONInputArchi.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x18010E050 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::vector<cereal::JSONInputArchive::Iterator>::_Emplace_reallocate<tip_rapidjson::GenericMember<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>> const *,tip_rapidjson::GenericMember<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>> const *>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v4; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r14
  unsigned __int64 size_of; // rax
  __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rsi
  __int64 v17; // rcx
  bool v18; // zf
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r10

  v4 = *a1;
  v8 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
  if ( v8 == 0x666666666666666LL )
    std::_Dwm_Xlength_error((const char *)0x666666666666666LL);
  v10 = v8 + 1;
  v11 = std::vector<cereal::JSONInputArchive::Iterator>::_Calculate_growth(a1, v8 + 1);
  size_of = std::_Get_size_of_n<40>(v11);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = *a3;
  v15 = v13;
  v16 = v13 + 40 * ((a2 - v4) / 40);
  v17 = *a4;
  *(_QWORD *)(v16 + 24) = 0LL;
  *(_QWORD *)(v16 + 8) = v17;
  v18 = ((v17 - v14) & 0xFFFFFFFFFFFFFFE0uLL) == 0;
  *(_QWORD *)v16 = v14;
  *(_DWORD *)(v16 + 32) = 1;
  v19 = *(_DWORD *)(v16 + 32);
  if ( v18 )
    v19 = 2;
  *(_DWORD *)(v16 + 32) = v19;
  v20 = a1[1];
  v21 = *a1;
  if ( a2 != v20 )
  {
    std::_Uninitialized_move<cereal::JSONInputArchive::Iterator *>(v21, a2, v13);
    v20 = a1[1];
    v15 = v16 + 40;
    v21 = a2;
  }
  std::_Uninitialized_move<cereal::JSONInputArchive::Iterator *>(v21, v20, v15);
  std::vector<cereal::JSONInputArchive::Iterator>::_Change_array(a1, v22, v10, v11);
  return v16;
}
