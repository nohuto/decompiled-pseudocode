/*
 * XREFs of ??$serialize@VJSONInputArchive@cereal@@@_tip_TouchEdgeGestureTest@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x180653C94
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_TouchEdgeGestureTest@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x180655EC0 (-deserialize@-$test_merged_data@U_tip_TouchEdgeGestureTest@@@details@tip@@EEAAXAEAVJSONInputArch.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEA_K@cereal@@V?$NameValuePair@AEAM@2@V32@V?$NameValuePair@AEA_N@2@V42@V42@V?$NameValuePair@AEAI@2@V52@V?$NameValuePair@AEAJ@2@V62@V62@V62@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_K@1@$$QEAV?$NameValuePair@AEAM@1@1$$QEAV?$NameValuePair@AEA_N@1@22$$QEAV?$NameValuePair@AEAI@1@3$$QEAV?$NameValuePair@AEAJ@1@444@Z @ 0x180653558 (--$process@V-$NameValuePair@AEA_K@cereal@@V-$NameValuePair@AEAM@2@V32@V-$NameValuePair@AEA_N@2@V.c)
 */

__int64 __fastcall _tip_TouchEdgeGestureTest::serialize<cereal::JSONInputArchive>(__int64 a1, __int64 a2)
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

  v3[0] = "displayRect.bottom";
  v3[1] = a1 + 48;
  v4[0] = "displayRect.top";
  v4[1] = a1 + 40;
  v5[0] = "displayRect.right";
  v5[1] = a1 + 44;
  v6[0] = "displayRect.left";
  v6[1] = a1 + 36;
  v7[0] = "connectedMonitors";
  v7[1] = a1 + 32;
  v8[0] = "monitors";
  v8[1] = a1 + 28;
  v9[0] = "startAnimationResult";
  v9[1] = a1 + 26;
  v10[0] = "startGestureResult";
  v10[1] = a1 + 25;
  v11[0] = "queryMonitorFailure";
  v11[1] = a1 + 24;
  v12[0] = "position.Y";
  v12[1] = a1 + 20;
  v13[0] = "position.X";
  v13[1] = a1 + 16;
  v14[0] = "sourceId";
  v14[1] = a1 + 8;
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<float &>,cereal::NameValuePair<float &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>>(
           a2,
           v14,
           v13,
           (int)v12,
           (__int64)v11,
           (__int64)v10,
           (__int64)v9,
           (__int64)v8,
           (__int64)v7,
           (__int64)v6,
           (__int64)v5,
           (__int64)v4,
           (__int64)v3);
}
