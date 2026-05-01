/*
 * XREFs of ??$process@AEAU_tip_DesktopTouchKeyboardShowOnTryShowV2@TouchKeyboardExperienceTip@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAU_tip_DesktopTouchKeyboardShowOnTryShowV2@TouchKeyboardExperienceTip@@@Z @ 0x18046E3EC
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_DesktopTouchKeyboardShowOnTryShowV2@TouchKeyboardExperienceTip@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x18047E9B0 (-serialize@-$test_merged_data@U_tip_DesktopTouchKeyboardShowOnTryShowV2@TouchKeyboardExperienceT.c)
 * Callees:
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087AE0 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ??$process@AEAI@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z @ 0x18034A01C (--$process@AEAI@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z.c)
 *     ??$process@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@cereal@@V?$NameValuePair@AEAI@2@V?$NameValuePair@AEAW4Status@TouchKeyboardExperienceTip@@@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAW4Status@TouchKeyboardExperienceTip@@@1@@Z @ 0x18046E584 (--$process@V-$NameValuePair@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@_ea_18046E584.c)
 */

void __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV2 &>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF

  cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(a1 + 32));
  v6[0] = "status";
  v6[1] = a2 + 52;
  v7[0] = "viewKind";
  v7[1] = a2 + 48;
  v8[0] = "foregroundAppId";
  v8[1] = a2 + 16;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL);
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v5 + 408) = "applicationViewId";
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned int &>(*(_QWORD *)(v5 + 32), (_DWORD *)(a2 + 8));
  ((void (__fastcall *)(_QWORD, _QWORD *, _QWORD *, _QWORD *))cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<enum TouchKeyboardExperienceTip::Status &>>)(
    *(_QWORD *)(v4 + 32),
    v8,
    v7,
    v6);
  cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(a1 + 32));
}
