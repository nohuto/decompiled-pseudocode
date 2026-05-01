/*
 * XREFs of ??$serialize@VJSONInputArchive@cereal@@@_tip_InputAppActivationTest@KeyboardHostingTipTests@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18050BA48
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18051CCC0 (-deserialize@-$test_merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@details@t.c)
 * Callees:
 *     ??$?RV?$NameValuePair@AEA_N@cereal@@V01@V?$NameValuePair@AEAH@1@V01@V01@V01@V01@V01@V01@V01@V01@V?$NameValuePair@AEAJ@1@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONInputArchive@1@$$QEAV?$NameValuePair@AEA_N@1@0$$QEAV?$NameValuePair@AEAH@1@00000000$$QEAV?$NameValuePair@AEAJ@1@@Z @ 0x180204B08 (--$-RV-$NameValuePair@AEA_N@cereal@@V01@V-$NameValuePair@AEAH@1@V01@V01@V01@V01@V01@V01@V01@V01@.c)
 */

__int64 __fastcall KeyboardHostingTipTests::_tip_InputAppActivationTest::serialize<cereal::JSONInputArchive>(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v4[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v5[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v6[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v7[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v8[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v9[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v10[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v11[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v12[2]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v13[2]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v14[2]; // [rsp+120h] [rbp+20h] BYREF

  v3[0] = "hr";
  v3[1] = a1 + 28;
  v4[0] = "isConnectedStandby";
  v4[1] = a1 + 24;
  v5[0] = "dontRelaunch";
  v5[1] = a1 + 20;
  v6[0] = "getInputAppIdFailed";
  v6[1] = a1 + 22;
  v7[0] = "anotherActivationStarted";
  v7[1] = a1 + 21;
  v8[0] = "relaunchAfterFewSeconds";
  v8[1] = a1 + 19;
  v9[0] = "relaunchImmediately";
  v9[1] = a1 + 18;
  v10[0] = "sessionShuttingDown";
  v10[1] = a1 + 17;
  v11[0] = "retryCountMaxReached";
  v11[1] = a1 + 16;
  v12[0] = "retryCount";
  v12[1] = a1 + 12;
  v13[0] = "activated";
  v13[1] = a1 + 9;
  v14[0] = "inputAppIdInvalid";
  v14[1] = a1 + 8;
  return cereal::InputArchive<cereal::JSONInputArchive,0>::operator()<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<int &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<long &>>(
           a2,
           v14,
           v13,
           (__int64)v12,
           v11,
           v10,
           v9,
           v8,
           v7,
           (__int64)v6,
           (__int64)v5,
           (__int64)v4,
           (__int64)v3);
}
