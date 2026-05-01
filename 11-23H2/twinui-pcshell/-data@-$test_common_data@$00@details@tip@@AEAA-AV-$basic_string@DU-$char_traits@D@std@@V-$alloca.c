/*
 * XREFs of ?data@?$test_common_data@$00@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800BE188
 * Callers:
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?evaluate_and_report@?$test_common_data@$00@details@tip@@AEAAX_J@Z @ 0x18009582C (-evaluate_and_report@-$test_common_data@$00@details@tip@@AEAAX_J@Z.c)
 *     ?start@?$test_common_data@$00@details@tip@@QEAA?AU_GUID@@XZ @ 0x180098400 (-start@-$test_common_data@$00@details@tip@@QEAA-AU_GUID@@XZ.c)
 * Callees:
 *     ?u32toa@internal@tip_rapidjson@@YAPEADIPEAD@Z @ 0x1800BE02C (-u32toa@internal@tip_rapidjson@@YAPEADIPEAD@Z.c)
 *     ??0?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800BE484 (--0-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ??1?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x1800BE544 (--1-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ.c)
 *     ?String@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NPEBDI_N@Z @ 0x1800BFBB0 (-String@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip.c)
 *     ?str@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x1800C1538 (-str@-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA-AV-$basic_string@DU-$c.c)
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C18D8 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1AA4 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1B60 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x1800C21BC (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 *     ??1JSONOutputArchive@cereal@@UEAA@XZ @ 0x1800C2604 (--1JSONOutputArchive@cereal@@UEAA@XZ.c)
 *     ??0JSONOutputArchive@cereal@@QEAA@AEAV?$basic_ostream@DU?$char_traits@D@std@@@std@@AEBVOptions@01@@Z @ 0x1800C3DF8 (--0JSONOutputArchive@cereal@@QEAA@AEAV-$basic_ostream@DU-$char_traits@D@std@@@std@@AEBVOptions@0.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$save@VJSONOutputArchive@cereal@@@wil@@YAXAEAVJSONOutputArchive@cereal@@AEBVStoredFailureInfo@0@@Z @ 0x18041623C (--$save@VJSONOutputArchive@cereal@@@wil@@YAXAEAVJSONOutputArchive@cereal@@AEBVStoredFailureInfo@.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall tip::details::test_common_data<1>::data(_QWORD *a1, _QWORD *a2, unsigned int a3)
{
  unsigned int *v6; // rcx
  unsigned int *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // r15
  unsigned int v11; // edi
  char *v12; // r8
  __int64 v13; // rdx
  char *v14; // r12
  unsigned int *i; // rdi
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // r9
  _QWORD *v20; // r8
  __int64 *v21; // rdi
  __int64 *v22; // r12
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // r13
  _QWORD *v26; // r8
  __int64 v27; // rdi
  __int64 v28; // r14
  __int64 v30; // rsi
  __int64 *v31; // rdx
  __int64 v32; // rsi
  unsigned int v33; // [rsp+20h] [rbp-368h] BYREF
  _QWORD *v34; // [rsp+28h] [rbp-360h]
  _QWORD *v35; // [rsp+30h] [rbp-358h]
  _BYTE v36[16]; // [rsp+40h] [rbp-348h] BYREF
  _BYTE v37[8]; // [rsp+50h] [rbp-338h] BYREF
  _BYTE v38[128]; // [rsp+58h] [rbp-330h] BYREF
  _BYTE v39[104]; // [rsp+D8h] [rbp-2B0h] BYREF
  _BYTE v40[32]; // [rsp+140h] [rbp-248h] BYREF
  __int64 v41; // [rsp+160h] [rbp-228h]
  unsigned int v42[2]; // [rsp+330h] [rbp-58h] BYREF
  int v43; // [rsp+338h] [rbp-50h]

  v34 = a1;
  v35 = a2;
  if ( a3 )
  {
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>(v36);
    v42[0] = 324;
    LOBYTE(v42[1]) = 32;
    v43 = 4;
    cereal::JSONOutputArchive::JSONOutputArchive(v40, v37, v42);
    v6 = (unsigned int *)(a1[1] + 20LL);
    v33 = *v6 << 8;
    v7 = &v33;
    if ( (a3 & 4) != 0 )
      v7 = v6;
    v8 = *(_QWORD *)(*(_QWORD *)(v41 + 32) + 32LL);
    *(_QWORD *)(v8 + 408) = "version";
    v9 = *(_QWORD *)(v8 + 32);
    cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v9 + 32));
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 32) + 32LL);
    v11 = *v7;
    tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
      v10 + 328,
      6LL);
    v14 = tip_rapidjson::internal::u32toa((tip_rapidjson::internal *)v11, v42, v12);
    for ( i = v42; i != (unsigned int *)v14; i = (unsigned int *)((char *)i + 1) )
    {
      LOBYTE(v13) = *(_BYTE *)i;
      std::ostream::put(**(_QWORD **)(v10 + 328), v13);
    }
    (*(void (__fastcall **)(_QWORD, _BYTE *, _QWORD))(*(_QWORD *)*a1 + 8LL))(*a1, v40, a3);
    if ( (a3 & 1) != 0 )
    {
      v16 = v41;
      v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v41 + 32) + 32LL) + 32LL);
      *(_QWORD *)(v17 + 408) = "log";
      v18 = *(_QWORD *)(v17 + 32);
      cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v18 + 32));
      v19 = *(_QWORD *)(*(_QWORD *)(v18 + 32) + 32LL);
      *(_QWORD *)v42 = v19;
      v20 = *(_QWORD **)(*(_QWORD *)(v19 + 32) + 32LL);
      *(_DWORD *)(*(_QWORD *)(v20[58] + 8 * (((unsigned __int64)(v20[60] + v20[61] - 1LL) >> 2) & (v20[59] - 1LL)))
                + 4LL * ((*((_DWORD *)v20 + 120) + *((_DWORD *)v20 + 122) - 1) & 3)) = 2;
      v21 = (__int64 *)a1[11];
      v22 = (__int64 *)a1[12];
      while ( v21 != v22 )
      {
        v30 = *(_QWORD *)(v19 + 32);
        cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v30 + 32));
        v31 = v21;
        if ( (unsigned __int64)v21[3] >= 0x10 )
          v31 = (__int64 *)*v21;
        tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::String(
          *(_QWORD *)(*(_QWORD *)(v30 + 32) + 32LL) + 328LL,
          v31,
          *((unsigned int *)v21 + 4));
        v21 += 4;
        v19 = *(_QWORD *)v42;
      }
      cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v18 + 32));
      v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 32) + 32LL) + 32LL);
      *(_QWORD *)(v23 + 408) = "errors";
      v24 = *(_QWORD *)(v23 + 32);
      cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v24 + 32));
      v25 = *(_QWORD *)(*(_QWORD *)(v24 + 32) + 32LL);
      v26 = *(_QWORD **)(*(_QWORD *)(v25 + 32) + 32LL);
      *(_DWORD *)(*(_QWORD *)(v26[58] + 8 * (((unsigned __int64)(v26[60] + v26[61] - 1LL) >> 2) & (v26[59] - 1LL)))
                + 4LL * ((*((_DWORD *)v26 + 120) + *((_DWORD *)v26 + 122) - 1) & 3)) = 2;
      v27 = a1[8];
      v28 = a1[9];
      while ( v27 != v28 )
      {
        v32 = *(_QWORD *)(v25 + 32);
        cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v32 + 32));
        wil::save<cereal::JSONOutputArchive>(*(_QWORD *)(*(_QWORD *)(v32 + 32) + 32LL), v27);
        cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v32 + 32));
        v27 += 168LL;
      }
      cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v24 + 32));
    }
    cereal::JSONOutputArchive::~JSONOutputArchive((cereal::JSONOutputArchive *)v40);
    std::stringbuf::str(v38, a2);
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream<char,std::char_traits<char>,std::allocator<char>>(v39);
    std::ios::~ios<char,std::char_traits<char>>(v39);
    return a2;
  }
  else
  {
    *a2 = 0LL;
    a2[2] = 0LL;
    a2[3] = 15LL;
    *(_BYTE *)a2 = 0;
    return a2;
  }
}
