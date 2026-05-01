/*
 * XREFs of ??$serialize@VJSONInputArchive@cereal@@@_tip_ColumnSmartFillTest@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1805A1668
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_ColumnSmartFillTest@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1805A77B0 (-deserialize@-$test_merged_data@U_tip_ColumnSmartFillTest@@@details@tip@@EEAAXAEAVJSONInputArchi.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEAH@cereal@@V?$NameValuePair@AEAI@2@V?$NameValuePair@AEAJ@2@V42@V42@V42@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAH@1@$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAJ@1@222@Z @ 0x1805A1310 (--$process@V-$NameValuePair@AEAH@cereal@@V-$NameValuePair@AEAI@2@V-$NameValuePair@AEAJ@2@V42@V42.c)
 */

__int64 __fastcall _tip_ColumnSmartFillTest::serialize<cereal::JSONInputArchive>(__int64 a1, __int64 a2)
{
  _QWORD v3[2]; // [rsp+40h] [rbp-9h] BYREF
  _QWORD v4[2]; // [rsp+50h] [rbp+7h] BYREF
  _QWORD v5[2]; // [rsp+60h] [rbp+17h] BYREF
  _QWORD v6[2]; // [rsp+70h] [rbp+27h] BYREF
  _QWORD v7[2]; // [rsp+80h] [rbp+37h] BYREF
  _QWORD v8[2]; // [rsp+90h] [rbp+47h] BYREF

  v3[0] = "resultRect.left";
  v3[1] = a1 + 40;
  v4[0] = "resultRect.right";
  v4[1] = a1 + 48;
  v5[0] = "workArea.right";
  v5[1] = a1 + 20;
  v6[0] = "workArea.left";
  v6[1] = a1 + 12;
  v7[0] = "dpi";
  v7[1] = a1 + 28;
  v8[0] = "horizontalPosition";
  v8[1] = a1 + 8;
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<int &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>>(
           a2,
           v8,
           (int)v7,
           (int)v6,
           (__int64)v5,
           (__int64)v4,
           (__int64)v3);
}
