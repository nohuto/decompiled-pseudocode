/*
 * XREFs of ??$process@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800F296C
 * Callers:
 *     ??$process@V?$NameValuePair@AEAI@cereal@@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@@Z @ 0x1800F2A2C (--$process@V-$NameValuePair@AEAI@cereal@@V-$NameValuePair@AEAV-$basic_string@GU-$char_traits@G@s.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180043C1C (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?String@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NPEBDI_N@Z @ 0x180043D44 (-String@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?wstring_to_string@util@cereal@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@4@@Z @ 0x1800F6F04 (-wstring_to_string@util@cereal@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<std::wstring &>(__int64 a1)
{
  __int64 v2; // rbx
  void **v3; // rdx
  __int64 result; // rax
  void *Src[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v6; // [rsp+40h] [rbp-28h]
  unsigned __int64 v7; // [rsp+48h] [rbp-20h]

  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(a1 + 32));
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  cereal::util::wstring_to_string(Src);
  v3 = Src;
  if ( v7 >= 0x10 )
    v3 = (void **)Src[0];
  result = tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::String(
             v2 + 328,
             (__int64)v3,
             v6);
  if ( v7 >= 0x10 )
    return std::_Deallocate<16,0>(Src[0], v7 + 1);
  return result;
}
