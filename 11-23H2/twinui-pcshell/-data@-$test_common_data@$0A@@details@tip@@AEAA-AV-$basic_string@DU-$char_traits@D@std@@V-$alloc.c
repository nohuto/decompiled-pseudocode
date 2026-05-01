/*
 * XREFs of ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800BD634
 * Callers:
 *     ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x180098DD0 (-start@-$test_common_data@$0A@@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?evaluate_and_report@?$test_common_data@$0A@@details@tip@@AEAAX_J@Z @ 0x1800BCF8C (-evaluate_and_report@-$test_common_data@$0A@@details@tip@@AEAAX_J@Z.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x1800BD3E0 (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 * Callees:
 *     ??$process@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z @ 0x1800BD4DC (--$process@AEAV-$vector@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$allocat.c)
 *     ??$process@AEAV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@Z @ 0x1800BD588 (--$process@AEAV-$vector@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@std@@@std@.c)
 *     ?u32toa@internal@tip_rapidjson@@YAPEADIPEAD@Z @ 0x1800BE02C (-u32toa@internal@tip_rapidjson@@YAPEADIPEAD@Z.c)
 *     ??0?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800BE484 (--0-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ??1?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x1800BE544 (--1-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ.c)
 *     ?str@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x1800C1538 (-str@-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA-AV-$basic_string@DU-$c.c)
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1B60 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x1800C21BC (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 *     ??1JSONOutputArchive@cereal@@UEAA@XZ @ 0x1800C2604 (--1JSONOutputArchive@cereal@@UEAA@XZ.c)
 *     ??0JSONOutputArchive@cereal@@QEAA@AEAV?$basic_ostream@DU?$char_traits@D@std@@@std@@AEBVOptions@01@@Z @ 0x1800C3DF8 (--0JSONOutputArchive@cereal@@QEAA@AEAV-$basic_ostream@DU-$char_traits@D@std@@@std@@AEBVOptions@0.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall tip::details::test_common_data<0>::data(__int64 **a1, _QWORD *a2, unsigned int a3)
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
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v20; // [rsp+38h] [rbp-340h] BYREF
  _BYTE v21[16]; // [rsp+40h] [rbp-338h] BYREF
  char v22[8]; // [rsp+50h] [rbp-328h] BYREF
  char v23[128]; // [rsp+58h] [rbp-320h] BYREF
  _BYTE v24[104]; // [rsp+D8h] [rbp-2A0h] BYREF
  _BYTE v25[32]; // [rsp+140h] [rbp-238h] BYREF
  __int64 v26; // [rsp+160h] [rbp-218h]
  unsigned int v27; // [rsp+330h] [rbp-48h] BYREF
  char v28; // [rsp+334h] [rbp-44h]
  int v29; // [rsp+338h] [rbp-40h]

  if ( a3 )
  {
    memset_0(v21, 0, 0xF8uLL);
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>(v21);
    memset_0(v25, 0, 0x1F0uLL);
    v27 = 324;
    v28 = 32;
    v29 = 4;
    cereal::JSONOutputArchive::JSONOutputArchive(v25, v22, &v27);
    v6 = (unsigned int *)a1[1] + 5;
    v20 = *v6 << 8;
    v7 = &v20;
    if ( (a3 & 4) != 0 )
      v7 = v6;
    v8 = *(_QWORD *)(*(_QWORD *)(v26 + 32) + 32LL);
    *(_QWORD *)(v8 + 408) = "version";
    v9 = *(_QWORD *)(v8 + 32);
    cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v9 + 32));
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 32) + 32LL);
    v11 = *v7;
    tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
      v10 + 328,
      6LL);
    v14 = tip_rapidjson::internal::u32toa((tip_rapidjson::internal *)v11, (unsigned int)&v27, v12);
    for ( i = &v27; i != (unsigned int *)v14; i = (unsigned int *)((char *)i + 1) )
    {
      LOBYTE(v13) = *(_BYTE *)i;
      std::ostream::put(**(_QWORD **)(v10 + 328), v13);
    }
    (*(void (__fastcall **)(__int64 *, _BYTE *, _QWORD))(**a1 + 8))(*a1, v25, a3);
    if ( (a3 & 1) != 0 )
    {
      v16 = v26;
      v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 32) + 32LL) + 32LL);
      *(_QWORD *)(v17 + 408) = "log";
      cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<std::vector<std::string> &>(
        *(_QWORD *)(v17 + 32),
        a1 + 11);
      v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 32) + 32LL) + 32LL);
      *(_QWORD *)(v18 + 408) = "errors";
      cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<std::vector<wil::StoredFailureInfo> &>(
        *(_QWORD *)(v18 + 32),
        (__int64 *)a1 + 8);
    }
    cereal::JSONOutputArchive::~JSONOutputArchive((cereal::JSONOutputArchive *)v25);
    std::stringbuf::str(v23, a2);
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream<char,std::char_traits<char>,std::allocator<char>>(v24);
    std::ios::~ios<char,std::char_traits<char>>(v24);
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
