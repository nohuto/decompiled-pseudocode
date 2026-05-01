/*
 * XREFs of ??$serialize@VJSONInputArchive@cereal@@@_tip_TouchGestureTest@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18064FA10
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x180652420 (-deserialize@-$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@EEAAXAEAVJSONInputArchive@.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEAI@cereal@@V12@V?$NameValuePair@AEA_N@2@V32@V32@V?$NameValuePair@AEAJ@2@V42@V42@V42@V42@V42@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAI@1@0$$QEAV?$NameValuePair@AEA_N@1@11$$QEAV?$NameValuePair@AEAJ@1@22222@Z @ 0x18064EBAC (--$process@V-$NameValuePair@AEAI@cereal@@V12@V-$NameValuePair@AEA_N@2@V32@V32@V-$NameValuePair@A.c)
 */

__int64 __fastcall _tip_TouchGestureTest::serialize<cereal::JSONInputArchive>(__int64 a1, __int64 a2)
{
  _QWORD v3[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v4[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v5[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v6[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v7[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v8[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v9[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v10[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v11[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v12[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v13[2]; // [rsp+100h] [rbp+0h] BYREF

  v3[0] = "cancelResult";
  v3[1] = a1 + 40;
  v4[0] = "finishResultFromFinishSwipe";
  v4[1] = a1 + 36;
  v5[0] = "finishResultFromPointersUp";
  v5[1] = a1 + 32;
  v6[0] = "continueResult";
  v6[1] = a1 + 28;
  v7[0] = "startResultFromStartSwipe";
  v7[1] = a1 + 24;
  v8[0] = "startResultFromPointersDown";
  v8[1] = a1 + 20;
  v9[0] = "finished";
  v9[1] = a1 + 18;
  v10[0] = "hasTarget";
  v10[1] = a1 + 16;
  v11[0] = "hasException";
  v11[1] = a1 + 17;
  v12[0] = "contacts";
  v12[1] = a1 + 12;
  v13[0] = "type";
  v13[1] = a1 + 8;
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>>(
           a2,
           v13,
           (int)v12,
           (int)v11,
           (__int64)v10,
           (__int64)v9,
           (__int64)v8,
           (__int64)v7,
           (__int64)v6,
           (__int64)v5,
           (__int64)v4,
           (__int64)v3);
}
