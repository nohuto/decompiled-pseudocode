/*
 * XREFs of ??$process@AEAK@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAK@Z @ 0x1801C30E0
 * Callers:
 *     ??$?RV?$NameValuePair@AEAU?$test_data_metrics@U_tip_WidgetsAppInstallTIP@@@details@tip@@@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEAU?$test_data_metrics@U_tip_WidgetsAppInstallTIP@@@details@tip@@@1@@Z @ 0x1801C1778 (--$-RV-$NameValuePair@AEAU-$test_data_metrics@U_tip_WidgetsAppInstallTIP@@@details@tip@@@cereal@.c)
 *     ??$?RV?$NameValuePair@AEA_K@cereal@@V?$NameValuePair@AEAK@1@V?$NameValuePair@AEAJ@1@V?$NameValuePair@AEA_N@1@V41@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V51@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEA_K@1@$$QEAV?$NameValuePair@AEAK@1@$$QEAV?$NameValuePair@AEAJ@1@$$QEAV?$NameValuePair@AEA_N@1@3$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@4@Z @ 0x1801C188C (--$-RV-$NameValuePair@AEA_K@cereal@@V-$NameValuePair@AEAK@1@V-$NameValuePair@AEAJ@1@V-$NameValue.c)
 * Callees:
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800874B0 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x180087E30 (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 *     ?u32toa@internal@tip_rapidjson@@YAPEADIPEAD@Z @ 0x180089160 (-u32toa@internal@tip_rapidjson@@YAPEADIPEAD@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

unsigned int *__fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned long &>(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v4; // rsi
  char *v5; // r8
  __int64 v6; // rdx
  char *v7; // rdi
  unsigned int *v8; // rbx
  unsigned int *result; // rax
  _BYTE v10[16]; // [rsp+20h] [rbp-28h] BYREF

  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(a1 + 32));
  LODWORD(a2) = *a2;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    (__int64 **)(v4 + 328),
    6LL);
  v7 = tip_rapidjson::internal::u32toa((tip_rapidjson::internal *)(unsigned int)a2, v10, v5);
  v8 = (unsigned int *)v10;
  result = (unsigned int *)v10;
  if ( v10 != v7 )
  {
    do
    {
      LOBYTE(v6) = *(_BYTE *)v8;
      result = (unsigned int *)std::ostream::put(**(_QWORD **)(v4 + 328), v6);
      v8 = (unsigned int *)((char *)v8 + 1);
    }
    while ( v8 != (unsigned int *)v7 );
  }
  return result;
}
