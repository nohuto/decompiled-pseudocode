/*
 * XREFs of ??$serialize@VJSONInputArchive@cereal@@@_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x180205FBC
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18020C460 (-deserialize@-$test_merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipT.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@@Z @ 0x1801AE66C (--$process@V-$NameValuePair@AEA_N@cereal@@@-$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEAH@2@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAH@1@@Z @ 0x18050B864 (--$process@V-$NameValuePair@AEA_N@cereal@@V-$NameValuePair@AEAH@2@@-$InputArchive@VJSONInputArch.c)
 */

__int64 __fastcall KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest::serialize<cereal::JSONInputArchive>(
        __int64 a1,
        __int64 a2)
{
  _QWORD v4[2]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v5[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v6[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v7[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v8[2]; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v9[2]; // [rsp+70h] [rbp-10h] BYREF

  v8[0] = "keyboardViewType";
  v8[1] = a1 + 16;
  v9[0] = "isCloakedValid";
  v9[1] = a1 + 12;
  v7[0] = "isCloaked";
  v7[1] = a1 + 11;
  v6[0] = "isTimeout";
  v6[1] = a1 + 10;
  v5[0] = "isViewInvalidAtEnd";
  v5[1] = a1 + 9;
  v4[0] = "wasViewInvalidAtBegining";
  v4[1] = a1 + 8;
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>>(a2, v4);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>>(a2, v5);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>>(a2, v6);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>>(a2, v7);
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<int &>>(
           a2,
           v9,
           v8);
}
