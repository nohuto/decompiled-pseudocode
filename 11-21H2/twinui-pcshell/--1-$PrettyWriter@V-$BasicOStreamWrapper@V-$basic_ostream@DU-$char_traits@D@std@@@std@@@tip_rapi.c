/*
 * XREFs of ??1?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA@XZ @ 0x18034C9DC
 * Callers:
 *     _tip::details::test_common_data_0_::data_::_1_::dtor$8 @ 0x180218960 (_tip--details--test_common_data_0_--data_--_1_--dtor$8.c)
 *     _cereal::JSONOutputArchive::JSONOutputArchive_::_1_::dtor$1 @ 0x1802201F3 (_cereal--JSONOutputArchive--JSONOutputArchive_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::~PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>(
        __int64 a1)
{
  free(*(void **)(a1 + 24));
  operator delete(*(void **)(a1 + 16));
}
