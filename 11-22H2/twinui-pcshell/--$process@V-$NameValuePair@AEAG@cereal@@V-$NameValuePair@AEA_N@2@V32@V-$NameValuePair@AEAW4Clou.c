/*
 * XREFs of ??$process@V?$NameValuePair@AEAG@cereal@@V?$NameValuePair@AEA_N@2@V32@V?$NameValuePair@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAG@1@$$QEAV?$NameValuePair@AEA_N@1@1$$QEAV?$NameValuePair@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@1@@Z @ 0x18070CF9C
 * Callers:
 *     ??$process@AEAU_tip_UpdateTransitionScreenTimeOutInfoTipTest@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAU_tip_UpdateTransitionScreenTimeOutInfoTipTest@@@Z @ 0x18070CEE8 (--$process@AEAU_tip_UpdateTransitionScreenTimeOutInfoTipTest@@@-$OutputArchive@VJSONOutputArchiv.c)
 * Callees:
 *     ?WriteInt@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAA_NH@Z @ 0x18004074C (-WriteInt@-$Writer@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip_rap.c)
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1B60 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x1800C21BC (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<unsigned short &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<enum winrt::Windows::Internal::Shell::CloudPCState &>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // r11
  __int64 v9; // rdi
  unsigned __int16 *v10; // rbx
  int v11; // esi
  __int64 v12; // rbx

  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL);
  v9 = *(_QWORD *)(v8 + 32);
  *(_QWORD *)(v8 + 408) = *a2;
  v10 = (unsigned __int16 *)a2[1];
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v9 + 32));
  v11 = *v10;
  v12 = *(_QWORD *)(*(_QWORD *)(v9 + 32) + 32LL);
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    (__int64 **)(v12 + 328),
    6LL);
  tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteInt(
    (_QWORD **)(v12 + 328),
    v11);
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<enum winrt::Windows::Internal::Shell::CloudPCState &>>(
           *(_QWORD *)(a1 + 32),
           a3,
           a4,
           a5);
}
