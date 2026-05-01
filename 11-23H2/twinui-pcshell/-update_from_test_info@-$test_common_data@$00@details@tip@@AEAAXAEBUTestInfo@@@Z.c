/*
 * XREFs of ?update_from_test_info@?$test_common_data@$00@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x1800955C8
 * Callers:
 *     ?is_running@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x18004039C (-is_running@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?open_without_lock@?$test_common_data@$00@details@tip@@QEAAXPEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x1800925D4 (-open_without_lock@-$test_common_data@$00@details@tip@@QEAAXPEAU_GUID@@W4TestRetrievalOptions@@@.c)
 *     ??1?$test_common_data@$00@details@tip@@QEAA@XZ @ 0x180093D4C (--1-$test_common_data@$00@details@tip@@QEAA@XZ.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180095B9C (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 * Callees:
 *     ??1?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x1800BE544 (--1-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ.c)
 *     ??0JSONInputArchive@cereal@@QEAA@AEAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z @ 0x180162D10 (--0JSONInputArchive@cereal@@QEAA@AEAV-$basic_istream@DU-$char_traits@D@std@@@std@@@Z.c)
 *     ?startNode@JSONInputArchive@cereal@@QEAAXXZ @ 0x180162F0C (-startNode@JSONInputArchive@cereal@@QEAAXXZ.c)
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180163058 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x180163094 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     ?GetUint@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAIXZ @ 0x180163690 (-GetUint@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidj.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18018AB94 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??1JSONInputArchive@cereal@@UEAA@XZ @ 0x18018D35C (--1JSONInputArchive@cereal@@UEAA@XZ.c)
 *     ??0?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@H@Z @ 0x180193F54 (--0-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV-$basic_string@DU.c)
 *     ??$load@VJSONInputArchive@cereal@@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@cereal@@YAXAEAVJSONInputArchive@0@AEAV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@Z @ 0x1801B2110 (--$load@VJSONInputArchive@cereal@@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@.c)
 *     ??$load@VJSONInputArchive@cereal@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@4@@cereal@@YAXAEAVJSONInputArchive@0@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z @ 0x1801B21BC (--$load@VJSONInputArchive@cereal@@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1803920BC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall tip::details::test_common_data<1>::update_from_test_info(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  void *v6; // rcx
  int v7; // r14d
  __int64 v8; // rax
  cereal::JSONInputArchive *v9; // rdi
  __int64 v10; // rax
  int Uint; // eax
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // [rsp+20h] [rbp-338h] BYREF
  void *v19[3]; // [rsp+28h] [rbp-330h] BYREF
  _BYTE v20[152]; // [rsp+40h] [rbp-318h] BYREF
  _BYTE v21[104]; // [rsp+D8h] [rbp-280h] BYREF
  void *v22[3]; // [rsp+140h] [rbp-218h] BYREF
  unsigned __int64 v23; // [rsp+158h] [rbp-200h]
  _BYTE v24[32]; // [rsp+160h] [rbp-1F8h] BYREF
  __int64 v25; // [rsp+180h] [rbp-1D8h]

  v19[1] = a1;
  *((_DWORD *)a1 + 14) |= *(_DWORD *)(a2 + 20);
  if ( *(_QWORD *)(a2 + 24) )
  {
    std::string::string(v22);
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>(
      v20,
      v22);
    if ( v23 >= 0x10 )
    {
      v5 = v23 + 1;
      v18 = v23 + 1;
      v6 = v22[0];
      v19[0] = v22[0];
      if ( v23 + 1 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(v19, &v18);
        v5 = v18;
        v6 = v19[0];
      }
      operator delete(v6, v5);
    }
    v22[2] = 0LL;
    v23 = 15LL;
    LOBYTE(v22[0]) = 0;
    cereal::JSONInputArchive::JSONInputArchive(v24, v20);
    v7 = *(_DWORD *)(a1[1] + 20LL) << 8;
    v8 = *(_QWORD *)(v25 + 32);
    *(_QWORD *)(v8 + 304) = "version";
    v9 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v8 + 32) + 32LL);
    cereal::JSONInputArchive::search(v9);
    v10 = cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v9 + 43) - 40LL);
    Uint = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetUint(v10);
    ++*(_QWORD *)(*((_QWORD *)v9 + 43) - 16LL);
    if ( Uint == v7 )
    {
      (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a1 + 16LL))(*a1, v24);
      v12 = *(_QWORD *)(v25 + 32);
      *(_QWORD *)(v12 + 304) = "log";
      cereal::JSONInputArchive::startNode(*(cereal::JSONInputArchive **)(v12 + 32));
      cereal::load<cereal::JSONInputArchive,std::string,std::allocator<std::string>>(
        *(_QWORD *)(*(_QWORD *)(v12 + 32) + 32LL),
        a1 + 11);
      v13 = *(_QWORD *)(v12 + 32);
      v14 = *(_QWORD *)(v13 + 344);
      *(_QWORD *)(v13 + 344) = v14 - 40;
      ++*(_QWORD *)(v14 - 56);
      v15 = *(_QWORD *)(v25 + 32);
      *(_QWORD *)(v15 + 304) = "errors";
      cereal::JSONInputArchive::startNode(*(cereal::JSONInputArchive **)(v15 + 32));
      cereal::load<cereal::JSONInputArchive,wil::StoredFailureInfo,std::allocator<wil::StoredFailureInfo>>(
        *(_QWORD *)(*(_QWORD *)(v15 + 32) + 32LL),
        a1 + 8);
      v16 = *(_QWORD *)(v15 + 32);
      v17 = *(_QWORD *)(v16 + 344);
      *(_QWORD *)(v16 + 344) = v17 - 40;
      ++*(_QWORD *)(v17 - 56);
      *((_DWORD *)a1 + 40) = *(_DWORD *)(a2 + 16);
    }
    else
    {
      *((_DWORD *)a1 + 14) |= 0x80000u;
    }
    cereal::JSONInputArchive::~JSONInputArchive((cereal::JSONInputArchive *)v24);
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream<char,std::char_traits<char>,std::allocator<char>>(v21);
    return std::ios::~ios<char,std::char_traits<char>>(v21);
  }
  else
  {
    result = *(unsigned int *)(a2 + 16);
    *((_DWORD *)a1 + 40) = result;
  }
  return result;
}
