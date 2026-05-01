/*
 * XREFs of ??$?RV?$NameValuePair@AEAU_tip_SetPhysicalDeviceAccessRegKeyTipTest@@@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONInputArchive@1@$$QEAV?$NameValuePair@AEAU_tip_SetPhysicalDeviceAccessRegKeyTipTest@@@1@@Z @ 0x18027686C
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x180278900 (-deserialize@-$test_merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@@details@tip@@EEAAXA.c)
 * Callees:
 *     ?startNode@JSONInputArchive@cereal@@QEAAXXZ @ 0x180162F0C (-startNode@JSONInputArchive@cereal@@QEAAXXZ.c)
 *     ??$?RV?$NameValuePair@AEA_N@cereal@@V01@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONInputArchive@1@$$QEAV?$NameValuePair@AEA_N@1@0@Z @ 0x18041BC6C (--$-RV-$NameValuePair@AEA_N@cereal@@V01@@-$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@Q.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::operator()<cereal::NameValuePair<_tip_SetPhysicalDeviceAccessRegKeyTipTest &>>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rdi
  cereal::JSONInputArchive *v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  v4 = *(cereal::JSONInputArchive **)(v3 + 32);
  *(_QWORD *)(v3 + 304) = *a2;
  v5 = a2[1];
  cereal::JSONInputArchive::startNode(v4);
  v6 = *(_QWORD *)(v3 + 32);
  v11[0] = "isPhysicalDeviceAccessKeySet";
  v11[1] = v5 + 9;
  v7 = *(_QWORD *)(v6 + 32);
  v12[0] = "isPhysicalDeviceAccessKeyCreated";
  v12[1] = v5 + 8;
  cereal::InputArchive<cereal::JSONInputArchive,0>::operator()<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
    v7,
    v12,
    v11);
  v8 = *(_QWORD *)(v3 + 32);
  v9 = *(_QWORD *)(v8 + 344);
  *(_QWORD *)(v8 + 344) = v9 - 40;
  ++*(_QWORD *)(v9 - 56);
  return *(_QWORD *)(a1 + 32);
}
