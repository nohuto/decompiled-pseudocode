/*
 * XREFs of ??$?RAEAU_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@AEAU_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@Z @ 0x1802767C4
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x180278B60 (-serialize@-$test_merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@details@tip@@EE.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@00@Z @ 0x180054A44 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@@-$OutputArchive@VJSONOutputArchive@cereal@@$0.c)
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C18D8 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1AA4 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest &>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rdi
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v2 + 32));
  v6[0] = "isPhysicalDeviceAccessKeySet";
  v6[1] = a2 + 10;
  v7[0] = "isPhysicalDeviceAccessKeyCreated";
  v7[1] = a2 + 9;
  v8[0] = "isPhysicalDeviceAccessKeyDeleted";
  v8[1] = a2 + 8;
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 32) + 32LL) + 32LL),
    v8,
    v7,
    v6);
  cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v2 + 32));
  return *(_QWORD *)(a1 + 32);
}
