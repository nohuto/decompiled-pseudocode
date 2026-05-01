/*
 * XREFs of ??$serialize@VJSONInputArchive@cereal@@@_tip_WinXMenuEnumerationTest@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1806CB398
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_WinXMenuEnumerationTest@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1806DFC40 (-deserialize@-$test_merged_data@U_tip_WinXMenuEnumerationTest@@@details@tip@@EEAAXAEAVJSONInputA.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V?$NameValuePair@AEAV?$vector@KV?$allocator@K@std@@@std@@@2@V?$NameValuePair@AEAJ@2@V12@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@0$$QEAV?$NameValuePair@AEAV?$vector@KV?$allocator@K@std@@@std@@@1@$$QEAV?$NameValuePair@AEAJ@1@0@Z @ 0x1806CAFEC (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V-$NameValuePair@AEAV-$vector@KV-$allocator@K@std@.c)
 */

__int64 __fastcall _tip_WinXMenuEnumerationTest::serialize<cereal::JSONInputArchive>(__int64 a1, __int64 a2)
{
  _QWORD v3[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v4[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v5[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v6[2]; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v7[2]; // [rsp+70h] [rbp-10h] BYREF

  v3[0] = "wasObsoleteLinkFound";
  v3[1] = a1 + 44;
  v4[0] = "enumerationResult";
  v4[1] = a1 + 40;
  v5[0] = "missingItems";
  v5[1] = a1 + 16;
  v6[0] = "wereAllLinksFound";
  v6[1] = a1 + 9;
  v7[0] = "wasDefaultProfileLookupNecessary";
  v7[1] = a1 + 8;
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<std::vector<unsigned long> &>,cereal::NameValuePair<long &>,cereal::NameValuePair<bool &>>(
           a2,
           v7,
           v6,
           v5,
           v4,
           v3);
}
