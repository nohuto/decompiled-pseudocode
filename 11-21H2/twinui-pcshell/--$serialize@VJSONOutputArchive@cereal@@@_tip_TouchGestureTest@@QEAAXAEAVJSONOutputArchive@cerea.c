/*
 * XREFs of ??$serialize@VJSONOutputArchive@cereal@@@_tip_TouchGestureTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x18058DB40
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x180590190 (-serialize@-$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@c.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEAI@cereal@@V12@V?$NameValuePair@AEA_N@2@V32@V32@V?$NameValuePair@AEAJ@2@V42@V42@V42@V42@V42@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAI@1@0$$QEAV?$NameValuePair@AEA_N@1@11$$QEAV?$NameValuePair@AEAJ@1@22222@Z @ 0x18058CED0 (--$process@V-$NameValuePair@AEAI@cereal@@V12@V-$NameValuePair@AEA_N@2@V32@V32@V-$Na_ea_18058CED0.c)
 */

__int64 __fastcall _tip_TouchGestureTest::serialize<cereal::JSONOutputArchive>(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _QWORD v5[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v6[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v7[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v8[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v9[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v10[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v11[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v12[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v13[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v14[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v15[2]; // [rsp+100h] [rbp+0h] BYREF

  v5[0] = "cancelResult";
  v5[1] = a1 + 40;
  v6[0] = "finishResultFromFinishSwipe";
  v6[1] = a1 + 36;
  v7[0] = "finishResultFromPointersUp";
  v7[1] = a1 + 32;
  v8[0] = "continueResult";
  v8[1] = a1 + 28;
  v9[0] = "startResultFromStartSwipe";
  v9[1] = a1 + 24;
  v10[0] = "startResultFromPointersDown";
  v10[1] = a1 + 20;
  v11[0] = "finished";
  v11[1] = a1 + 18;
  v12[0] = "hasTarget";
  v12[1] = a1 + 16;
  v13[0] = "hasException";
  v13[1] = a1 + 17;
  v14[0] = "contacts";
  v14[1] = a1 + 12;
  v15[0] = "type";
  v2 = a1 + 8;
  v3 = *(_QWORD *)(a2 + 32);
  v15[1] = v2;
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>>(
           v3,
           (__int64)v15,
           (__int64)v14,
           (int)v13,
           (__int64)v12,
           (__int64)v11,
           (__int64)v10,
           (__int64)v9,
           (__int64)v8,
           (__int64)v7,
           (__int64)v6,
           (__int64)v5);
}
