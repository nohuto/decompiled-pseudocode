/*
 * XREFs of ??$?RAEAU_tip_WinXMenuEnumerationTest@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@AEAU_tip_WinXMenuEnumerationTest@@@Z @ 0x1801D6DBC
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_WinXMenuEnumerationTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x1801E80F0 (-serialize@-$test_merged_data@U_tip_WinXMenuEnumerationTest@@@details@tip@@EEAAXAEAVJSONOutputAr.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@00@Z @ 0x18005C7D8 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@@-$OutputArchive@VJSONOutputArchive@cereal@@$0.c)
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087AE0 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087BE0 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<_tip_WinXMenuEnumerationTest &>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rdi
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v2 + 32));
  v6[0] = "wasObsoleteLinkFound";
  v6[1] = a2 + 10;
  v7[0] = "wereAllLinksFound";
  v7[1] = a2 + 9;
  v8[0] = "wasDefaultProfileLookupNecessary";
  v8[1] = a2 + 8;
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 32) + 32LL) + 32LL),
    v8,
    v7,
    v6);
  cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v2 + 32));
  return *(_QWORD *)(a1 + 32);
}
