/*
 * XREFs of ??$serialize@VJSONOutputArchive@cereal@@@_tip_SwipeDashboard@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x1805BC6FC
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_SwipeDashboard@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x1805BE7A0 (-serialize@-$test_merged_data@U_tip_SwipeDashboard@@@details@tip@@EEAAXAEAVJSONOutputArchive@cer.c)
 * Callees:
 *     ??$?RV?$NameValuePair@AEA_N@cereal@@V01@V01@V01@V01@V01@V01@V01@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEA_N@1@0000000@Z @ 0x1803A0824 (--$-RV-$NameValuePair@AEA_N@cereal@@V01@V01@V01@V01@V01@V01@V01@@-$OutputArchive@VJSONOutputArch.c)
 */

__int64 __fastcall _tip_SwipeDashboard::serialize<cereal::JSONOutputArchive>(__int64 a1, __int64 a2)
{
  _QWORD v3[2]; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v4[2]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v5[2]; // [rsp+70h] [rbp-9h] BYREF
  _QWORD v6[2]; // [rsp+80h] [rbp+7h] BYREF
  _QWORD v7[2]; // [rsp+90h] [rbp+17h] BYREF
  _QWORD v8[2]; // [rsp+A0h] [rbp+27h] BYREF
  _QWORD v9[2]; // [rsp+B0h] [rbp+37h] BYREF
  _QWORD v10[2]; // [rsp+C0h] [rbp+47h] BYREF

  v3[0] = "cancelSwipeFailed";
  v3[1] = a1 + 15;
  v4[0] = "commitSwipeFailed";
  v4[1] = a1 + 14;
  v5[0] = "continueSwipeFailed";
  v5[1] = a1 + 13;
  v6[0] = "startSwipeFailed";
  v6[1] = a1 + 12;
  v7[0] = "isSwipeExtensionNull";
  v7[1] = a1 + 11;
  v8[0] = "isHidden";
  v8[1] = a1 + 10;
  v9[0] = "isVisible";
  v9[1] = a1 + 9;
  v10[0] = "canceled";
  v10[1] = a1 + 8;
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
           a2,
           v10,
           v9,
           v8,
           v7,
           (__int64)v6,
           (__int64)v5,
           (__int64)v4,
           (__int64)v3);
}
