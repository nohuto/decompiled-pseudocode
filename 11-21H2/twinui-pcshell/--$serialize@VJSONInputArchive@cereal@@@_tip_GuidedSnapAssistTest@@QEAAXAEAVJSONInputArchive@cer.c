/*
 * XREFs of ??$serialize@VJSONInputArchive@cereal@@@_tip_GuidedSnapAssistTest@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18059B4CC
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_GuidedSnapAssistTest@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18059F080 (-deserialize@-$test_merged_data@U_tip_GuidedSnapAssistTest@@@details@tip@@EEAAXAEAVJSONInputArch.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEAI@cereal@@V12@V12@V?$NameValuePair@AEA_N@2@V32@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAI@1@00$$QEAV?$NameValuePair@AEA_N@1@1@Z @ 0x18059B0E0 (--$process@V-$NameValuePair@AEAI@cereal@@V12@V12@V-$NameValuePair@AEA_N@2@V32@@-$InputArchive@VJ.c)
 */

__int64 __fastcall _tip_GuidedSnapAssistTest::serialize<cereal::JSONInputArchive>(__int64 a1, __int64 a2)
{
  _QWORD v3[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v4[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v5[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v6[2]; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v7[2]; // [rsp+70h] [rbp-10h] BYREF

  v3[0] = "snapAssistDismissed";
  v3[1] = a1 + 21;
  v4[0] = "snapAssistBlocked";
  v4[1] = a1 + 20;
  v5[0] = "snappedWindows";
  v5[1] = a1 + 16;
  v6[0] = "skippedRegions";
  v6[1] = a1 + 12;
  v7[0] = "initialRegions";
  v7[1] = a1 + 8;
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
           a2,
           v7,
           v6,
           v5,
           v4,
           v3);
}
