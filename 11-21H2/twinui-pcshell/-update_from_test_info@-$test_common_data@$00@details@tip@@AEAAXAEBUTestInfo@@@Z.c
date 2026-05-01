/*
 * XREFs of ?update_from_test_info@?$test_common_data@$00@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x180120C60
 * Callers:
 *     ?is_running@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180030534 (-is_running@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??1?$test_common_data@$00@details@tip@@QEAA@XZ @ 0x18011EDCC (--1-$test_common_data@$00@details@tip@@QEAA@XZ.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x18011FB18 (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180120A64 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?open_without_lock@?$test_common_data@$00@details@tip@@QEAAXPEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x180351548 (-open_without_lock@-$test_common_data@$00@details@tip@@QEAAXPEAU_GUID@@W4TestRetrievalOptions@@@.c)
 * Callees:
 *     ??1?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x180120FEC (--1-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@H@Z @ 0x18022C184 (--0-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV-$basic_string@DU.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E911C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$load@VJSONInputArchive@cereal@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@4@@cereal@@YAXAEAVJSONInputArchive@0@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z @ 0x180349D88 (--$load@VJSONInputArchive@cereal@@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@.c)
 *     ??$load@VJSONInputArchive@cereal@@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@cereal@@YAXAEAVJSONInputArchive@0@AEAV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@Z @ 0x180349E64 (--$load@VJSONInputArchive@cereal@@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18034C21C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0JSONInputArchive@cereal@@QEAA@AEAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z @ 0x18034C45C (--0JSONInputArchive@cereal@@QEAA@AEAV-$basic_istream@DU-$char_traits@D@std@@@std@@@Z.c)
 *     ??1JSONInputArchive@cereal@@UEAA@XZ @ 0x18034D288 (--1JSONInputArchive@cereal@@UEAA@XZ.c)
 *     ?GetUint@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAIXZ @ 0x18034E798 (-GetUint@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidj.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x1803519C4 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     ?startNode@JSONInputArchive@cereal@@QEAAXXZ @ 0x180351DEC (-startNode@JSONInputArchive@cereal@@QEAAXXZ.c)
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180352198 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
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
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // [rsp+20h] [rbp-338h] BYREF
  void *v17[3]; // [rsp+28h] [rbp-330h] BYREF
  _BYTE v18[152]; // [rsp+40h] [rbp-318h] BYREF
  _BYTE v19[104]; // [rsp+D8h] [rbp-280h] BYREF
  _QWORD v20[3]; // [rsp+140h] [rbp-218h] BYREF
  unsigned __int64 v21; // [rsp+158h] [rbp-200h]
  _BYTE v22[32]; // [rsp+160h] [rbp-1F8h] BYREF
  __int64 v23; // [rsp+180h] [rbp-1D8h]

  v17[1] = a1;
  *((_DWORD *)a1 + 6) |= *(_DWORD *)(a2 + 20);
  if ( *(_QWORD *)(a2 + 24) )
  {
    std::string::string(v20);
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>(
      v18,
      v20);
    if ( v21 >= 0x10 )
    {
      v5 = v21 + 1;
      v16 = v21 + 1;
      v6 = (void *)v20[0];
      v17[0] = (void *)v20[0];
      if ( v21 + 1 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(v17, &v16);
        v5 = v16;
        v6 = v17[0];
      }
      operator delete(v6, v5);
    }
    v20[2] = 0LL;
    v21 = 15LL;
    LOBYTE(v20[0]) = 0;
    cereal::JSONInputArchive::JSONInputArchive(v22, v18);
    v7 = *(_DWORD *)(a1[1] + 20LL) << 8;
    v8 = *(_QWORD *)(v23 + 32);
    *(_QWORD *)(v8 + 304) = "version";
    v9 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v8 + 32) + 32LL);
    cereal::JSONInputArchive::search(v9);
    v10 = cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v9 + 43) - 40LL);
    Uint = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetUint(v10);
    ++*(_QWORD *)(*((_QWORD *)v9 + 43) - 16LL);
    if ( Uint == v7 )
    {
      (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a1 + 16LL))(*a1, v22);
      v12 = *(_QWORD *)(v23 + 32);
      *(_QWORD *)(v12 + 304) = "log";
      cereal::JSONInputArchive::startNode(*(cereal::JSONInputArchive **)(v12 + 32));
      cereal::load<cereal::JSONInputArchive,std::string,std::allocator<std::string>>(
        *(_QWORD *)(*(_QWORD *)(v12 + 32) + 32LL),
        a1 + 7);
      v13 = *(_QWORD *)(v12 + 32);
      *(_QWORD *)(v13 + 344) -= 40LL;
      ++*(_QWORD *)(*(_QWORD *)(v13 + 344) - 16LL);
      v14 = *(_QWORD *)(v23 + 32);
      *(_QWORD *)(v14 + 304) = "errors";
      cereal::JSONInputArchive::startNode(*(cereal::JSONInputArchive **)(v14 + 32));
      cereal::load<cereal::JSONInputArchive,wil::StoredFailureInfo,std::allocator<wil::StoredFailureInfo>>(
        *(_QWORD *)(*(_QWORD *)(v14 + 32) + 32LL),
        a1 + 4);
      v15 = *(_QWORD *)(v14 + 32);
      *(_QWORD *)(v15 + 344) -= 40LL;
      ++*(_QWORD *)(*(_QWORD *)(v15 + 344) - 16LL);
      *((_DWORD *)a1 + 32) = *(_DWORD *)(a2 + 16);
    }
    else
    {
      *((_DWORD *)a1 + 6) |= 0x80000u;
    }
    cereal::JSONInputArchive::~JSONInputArchive((cereal::JSONInputArchive *)v22);
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream<char,std::char_traits<char>,std::allocator<char>>(v19);
    return std::ios::~ios<char,std::char_traits<char>>(v19);
  }
  else
  {
    result = *(unsigned int *)(a2 + 16);
    *((_DWORD *)a1 + 32) = result;
  }
  return result;
}
