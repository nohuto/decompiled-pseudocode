/*
 * XREFs of ??$process@AEAH@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAH@Z @ 0x180023518
 * Callers:
 *     ??$serialize@VJSONOutputArchive@cereal@@@_tip_TaskViewShowTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x180023460 (--$serialize@VJSONOutputArchive@cereal@@@_tip_TaskViewShowTest@@QEAAXAEAVJSONOutputArchive@cerea.c)
 *     ??$process@V?$NameValuePair@AEAH@cereal@@V12@V?$NameValuePair@AEA_N@2@V32@V32@V32@V32@V32@V32@V32@V32@V32@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAH@1@0$$QEAV?$NameValuePair@AEA_N@1@111111111@Z @ 0x18034A3A8 (--$process@V-$NameValuePair@AEAH@cereal@@V12@V-$NameValuePair@AEA_N@2@V32@V32@V32@V_ea_18034A3A8.c)
 *     ??$process@V?$NameValuePair@AEAH@cereal@@V12@V?$NameValuePair@AEA_N@2@V32@V32@V32@V32@V32@V32@V32@V32@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAH@1@0$$QEAV?$NameValuePair@AEA_N@1@11111111@Z @ 0x180352BC0 (--$process@V-$NameValuePair@AEAH@cereal@@V12@V-$NameValuePair@AEA_N@2@V32@V32@V32@V_ea_180352BC0.c)
 *     ??$serialize@VJSONOutputArchive@cereal@@@_tip_ColumnSmartFillTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x1805A1854 (--$serialize@VJSONOutputArchive@cereal@@@_tip_ColumnSmartFillTest@@QEAAXAEAVJSONOutputArchive@ce.c)
 *     ??$serialize@VJSONOutputArchive@cereal@@@_tip_SnapAssistShowTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x1805FFF10 (--$serialize@VJSONOutputArchive@cereal@@@_tip_SnapAssistShowTest@@QEAAXAEAVJSONOutputArchive@cer.c)
 * Callees:
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800874B0 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x180087E30 (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 *     ?u32toa@internal@tip_rapidjson@@YAPEADIPEAD@Z @ 0x180089160 (-u32toa@internal@tip_rapidjson@@YAPEADIPEAD@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

char *__fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<int &>(__int64 a1, int *a2)
{
  int v4; // edi
  __int64 v5; // rsi
  char *v6; // r8
  char *v7; // rdx
  __int64 v8; // rdx
  char *v9; // rdi
  char *v10; // rbx
  char *result; // rax
  char v12; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+21h] [rbp-27h] BYREF

  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(a1 + 32));
  v4 = *a2;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    v5 + 328,
    6LL);
  v7 = &v12;
  if ( v4 < 0 )
  {
    v12 = 45;
    v4 = -v4;
    v7 = (char *)&v13;
  }
  v9 = tip_rapidjson::internal::u32toa((tip_rapidjson::internal *)(unsigned int)v4, (unsigned int)v7, v6);
  v10 = &v12;
  for ( result = &v12; v10 != v9; ++v10 )
  {
    LOBYTE(v8) = *v10;
    result = (char *)std::ostream::put(**(_QWORD **)(v5 + 328), v8);
  }
  return result;
}
