/*
 * XREFs of ??$_Emplace_reallocate@PEAV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@PEAV12@@?$vector@VIterator@JSONInputArchive@cereal@@V?$allocator@VIterator@JSONInputArchive@cereal@@@std@@@std@@QEAAPEAVIterator@JSONInputArchive@cereal@@QEAV234@$$QEAPEAV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@1@Z @ 0x180348C94
 * Callers:
 *     ??0JSONInputArchive@cereal@@QEAA@AEAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z @ 0x18034C45C (--0JSONInputArchive@cereal@@QEAA@AEAV-$basic_istream@DU-$char_traits@D@std@@@std@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x18010A6CC (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@CAXXZ @ 0x1801B1A04 (-_Xlength@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@CAXXZ.c)
 *     ??$_Uninitialized_move@PEAVIterator@JSONInputArchive@cereal@@V?$allocator@VIterator@JSONInputArchive@cereal@@@std@@@std@@YAPEAVIterator@JSONInputArchive@cereal@@QEAV123@0PEAV123@AEAV?$allocator@VIterator@JSONInputArchive@cereal@@@0@@Z @ 0x1803498D0 (--$_Uninitialized_move@PEAVIterator@JSONInputArchive@cereal@@V-$allocator@VIterator@JSONInputArc.c)
 *     ?_Calculate_growth@?$vector@VIterator@JSONInputArchive@cereal@@V?$allocator@VIterator@JSONInputArchive@cereal@@@std@@@std@@AEBA_K_K@Z @ 0x180350B10 (-_Calculate_growth@-$vector@VIterator@JSONInputArchive@cereal@@V-$allocator@VIterator@JSONInputA.c)
 *     ?_Change_array@?$vector@VIterator@JSONInputArchive@cereal@@V?$allocator@VIterator@JSONInputArchive@cereal@@@std@@@std@@AEAAXQEAVIterator@JSONInputArchive@cereal@@_K1@Z @ 0x180350C1C (-_Change_array@-$vector@VIterator@JSONInputArchive@cereal@@V-$allocator@VIterator@JSONInputArchi.c)
 */

char *__fastcall std::vector<cereal::JSONInputArchive::Iterator>::_Emplace_reallocate<tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>> *,tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>> *>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rsi
  size_t size_of; // rax
  char *v13; // rax
  char *v14; // r10
  char *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  char *v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r10
  char *result; // rax
  void *v24; // [rsp+58h] [rbp+10h]

  v8 = (a2 - *a1) / 40;
  v9 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
  if ( v9 == 0x666666666666666LL )
    std::vector<Geometry::CRect>::_Xlength();
  v10 = v9 + 1;
  v11 = std::vector<cereal::JSONInputArchive::Iterator>::_Calculate_growth(a1, v9 + 1);
  size_of = std::_Get_size_of_n<40>(v11);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v24 = v13;
  try
  {
    v15 = &v13[40 * v8];
    v16 = *a4;
    v17 = *a3;
    *((_QWORD *)v15 + 2) = *a3;
    *((_QWORD *)v15 + 3) = 0LL;
    *((_DWORD *)v15 + 8) = 0;
    v18 = *((_DWORD *)v15 + 8);
    if ( ((v16 - v17) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
      v18 = 2;
    *((_DWORD *)v15 + 8) = v18;
    v19 = a1[1];
    v20 = v14;
    v21 = *a1;
    if ( a2 != v19 )
    {
      std::_Uninitialized_move<cereal::JSONInputArchive::Iterator *>(v21, a2, v14);
      v20 = v15 + 40;
      v19 = a1[1];
      v21 = a2;
    }
    std::_Uninitialized_move<cereal::JSONInputArchive::Iterator *>(v21, v19, v20);
    std::vector<cereal::JSONInputArchive::Iterator>::_Change_array(a1, v22, v10, v11);
    result = v15;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v24, 40 * v11);
    throw;
  }
  return result;
}
