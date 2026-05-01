/*
 * XREFs of ?saveValue@JSONOutputArchive@cereal@@QEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800E6418
 * Callers:
 *     ??$process@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x180175AE8 (--$process@V-$NameValuePair@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@ce.c)
 *     ??$process@V?$NameValuePair@AEAI@cereal@@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@@Z @ 0x18034A628 (--$process@V-$NameValuePair@AEAI@cereal@@V-$NameValuePair@AEAV-$basic_string@GU-$char_traits@G@s.c)
 *     ??$process@V?$NameValuePair@AEAI@cereal@@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$NameValuePair@AEAW4Status@TouchKeyboardExperienceTip@@@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$NameValuePair@AEAW4Status@TouchKeyboardExperienceTip@@@1@@Z @ 0x18046E4B4 (--$process@V-$NameValuePair@AEAI@cereal@@V-$NameValuePair@AEAV-$basic_string@GU-$ch_ea_18046E4B4.c)
 *     ??$process@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@cereal@@V?$NameValuePair@AEAI@2@V?$NameValuePair@AEAW4Status@TouchKeyboardExperienceTip@@@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAW4Status@TouchKeyboardExperienceTip@@@1@@Z @ 0x18046E584 (--$process@V-$NameValuePair@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@_ea_18046E584.c)
 *     ?serialize@?$test_merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x18058C2B0 (-serialize@-$test_merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@.c)
 * Callees:
 *     ?String@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NPEBDI_N@Z @ 0x180087B90 (-String@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip.c)
 *     ?wstring_to_string@util@cereal@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@4@@Z @ 0x1800E64C4 (-wstring_to_string@util@cereal@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E911C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall cereal::JSONOutputArchive::saveValue(__int64 a1, _QWORD *a2)
{
  void *v3; // rax
  unsigned __int8 *v4; // rdx
  unsigned __int64 v5; // rdx
  void *v6; // rcx
  unsigned __int64 v7; // [rsp+20h] [rbp-40h] BYREF
  void *v8[2]; // [rsp+28h] [rbp-38h] BYREF
  void *Src[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+48h] [rbp-18h]
  unsigned __int64 v11; // [rsp+50h] [rbp-10h]

  v3 = (void *)a2[2];
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  v8[0] = a2;
  v8[1] = v3;
  cereal::util::wstring_to_string(Src);
  v4 = (unsigned __int8 *)Src;
  if ( v11 >= 0x10 )
    v4 = (unsigned __int8 *)Src[0];
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::String(
    (_QWORD **)(a1 + 328),
    v4,
    v10);
  if ( v11 >= 0x10 )
  {
    v5 = v11 + 1;
    v7 = v11 + 1;
    v6 = Src[0];
    v8[0] = Src[0];
    if ( v11 + 1 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v8, &v7);
      v5 = v7;
      v6 = v8[0];
    }
    operator delete(v6, v5);
  }
}
