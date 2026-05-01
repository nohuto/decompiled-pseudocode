/*
 * XREFs of ??$?RV?$NameValuePair@AEAU_tip_SetPhysicalDeviceAccessRegKeyTipTest@@@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEAU_tip_SetPhysicalDeviceAccessRegKeyTipTest@@@1@@Z @ 0x180276914
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x180278C20 (-serialize@-$test_merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@@details@tip@@EEAAXAEA.c)
 * Callees:
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C18D8 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1AA4 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ??$?RV?$NameValuePair@AEA_N@cereal@@V01@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEA_N@1@0@Z @ 0x18041BD98 (--$-RV-$NameValuePair@AEA_N@cereal@@V01@@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<cereal::NameValuePair<_tip_SetPhysicalDeviceAccessRegKeyTipTest &>>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // r9
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL);
  v4 = *(_QWORD *)(v3 + 32);
  *(_QWORD *)(v3 + 408) = *a2;
  v5 = a2[1];
  cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v4 + 32));
  v6 = *(_QWORD *)(v4 + 32);
  v9[0] = "isPhysicalDeviceAccessKeySet";
  v9[1] = v5 + 9;
  v7 = *(_QWORD *)(v6 + 32);
  v10[0] = "isPhysicalDeviceAccessKeyCreated";
  v10[1] = v5 + 8;
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
    v7,
    v10,
    v9);
  cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v4 + 32));
  return *(_QWORD *)(a1 + 32);
}
