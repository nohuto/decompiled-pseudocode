/*
 * XREFs of ??$serialize@VJSONOutputArchive@cereal@@@_tip_WinXMenuEnumerationTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x1806CB43C
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_WinXMenuEnumerationTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x1806E0370 (-serialize@-$test_merged_data@U_tip_WinXMenuEnumerationTest@@@details@tip@@EEAAXAEAVJSONOutputAr.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V?$NameValuePair@AEAV?$vector@KV?$allocator@K@std@@@std@@@2@V?$NameValuePair@AEAJ@2@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@0$$QEAV?$NameValuePair@AEAV?$vector@KV?$allocator@K@std@@@std@@@1@$$QEAV?$NameValuePair@AEAJ@1@0@Z @ 0x1806CB234 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V-$NameValuePair@AEAV-$vector@KV-$all_ea_1806CB234.c)
 */

__int64 __fastcall _tip_WinXMenuEnumerationTest::serialize<cereal::JSONOutputArchive>(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _QWORD v5[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v6[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v7[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v8[2]; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v9[2]; // [rsp+70h] [rbp-10h] BYREF

  v5[0] = "wasObsoleteLinkFound";
  v5[1] = a1 + 44;
  v6[0] = "enumerationResult";
  v6[1] = a1 + 40;
  v7[0] = "missingItems";
  v7[1] = a1 + 16;
  v8[0] = "wereAllLinksFound";
  v8[1] = a1 + 9;
  v9[0] = "wasDefaultProfileLookupNecessary";
  v2 = a1 + 8;
  v3 = *(_QWORD *)(a2 + 32);
  v9[1] = v2;
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<std::vector<unsigned long> &>,cereal::NameValuePair<long &>,cereal::NameValuePair<bool &>>(
           v3,
           v9,
           (int)v8,
           (int)v7,
           (__int64)v6,
           (__int64)v5);
}
