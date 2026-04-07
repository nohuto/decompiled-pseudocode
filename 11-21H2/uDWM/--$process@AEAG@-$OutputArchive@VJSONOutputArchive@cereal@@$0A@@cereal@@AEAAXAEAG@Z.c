/*
 * XREFs of ??$process@AEAG@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAG@Z @ 0x1800F2804
 * Callers:
 *     ??$process@V?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@cereal@@V?$NameValuePair@AEAG@2@V12@V?$NameValuePair@AEAI@2@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@$$QEAV?$NameValuePair@AEAG@1@0$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0@Z @ 0x1800F2C0C (--$process@V-$NameValuePair@AEAV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@ce.c)
 * Callees:
 *     ?u32toa@internal@tip_rapidjson@@YAPEADIPEAD@Z @ 0x180043BA4 (-u32toa@internal@tip_rapidjson@@YAPEADIPEAD@Z.c)
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180043C1C (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x180043E34 (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 */

unsigned int *__fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned short &>(
        __int64 a1,
        unsigned __int16 *a2)
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
    6);
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
