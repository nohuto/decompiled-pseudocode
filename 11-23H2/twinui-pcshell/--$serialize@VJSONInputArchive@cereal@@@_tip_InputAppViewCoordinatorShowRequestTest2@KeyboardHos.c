/*
 * XREFs of ??$serialize@VJSONInputArchive@cereal@@@_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x180205EE8
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18020C3E0 (-deserialize@-$test_merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTip.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@@Z @ 0x1801AE66C (--$process@V-$NameValuePair@AEA_N@cereal@@@-$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@.c)
 *     ??$process@V?$NameValuePair@AEAH@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAH@1@@Z @ 0x1804150BC (--$process@V-$NameValuePair@AEAH@cereal@@@-$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@000@Z @ 0x180415858 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V12@@-$InputArchive@VJSONInputArchive@cereal@@.c)
 */

__int64 __fastcall KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2::serialize<cereal::JSONInputArchive>(
        __int64 a1,
        __int64 a2)
{
  _QWORD v4[2]; // [rsp+30h] [rbp-9h] BYREF
  _QWORD v5[2]; // [rsp+40h] [rbp+7h] BYREF
  _QWORD v6[2]; // [rsp+50h] [rbp+17h] BYREF
  _QWORD v7[2]; // [rsp+60h] [rbp+27h] BYREF
  _QWORD v8[2]; // [rsp+70h] [rbp+37h] BYREF
  _QWORD v9[2]; // [rsp+80h] [rbp+47h] BYREF

  v6[0] = "refusedByTabTipAdapter";
  v6[1] = a1 + 17;
  v7[0] = "anotherShowRequested";
  v7[1] = a1 + 16;
  v8[0] = "isViewHidden";
  v8[1] = a1 + 10;
  v9[0] = "isViewVisible";
  v9[1] = a1 + 9;
  v5[0] = "keyboardViewType";
  v5[1] = a1 + 12;
  v4[0] = "wasViewInvalidAtBegining";
  v4[1] = a1 + 8;
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>>(a2, v4);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<int &>>(a2, v5);
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
           a2,
           (unsigned int)v9,
           (unsigned int)v8,
           (unsigned int)v7,
           (__int64)v6);
}
