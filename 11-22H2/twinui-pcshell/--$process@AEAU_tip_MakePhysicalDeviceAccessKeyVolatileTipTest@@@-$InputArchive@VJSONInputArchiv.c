/*
 * XREFs of ??$process@AEAU_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAXAEAU_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@Z @ 0x180276AF4
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1802788C0 (-deserialize@-$test_merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@details@tip@@.c)
 * Callees:
 *     ?startNode@JSONInputArchive@cereal@@QEAAXXZ @ 0x180162F0C (-startNode@JSONInputArchive@cereal@@QEAAXXZ.c)
 *     ??$?RV?$NameValuePair@AEA_N@cereal@@V01@V01@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONInputArchive@1@$$QEAV?$NameValuePair@AEA_N@1@00@Z @ 0x1801AE5FC (--$-RV-$NameValuePair@AEA_N@cereal@@V01@V01@@-$InputArchive@VJSONInputArchive@cereal@@$0A@@cerea.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest &>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  _QWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF

  cereal::JSONInputArchive::startNode(*(cereal::JSONInputArchive **)(a1 + 32));
  v4 = *(_QWORD *)(a1 + 32);
  v9[0] = "isPhysicalDeviceAccessKeySet";
  v9[1] = a2 + 10;
  v5 = *(_QWORD *)(v4 + 32);
  v10[0] = "isPhysicalDeviceAccessKeyCreated";
  v10[1] = a2 + 9;
  v11[0] = "isPhysicalDeviceAccessKeyDeleted";
  v11[1] = a2 + 8;
  cereal::InputArchive<cereal::JSONInputArchive,0>::operator()<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
    v5,
    v11,
    v10,
    v9);
  v6 = *(_QWORD *)(a1 + 32);
  v7 = *(_QWORD *)(v6 + 344);
  result = v7 - 40;
  *(_QWORD *)(v6 + 344) = v7 - 40;
  ++*(_QWORD *)(v7 - 56);
  return result;
}
