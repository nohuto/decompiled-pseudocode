/*
 * XREFs of ??$serialize@VJSONOutputArchive@cereal@@@_tip_ColumnSmartFillTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x1805A1854
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_ColumnSmartFillTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x1805A7DF0 (-serialize@-$test_merged_data@U_tip_ColumnSmartFillTest@@@details@tip@@EEAAXAEAVJSONOutputArchiv.c)
 * Callees:
 *     ??$process@AEAH@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAH@Z @ 0x180023518 (--$process@AEAH@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAH@Z.c)
 *     ??$process@AEAI@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z @ 0x18034A01C (--$process@AEAI@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z.c)
 *     ??$process@V?$NameValuePair@AEAJ@cereal@@V12@V12@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAJ@1@000@Z @ 0x18058D0A8 (--$process@V-$NameValuePair@AEAJ@cereal@@V12@V12@V12@@-$OutputArchive@VJSONOutputArchive@cereal@.c)
 */

char *__fastcall _tip_ColumnSmartFillTest::serialize<cereal::JSONOutputArchive>(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  _QWORD v9[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v10[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v11[2]; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v12[2]; // [rsp+60h] [rbp-10h] BYREF

  v2 = *(_QWORD *)(a2 + 32);
  v9[0] = "resultRect.left";
  v9[1] = a1 + 40;
  v10[0] = "resultRect.right";
  v10[1] = a1 + 48;
  v4 = (int *)(a1 + 8);
  v11[0] = "workArea.right";
  v11[1] = a1 + 20;
  v12[0] = "workArea.left";
  v12[1] = a1 + 12;
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v5 + 408) = "horizontalPosition";
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<int &>(*(_QWORD *)(v5 + 32), v4);
  v6 = *(_QWORD *)(v2 + 32);
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v7 + 408) = "dpi";
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned int &>(*(_QWORD *)(v7 + 32), (_DWORD *)(a1 + 28));
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>>(
           *(_QWORD *)(v6 + 32),
           (__int64)v12,
           (__int64)v11,
           (__int64)v10,
           (__int64)v9);
}
