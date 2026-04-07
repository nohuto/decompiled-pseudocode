/*
 * XREFs of ?String@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NPEBDI_N@Z @ 0x180043D44
 * Callers:
 *     ??$process@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z @ 0x180042840 (--$process@AEAV-$vector@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$allocat.c)
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180043C1C (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ??$process@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800F296C (--$process@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$OutputArchive@VJS.c)
 *     ??$process@V?$NameValuePair@AEAI@cereal@@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@@Z @ 0x1800F2A2C (--$process@V-$NameValuePair@AEAI@cereal@@V-$NameValuePair@AEAV-$basic_string@GU-$char_traits@G@s.c)
 *     ??$process@V?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@cereal@@V?$NameValuePair@AEAG@2@V12@V?$NameValuePair@AEAI@2@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@$$QEAV?$NameValuePair@AEAG@1@0$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0@Z @ 0x1800F2C0C (--$process@V-$NameValuePair@AEAV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@ce.c)
 *     ??$process@V?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@cereal@@V?$NameValuePair@AEAI@2@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0@Z @ 0x1800F2CE4 (--$process@V-$NameValuePair@AEAV-$basic_string@DU-$char_traits@D@std@@V-$allocator@_ea_1800F2CE4.c)
 * Callees:
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x180043E34 (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 */

__int64 __fastcall tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::String(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    a1,
    5LL);
  return tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteString(
           a1,
           a2,
           a3);
}
