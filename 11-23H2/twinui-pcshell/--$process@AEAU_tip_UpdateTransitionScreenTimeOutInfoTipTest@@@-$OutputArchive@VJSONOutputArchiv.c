/*
 * XREFs of ??$process@AEAU_tip_UpdateTransitionScreenTimeOutInfoTipTest@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAU_tip_UpdateTransitionScreenTimeOutInfoTipTest@@@Z @ 0x18070CEE8
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x18071CBC0 (-serialize@-$test_merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@@details@tip@@EEAA.c)
 * Callees:
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1AA4 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ??$process@V?$NameValuePair@AEAG@cereal@@V?$NameValuePair@AEA_N@2@V32@V?$NameValuePair@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAG@1@$$QEAV?$NameValuePair@AEA_N@1@1$$QEAV?$NameValuePair@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@1@@Z @ 0x18070CF9C (--$process@V-$NameValuePair@AEAG@cereal@@V-$NameValuePair@AEA_N@2@V32@V-$NameValuePair@AEAW4Clou.c)
 */

void __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<_tip_UpdateTransitionScreenTimeOutInfoTipTest &>(
        __int64 a1,
        __int64 a2)
{
  _QWORD v4[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v5[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v6[2]; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v7[2]; // [rsp+60h] [rbp-10h] BYREF

  cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(a1 + 32));
  v4[0] = "state";
  v4[1] = a2 + 12;
  v5[0] = "isTransitionScreenShown";
  v5[1] = a2 + 10;
  v6[0] = "isTransitionScreenNotified";
  v6[1] = a2 + 11;
  v7[0] = "newTimeOut";
  v7[1] = a2 + 8;
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<unsigned short &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<enum winrt::Windows::Internal::Shell::CloudPCState &>>(
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL),
    (unsigned int)v7,
    (unsigned int)v6,
    (unsigned int)v5,
    (__int64)v4);
  cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(a1 + 32));
}
