/*
 * XREFs of ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800F2BC4
 * Callers:
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x180017478 (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?evaluate_and_report@?$test_common_data@$0A@@details@tip@@AEAAX_J@Z @ 0x1800F2E48 (-evaluate_and_report@-$test_common_data@$0A@@details@tip@@AEAAX_J@Z.c)
 *     ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x1800F3B04 (-start@-$test_common_data@$0A@@details@tip@@QEAA-AU_GUID@@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$process@AEAI@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z @ 0x1800EFEEC (--$process@AEAI@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z.c)
 *     ??$save@VJSONOutputArchive@cereal@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@4@@cereal@@YAXAEAVJSONOutputArchive@0@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z @ 0x1800F0690 (--$save@VJSONOutputArchive@cereal@@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@.c)
 *     ??$save@VJSONOutputArchive@cereal@@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@cereal@@YAXAEAVJSONOutputArchive@0@AEBV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@Z @ 0x1800F0750 (--$save@VJSONOutputArchive@cereal@@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@.c)
 *     ??0?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800F0B80 (--0-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ??0JSONOutputArchive@cereal@@QEAA@AEAV?$basic_ostream@DU?$char_traits@D@std@@@std@@AEBVOptions@01@@Z @ 0x1800F0CE4 (--0JSONOutputArchive@cereal@@QEAA@AEAV-$basic_ostream@DU-$char_traits@D@std@@@std@@AEBVOptions@0.c)
 *     ??1?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x1800F11C4 (--1-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ.c)
 *     ??1JSONOutputArchive@cereal@@UEAA@XZ @ 0x1800F167C (--1JSONOutputArchive@cereal@@UEAA@XZ.c)
 *     ?_Get_buffer_view@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA?AU_Buffer_view@12@XZ @ 0x1800F27F4 (-_Get_buffer_view@-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA-AU_Buffer.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800F2B64 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800F3150 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800F3DF0 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall tip::details::test_common_data<0>::data(__int64 **a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  int *v6; // rcx
  int *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 result; // rax
  int v15; // [rsp+20h] [rbp-348h] BYREF
  int v16; // [rsp+24h] [rbp-344h]
  const void *v17; // [rsp+28h] [rbp-340h] BYREF
  size_t v18; // [rsp+30h] [rbp-338h]
  __int64 **v19; // [rsp+40h] [rbp-328h]
  __int64 v20; // [rsp+48h] [rbp-320h]
  char v21[16]; // [rsp+50h] [rbp-318h] BYREF
  char v22[8]; // [rsp+60h] [rbp-308h] BYREF
  char v23[128]; // [rsp+68h] [rbp-300h] BYREF
  _BYTE v24[104]; // [rsp+E8h] [rbp-280h] BYREF
  _BYTE v25[32]; // [rsp+150h] [rbp-218h] BYREF
  __int64 v26; // [rsp+170h] [rbp-1F8h]

  v4 = a2;
  v19 = a1;
  v20 = a2;
  v16 = 0;
  if ( a3 )
  {
    try
    {
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>((__int64)v21);
      LODWORD(v17) = 324;
      BYTE4(v17) = 32;
      LODWORD(v18) = 4;
      cereal::JSONOutputArchive::JSONOutputArchive((__int64)v25, (__int64)v22, (__int64)&v17);
      v6 = (int *)a1[1] + 5;
      v15 = *v6 << 8;
      v7 = &v15;
      if ( (a3 & 4) != 0 )
        v7 = v6;
      v8 = *(_QWORD *)(*(_QWORD *)(v26 + 32) + 32LL);
      *(_QWORD *)(v8 + 408) = "version";
      cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned int &>(*(_QWORD *)(v8 + 32), v7);
      (*(void (__fastcall **)(__int64 *, _BYTE *, _QWORD))(**a1 + 8))(*a1, v25, a3);
      if ( (a3 & 1) != 0 )
      {
        v9 = v26;
        v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 32) + 32LL) + 32LL);
        *(_QWORD *)(v10 + 408) = "log";
        v11 = *(_QWORD *)(v10 + 32);
        cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v11 + 32));
        cereal::save<cereal::JSONOutputArchive,std::string,std::allocator<std::string>>(
          *(_QWORD *)(*(_QWORD *)(v11 + 32) + 32LL),
          a1 + 11);
        cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v11 + 32));
        v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 32) + 32LL) + 32LL);
        *(_QWORD *)(v12 + 408) = "errors";
        v13 = *(_QWORD *)(v12 + 32);
        cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v13 + 32));
        cereal::save<cereal::JSONOutputArchive,wil::StoredFailureInfo,std::allocator<wil::StoredFailureInfo>>(
          *(_QWORD *)(*(_QWORD *)(v13 + 32) + 32LL),
          (int **)a1 + 8);
        cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v13 + 32));
      }
      cereal::JSONOutputArchive::~JSONOutputArchive((cereal::JSONOutputArchive *)v25);
      *(_QWORD *)v4 = 0LL;
      *(_QWORD *)(v4 + 16) = 0LL;
      *(_QWORD *)(v4 + 16) = 0LL;
      *(_QWORD *)(v4 + 24) = 15LL;
      *(_BYTE *)v4 = 0;
      v16 = 4;
      std::stringbuf::_Get_buffer_view((__int64)v23, (__int64)&v17);
      if ( v17 )
        std::string::assign((void **)v4, v17, v18);
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream<char,std::char_traits<char>,std::allocator<char>>((__int64)v24);
      std::ios::~ios<char,std::char_traits<char>>(v24);
      result = v4;
    }
    catch ( ... )
    {
      *((_DWORD *)v19 + 14) |= 0x80000u;
      v4 = v20;
      goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    *(_QWORD *)v4 = 0LL;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 24) = 15LL;
    *(_BYTE *)v4 = 0;
    return v4;
  }
  return result;
}
