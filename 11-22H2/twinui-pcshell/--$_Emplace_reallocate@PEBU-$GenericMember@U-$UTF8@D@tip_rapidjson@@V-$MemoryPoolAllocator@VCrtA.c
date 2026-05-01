/*
 * XREFs of ??$_Emplace_reallocate@PEBU?$GenericMember@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@PEBU12@@?$vector@VIterator@JSONInputArchive@cereal@@V?$allocator@VIterator@JSONInputArchive@cereal@@@std@@@std@@QEAAPEAVIterator@JSONInputArchive@cereal@@QEAV234@$$QEAPEBU?$GenericMember@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@1@Z @ 0x180163288
 * Callers:
 *     ?startNode@JSONInputArchive@cereal@@QEAAXXZ @ 0x180162F0C (-startNode@JSONInputArchive@cereal@@QEAAXXZ.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1800C28A0 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@VIterator@JSONInputArchive@cereal@@V?$allocator@VIterator@JSONInputArchive@cereal@@@std@@@std@@AEBA_K_K@Z @ 0x1801633B8 (-_Calculate_growth@-$vector@VIterator@JSONInputArchive@cereal@@V-$allocator@VIterator@JSONInputA.c)
 *     ??$_Uninitialized_move@PEAVIterator@JSONInputArchive@cereal@@V?$allocator@VIterator@JSONInputArchive@cereal@@@std@@@std@@YAPEAVIterator@JSONInputArchive@cereal@@QEAV123@0PEAV123@AEAV?$allocator@VIterator@JSONInputArchive@cereal@@@0@@Z @ 0x180163400 (--$_Uninitialized_move@PEAVIterator@JSONInputArchive@cereal@@V-$allocator@VIterator@JSONInputArc.c)
 *     ?_Change_array@?$vector@VIterator@JSONInputArchive@cereal@@V?$allocator@VIterator@JSONInputArchive@cereal@@@std@@@std@@AEAAXQEAVIterator@JSONInputArchive@cereal@@_K1@Z @ 0x1801636AC (-_Change_array@-$vector@VIterator@JSONInputArchive@cereal@@V-$allocator@VIterator@JSONInputArchi.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x18022B2D4 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 */

char *__fastcall std::vector<cereal::JSONInputArchive::Iterator>::_Emplace_reallocate<tip_rapidjson::GenericMember<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>> const *,tip_rapidjson::GenericMember<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>> const *>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rsi
  size_t size_of; // rax
  char *v13; // r10
  char *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  char *v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r10

  v8 = (a2 - *a1) / 40;
  v9 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
  if ( v9 == 0x666666666666666LL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v10 = v9 + 1;
  v11 = std::vector<cereal::JSONInputArchive::Iterator>::_Calculate_growth(a1, v9 + 1);
  size_of = std::_Get_size_of_n<40>(v11);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = &v13[40 * v8];
  v15 = *a4;
  v16 = *a3;
  *(_QWORD *)v14 = *a3;
  *((_QWORD *)v14 + 1) = v15;
  *((_QWORD *)v14 + 3) = 0LL;
  *((_DWORD *)v14 + 8) = 1;
  v17 = *((_DWORD *)v14 + 8);
  if ( ((v15 - v16) & 0xFFFFFFFFFFFFFFE0uLL) == 0 )
    v17 = 2;
  *((_DWORD *)v14 + 8) = v17;
  v18 = a1[1];
  v19 = v13;
  v20 = *a1;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<cereal::JSONInputArchive::Iterator *>(v20, a2, v13);
    v19 = v14 + 40;
    v18 = a1[1];
    v20 = a2;
  }
  std::_Uninitialized_move<cereal::JSONInputArchive::Iterator *>(v20, v18, v19);
  std::vector<cereal::JSONInputArchive::Iterator>::_Change_array(a1, v21, v10, v11);
  return v14;
}
