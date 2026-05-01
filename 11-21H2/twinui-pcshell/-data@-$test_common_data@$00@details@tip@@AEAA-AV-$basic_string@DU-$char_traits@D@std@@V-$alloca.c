/*
 * XREFs of ?data@?$test_common_data@$00@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x180120CE4
 * Callers:
 *     ?evaluate_and_report@?$test_common_data@$00@details@tip@@AEAAX_J@Z @ 0x18011FBE0 (-evaluate_and_report@-$test_common_data@$00@details@tip@@AEAAX_J@Z.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180120A64 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?start@?$test_common_data@$00@details@tip@@QEAA?AU_GUID@@XZ @ 0x180121CB4 (-start@-$test_common_data@$00@details@tip@@QEAA-AU_GUID@@XZ.c)
 * Callees:
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800874B0 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087AE0 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?String@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NPEBDI_N@Z @ 0x180087B90 (-String@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip.c)
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087BE0 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x180087E30 (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 *     ?u32toa@internal@tip_rapidjson@@YAPEADIPEAD@Z @ 0x180089160 (-u32toa@internal@tip_rapidjson@@YAPEADIPEAD@Z.c)
 *     ?str@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x1800891F0 (-str@-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA-AV-$basic_string@DU-$c.c)
 *     ??1?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x180120FEC (--1-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ.c)
 *     ??1JSONOutputArchive@cereal@@UEAA@XZ @ 0x180121074 (--1JSONOutputArchive@cereal@@UEAA@XZ.c)
 *     ??0JSONOutputArchive@cereal@@QEAA@AEAV?$basic_ostream@DU?$char_traits@D@std@@@std@@AEBVOptions@01@@Z @ 0x180121330 (--0JSONOutputArchive@cereal@@QEAA@AEAV-$basic_ostream@DU-$char_traits@D@std@@@std@@AEBVOptions@0.c)
 *     ??0?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180121698 (--0-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$save@VJSONOutputArchive@cereal@@@wil@@YAXAEAVJSONOutputArchive@cereal@@AEBVStoredFailureInfo@0@@Z @ 0x18034B8A4 (--$save@VJSONOutputArchive@cereal@@@wil@@YAXAEAVJSONOutputArchive@cereal@@AEBVStoredFailureInfo@.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall tip::details::test_common_data<1>::data(_QWORD *a1, _QWORD *a2, unsigned int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // r15
  char *v10; // r8
  __int64 v11; // rdx
  char *v12; // r12
  unsigned int *i; // rdi
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // r12
  _QWORD *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // r13
  _QWORD *v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdi
  __int64 v28; // r14
  __int64 v30; // rsi
  unsigned __int8 *v31; // rdx
  __int64 v32; // rsi
  _BYTE v33[16]; // [rsp+40h] [rbp-348h] BYREF
  _BYTE v34[8]; // [rsp+50h] [rbp-338h] BYREF
  _BYTE v35[128]; // [rsp+58h] [rbp-330h] BYREF
  _BYTE v36[104]; // [rsp+D8h] [rbp-2B0h] BYREF
  _BYTE v37[32]; // [rsp+140h] [rbp-248h] BYREF
  __int64 v38; // [rsp+160h] [rbp-228h]
  unsigned int v39[2]; // [rsp+330h] [rbp-58h] BYREF
  int v40; // [rsp+338h] [rbp-50h]

  if ( a3 )
  {
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>(v33);
    v39[0] = 324;
    LOBYTE(v39[1]) = 32;
    v40 = 4;
    cereal::JSONOutputArchive::JSONOutputArchive(v37, v34, v39);
    v6 = *(_DWORD *)(a1[1] + 20LL) << 8;
    v7 = *(_QWORD *)(*(_QWORD *)(v38 + 32) + 32LL);
    *(_QWORD *)(v7 + 408) = "version";
    v8 = *(_QWORD *)(v7 + 32);
    cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v8 + 32));
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 32) + 32LL);
    tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
      (__int64 **)(v9 + 328),
      6LL);
    v12 = tip_rapidjson::internal::u32toa((tip_rapidjson::internal *)v6, v39, v10);
    for ( i = v39; i != (unsigned int *)v12; i = (unsigned int *)((char *)i + 1) )
    {
      LOBYTE(v11) = *(_BYTE *)i;
      std::ostream::put(**(_QWORD **)(v9 + 328), v11);
    }
    (*(void (__fastcall **)(_QWORD, _BYTE *, _QWORD))(*(_QWORD *)*a1 + 8LL))(*a1, v37, a3);
    if ( (a3 & 1) != 0 )
    {
      v14 = v38;
      v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 32) + 32LL) + 32LL);
      *(_QWORD *)(v15 + 408) = "log";
      v16 = *(_QWORD *)(v15 + 32);
      cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v16 + 32));
      v17 = *(_QWORD *)(*(_QWORD *)(v16 + 32) + 32LL);
      v18 = *(_QWORD **)(*(_QWORD *)(v17 + 32) + 32LL);
      v19 = v18[61] - 1LL;
      *(_QWORD *)v39 = v18 + 57;
      *(_DWORD *)(*(_QWORD *)(v18[58] + 8 * (((unsigned __int64)(v18[60] + v19) >> 2) & (v18[59] - 1LL)))
                + 4LL * ((*((_DWORD *)v18 + 120) + (_DWORD)v19) & 3)) = 2;
      v20 = a1[7];
      v21 = a1[8];
      *(_QWORD *)v39 = v21;
      while ( v20 != v21 )
      {
        v30 = *(_QWORD *)(v17 + 32);
        cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v30 + 32));
        v31 = (unsigned __int8 *)v20;
        if ( *(_QWORD *)(v20 + 24) >= 0x10uLL )
          v31 = *(unsigned __int8 **)v20;
        tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::String(
          (_QWORD **)(*(_QWORD *)(*(_QWORD *)(v30 + 32) + 32LL) + 328LL),
          v31,
          *(_DWORD *)(v20 + 16));
        v20 += 32LL;
        v21 = *(_QWORD *)v39;
      }
      cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v16 + 32));
      v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 32) + 32LL) + 32LL);
      *(_QWORD *)(v22 + 408) = "errors";
      v23 = *(_QWORD *)(v22 + 32);
      cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v23 + 32));
      v24 = *(_QWORD *)(*(_QWORD *)(v23 + 32) + 32LL);
      v25 = *(_QWORD **)(*(_QWORD *)(v24 + 32) + 32LL);
      v26 = v25[61] - 1LL;
      *(_QWORD *)v39 = v25 + 57;
      *(_DWORD *)(*(_QWORD *)(v25[58] + 8 * (((unsigned __int64)(v25[60] + v26) >> 2) & (v25[59] - 1LL)))
                + 4LL * ((*((_DWORD *)v25 + 120) + (_DWORD)v26) & 3)) = 2;
      v27 = a1[4];
      v28 = a1[5];
      while ( v27 != v28 )
      {
        v32 = *(_QWORD *)(v24 + 32);
        cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v32 + 32));
        wil::save<cereal::JSONOutputArchive>(*(_QWORD *)(*(_QWORD *)(v32 + 32) + 32LL), v27);
        cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v32 + 32));
        v27 += 168LL;
      }
      cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v23 + 32));
    }
    cereal::JSONOutputArchive::~JSONOutputArchive((cereal::JSONOutputArchive *)v37);
    std::stringbuf::str((__int64)v35, a2);
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream<char,std::char_traits<char>,std::allocator<char>>(v36);
    std::ios::~ios<char,std::char_traits<char>>(v36);
    return a2;
  }
  else
  {
    a2[2] = 0LL;
    a2[3] = 15LL;
    *(_BYTE *)a2 = 0;
    return a2;
  }
}
