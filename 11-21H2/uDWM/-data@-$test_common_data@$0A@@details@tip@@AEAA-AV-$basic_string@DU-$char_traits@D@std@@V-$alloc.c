/*
 * XREFs of ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800423D8
 * Callers:
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x1800400CC (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x1800444CC (-start@-$test_common_data@$0A@@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?evaluate_and_report@?$test_common_data@$0A@@details@tip@@AEAAX_J@Z @ 0x18004462C (-evaluate_and_report@-$test_common_data@$0A@@details@tip@@AEAAX_J@Z.c)
 * Callees:
 *     ??$process@AEAI@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z @ 0x180042794 (--$process@AEAI@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z.c)
 *     ??$process@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z @ 0x180042840 (--$process@AEAV-$vector@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$allocat.c)
 *     ??$process@AEAV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@Z @ 0x1800428FC (--$process@AEAV-$vector@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@std@@@std@.c)
 *     ?str@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x1800429B8 (-str@-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA-AV-$basic_string@DU-$c.c)
 *     ??1?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x180042B84 (--1-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ.c)
 *     ??0?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180042BE8 (--0-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ??0JSONOutputArchive@cereal@@QEAA@AEAV?$basic_ostream@DU?$char_traits@D@std@@@std@@AEBVOptions@01@@Z @ 0x180042D88 (--0JSONOutputArchive@cereal@@QEAA@AEAV-$basic_ostream@DU-$char_traits@D@std@@@std@@AEBVOptions@0.c)
 *     ??1JSONOutputArchive@cereal@@UEAA@XZ @ 0x180043324 (--1JSONOutputArchive@cereal@@UEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall tip::details::test_common_data<0>::data(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rsi
  _QWORD *v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 result; // rax
  int v13; // [rsp+20h] [rbp-318h] BYREF
  char v14; // [rsp+24h] [rbp-314h]
  int v15; // [rsp+28h] [rbp-310h]
  _BYTE v16[16]; // [rsp+30h] [rbp-308h] BYREF
  _BYTE v17[8]; // [rsp+40h] [rbp-2F8h] BYREF
  _BYTE v18[128]; // [rsp+48h] [rbp-2F0h] BYREF
  _BYTE v19[104]; // [rsp+C8h] [rbp-270h] BYREF
  _BYTE v20[32]; // [rsp+130h] [rbp-208h] BYREF
  __int64 v21; // [rsp+150h] [rbp-1E8h]
  int v25; // [rsp+350h] [rbp+18h] BYREF

  v4 = a2;
  if ( a3 )
  {
    try
    {
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>(v16);
      v13 = 324;
      v14 = 32;
      v15 = 4;
      cereal::JSONOutputArchive::JSONOutputArchive(v20, v17, &v13);
      v25 = *(_DWORD *)(a1[1] + 20LL) << 8;
      v6 = *(_QWORD *)(*(_QWORD *)(v21 + 32) + 32LL);
      *(_QWORD *)(v6 + 408) = "version";
      cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned int &>(*(_QWORD *)(v6 + 32), &v25);
      (*(void (__fastcall **)(_QWORD, _BYTE *, _QWORD))(*(_QWORD *)*a1 + 8LL))(*a1, v20, a3);
      if ( (a3 & 1) != 0 )
      {
        v7 = a1 + 4;
        v8 = a1 + 7;
        v9 = v21;
        v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 32) + 32LL) + 32LL);
        *(_QWORD *)(v10 + 408) = "log";
        cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<std::vector<std::string> &>(
          *(_QWORD *)(v10 + 32),
          v8);
        v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 32) + 32LL) + 32LL);
        *(_QWORD *)(v11 + 408) = "errors";
        cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<std::vector<wil::StoredFailureInfo> &>(
          *(_QWORD *)(v11 + 32),
          v7);
      }
      cereal::JSONOutputArchive::~JSONOutputArchive((cereal::JSONOutputArchive *)v20);
      std::stringbuf::str(v18, v4);
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream<char,std::char_traits<char>,std::allocator<char>>(v19);
      std::ios::~ios<char,std::char_traits<char>>(v19);
      result = v4;
    }
    catch ( ... )
    {
      *((_DWORD *)a1 + 6) |= 0x80000u;
      v4 = a2;
      goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 24) = 15LL;
    *(_BYTE *)v4 = 0;
    return v4;
  }
  return result;
}
