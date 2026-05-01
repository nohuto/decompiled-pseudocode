/*
 * XREFs of ??$serialize@VJSONOutputArchive@cereal@@@_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x180206178
 * Callers:
 *     ??$?RV?$NameValuePair@AEAU_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEAU_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@@1@@Z @ 0x180204A98 (--$-RV-$NameValuePair@AEAU_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@@.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@@Z @ 0x18017E1EC (--$process@V-$NameValuePair@AEA_N@cereal@@@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cerea.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEAH@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAH@1@@Z @ 0x18050B960 (--$process@V-$NameValuePair@AEA_N@cereal@@V-$NameValuePair@AEAH@2@@-$OutputArchive@VJSONOutputAr.c)
 */

__int64 __fastcall KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest::serialize<cereal::JSONOutputArchive>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rbx
  _QWORD v9[2]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v11[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v12[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v13[2]; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v14[2]; // [rsp+70h] [rbp-10h] BYREF

  v2 = *(_QWORD *)(a2 + 32);
  v13[0] = "keyboardViewType";
  v13[1] = a1 + 16;
  v14[0] = "isCloakedValid";
  v14[1] = a1 + 12;
  v12[0] = "isCloaked";
  v12[1] = a1 + 11;
  v11[0] = "isTimeout";
  v11[1] = a1 + 10;
  v10[0] = "isViewInvalidAtEnd";
  v10[1] = a1 + 9;
  v9[0] = "wasViewInvalidAtBegining";
  v3 = a1 + 8;
  v4 = *(_QWORD *)(v2 + 32);
  v9[1] = v3;
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>>(v4, v9);
  v5 = *(_QWORD *)(v2 + 32);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>>(*(_QWORD *)(v5 + 32), v10);
  v6 = *(_QWORD *)(v5 + 32);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>>(*(_QWORD *)(v6 + 32), v11);
  v7 = *(_QWORD *)(v6 + 32);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>>(*(_QWORD *)(v7 + 32), v12);
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<int &>>(
           *(_QWORD *)(v7 + 32),
           v14,
           v13);
}
