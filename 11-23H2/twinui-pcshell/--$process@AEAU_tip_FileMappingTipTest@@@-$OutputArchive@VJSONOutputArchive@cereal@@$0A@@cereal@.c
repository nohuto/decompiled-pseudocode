/*
 * XREFs of ??$process@AEAU_tip_FileMappingTipTest@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAU_tip_FileMappingTipTest@@@Z @ 0x18070CE20
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_FileMappingTipTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x18071C900 (-serialize@-$test_merged_data@U_tip_FileMappingTipTest@@@details@tip@@EEAAXAEAVJSONOutputArchive.c)
 * Callees:
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1AA4 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ??$process@AEA_K@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEA_K@Z @ 0x18019C508 (--$process@AEA_K@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEA_K@Z.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEA_K@2@V?$NameValuePair@AEAH@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEA_K@1@$$QEAV?$NameValuePair@AEAH@1@@Z @ 0x18070D3C0 (--$process@V-$NameValuePair@AEA_N@cereal@@V-$NameValuePair@AEA_K@2@V-$NameValuePair@AEAH@2@@-$Ou.c)
 */

void __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<_tip_FileMappingTipTest &>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF

  cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(a1 + 32));
  v6[0] = "state";
  v6[1] = a2 + 32;
  v7[0] = "updateTimestamp";
  v7[1] = a2 + 24;
  v8[0] = "isValidBuffer";
  v8[1] = a2 + 16;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL);
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v5 + 408) = "appWindow";
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned __int64 &>(
    *(_QWORD *)(v5 + 32),
    (unsigned __int64 *)(a2 + 8));
  ((void (__fastcall *)(_QWORD, _QWORD *, _QWORD *, _QWORD *))cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<int &>>)(
    *(_QWORD *)(v4 + 32),
    v8,
    v7,
    v6);
  cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(a1 + 32));
}
