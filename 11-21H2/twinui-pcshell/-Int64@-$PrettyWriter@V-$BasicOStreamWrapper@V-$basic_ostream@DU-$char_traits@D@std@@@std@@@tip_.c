/*
 * XREFs of ?Int64@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_N_J@Z @ 0x18044AE40
 * Callers:
 *     ??$process@V?$NameValuePair@AEA_J@cereal@@V?$NameValuePair@AEA_N@2@V32@V32@V32@V32@V32@V?$NameValuePair@AEAJ@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_J@1@$$QEAV?$NameValuePair@AEA_N@1@11111$$QEAV?$NameValuePair@AEAJ@1@@Z @ 0x1801AA054 (--$process@V-$NameValuePair@AEA_J@cereal@@V-$NameValuePair@AEA_N@2@V32@V32@V32@V32@_ea_1801AA054.c)
 * Callees:
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x180087E30 (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 *     ?u64toa@internal@tip_rapidjson@@YAPEAD_KPEAD@Z @ 0x18015BFE4 (-u64toa@internal@tip_rapidjson@@YAPEAD_KPEAD@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

char __fastcall tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::Int64(
        __int64 **a1,
        signed __int64 a2)
{
  char *v4; // r8
  unsigned __int64 *v5; // rdx
  __int64 v6; // rdx
  char *v7; // rdi
  char *i; // rbx
  char v10; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+21h] [rbp-27h] BYREF

  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    a1,
    6LL);
  v5 = (unsigned __int64 *)&v10;
  if ( a2 < 0 )
  {
    v10 = 45;
    a2 = -a2;
    v5 = &v11;
  }
  v7 = tip_rapidjson::internal::u64toa(a2, v5, v4);
  for ( i = &v10; i != v7; ++i )
  {
    LOBYTE(v6) = *i;
    std::ostream::put(**a1, v6);
  }
  return 1;
}
