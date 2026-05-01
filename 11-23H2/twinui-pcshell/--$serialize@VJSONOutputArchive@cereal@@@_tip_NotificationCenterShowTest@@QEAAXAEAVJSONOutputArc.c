/*
 * XREFs of ??$serialize@VJSONOutputArchive@cereal@@@_tip_NotificationCenterShowTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x1800540E4
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_NotificationCenterShowTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x180041170 (-serialize@-$test_merged_data@U_tip_NotificationCenterShowTest@@@details@tip@@EEAAXAEAVJSONOutpu.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEAH@cereal@@V12@V?$NameValuePair@AEA_N@2@V32@V32@V32@V32@V32@V32@V32@V32@V32@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAH@1@0$$QEAV?$NameValuePair@AEA_N@1@111111111@Z @ 0x180054254 (--$process@V-$NameValuePair@AEAH@cereal@@V12@V-$NameValuePair@AEA_N@2@V32@V32@V32@V32@V32@V32@V3.c)
 */

__int64 __fastcall _tip_NotificationCenterShowTest::serialize<cereal::JSONOutputArchive>(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _QWORD v5[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v6[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v7[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v8[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v9[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v10[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v11[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v12[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v13[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v14[2]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v15[2]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v16[2]; // [rsp+120h] [rbp+20h] BYREF

  v5[0] = "viewVisible";
  v5[1] = a1 + 25;
  v6[0] = "viewRendered";
  v6[1] = a1 + 24;
  v7[0] = "viewRenderedEmpty";
  v7[1] = a1 + 23;
  v8[0] = "viewCold";
  v8[1] = a1 + 22;
  v9[0] = "appCold";
  v9[1] = a1 + 21;
  v10[0] = "vsDeploy";
  v10[1] = a1 + 20;
  v11[0] = "canceledShellNotReady";
  v11[1] = a1 + 19;
  v12[0] = "canceledByPolicy";
  v12[1] = a1 + 18;
  v13[0] = "canceledByReinvoke";
  v13[1] = a1 + 17;
  v14[0] = "canceledByDismiss";
  v14[1] = a1 + 16;
  v15[0] = "invokeMethod";
  v15[1] = a1 + 12;
  v16[0] = "inputType";
  v2 = a1 + 8;
  v3 = *(_QWORD *)(a2 + 32);
  v16[1] = v2;
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<int &>,cereal::NameValuePair<int &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
           v3,
           (unsigned int)v16,
           (unsigned int)v15,
           (unsigned int)v14,
           (__int64)v13,
           (__int64)v12,
           (__int64)v11,
           (__int64)v10,
           (__int64)v9,
           (__int64)v8,
           (__int64)v7,
           (__int64)v6,
           (__int64)v5);
}
