/*
 * XREFs of ??$serialize@VJSONOutputArchive@cereal@@@_tip_GuidedSnapAssistTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x18059B570
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_GuidedSnapAssistTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x18059F350 (-serialize@-$test_merged_data@U_tip_GuidedSnapAssistTest@@@details@tip@@EEAAXAEAVJSONOutputArchi.c)
 * Callees:
 *     ??$process@AEAI@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z @ 0x18034A01C (--$process@AEAI@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z.c)
 *     ??$process@V?$NameValuePair@AEAI@cereal@@V?$NameValuePair@AEA_N@2@V32@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEA_N@1@1@Z @ 0x18059B2FC (--$process@V-$NameValuePair@AEAI@cereal@@V-$NameValuePair@AEA_N@2@V32@@-$OutputArchive@VJSONOutp.c)
 */

char __fastcall _tip_GuidedSnapAssistTest::serialize<cereal::JSONOutputArchive>(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _DWORD *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a2 + 32);
  v9[0] = "snapAssistDismissed";
  v9[1] = a1 + 21;
  v10[0] = "snapAssistBlocked";
  v10[1] = a1 + 20;
  v4 = (_DWORD *)(a1 + 8);
  v11[0] = "snappedWindows";
  v11[1] = a1 + 16;
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v5 + 408) = "initialRegions";
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned int &>(*(_QWORD *)(v5 + 32), v4);
  v6 = *(_QWORD *)(v2 + 32);
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v7 + 408) = "skippedRegions";
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned int &>(*(_QWORD *)(v7 + 32), (_DWORD *)(a1 + 12));
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
           *(_QWORD *)(v6 + 32),
           (__int64)v11,
           v10,
           v9);
}
