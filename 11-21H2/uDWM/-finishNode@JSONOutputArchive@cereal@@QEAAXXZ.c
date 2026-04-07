/*
 * XREFs of ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800436C0
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x180011FA0 (-serialize@-$test_merged_data@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@detail.c)
 *     ??$process@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z @ 0x180042840 (--$process@AEAV-$vector@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$allocat.c)
 *     ??$process@AEAV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@Z @ 0x1800428FC (--$process@AEAV-$vector@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@std@@@std@.c)
 *     ?serialize@?$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x1800F6B40 (-serialize@-$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@details@ti.c)
 * Callees:
 *     ?StartArray@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NXZ @ 0x180043774 (-StartArray@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@.c)
 *     ?StartObject@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NXZ @ 0x180043814 (-StartObject@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@.c)
 *     ?EndArray@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NI@Z @ 0x1800438B4 (-EndArray@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@t.c)
 *     ?EndObject@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NI@Z @ 0x180043930 (-EndObject@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@.c)
 */

void __fastcall cereal::JSONOutputArchive::finishNode(cereal::JSONOutputArchive *this)
{
  unsigned __int64 v2; // rdx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  bool v6; // zf

  v2 = *((_QWORD *)this + 60) + *((_QWORD *)this + 61) - 1LL;
  v3 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 58) + 8 * ((*((_QWORD *)this + 59) - 1LL) & (v2 >> 2))) + 4 * (v2 & 3));
  if ( !v3 )
  {
    tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::StartObject((char *)this + 328);
    goto LABEL_11;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
LABEL_11:
    tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::EndObject((char *)this + 328);
    goto LABEL_6;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::StartArray((char *)this + 328);
LABEL_5:
    tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::EndArray((char *)this + 328);
    goto LABEL_6;
  }
  if ( v5 == 1 )
    goto LABEL_5;
LABEL_6:
  v6 = (*((_QWORD *)this + 61))-- == 1LL;
  if ( v6 )
    *((_QWORD *)this + 60) = 0LL;
  v6 = (*((_QWORD *)this + 56))-- == 1LL;
  if ( v6 )
    *((_QWORD *)this + 55) = 0LL;
}
