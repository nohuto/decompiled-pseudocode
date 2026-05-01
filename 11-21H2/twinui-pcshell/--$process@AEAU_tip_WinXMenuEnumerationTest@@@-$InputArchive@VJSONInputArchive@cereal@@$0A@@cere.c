/*
 * XREFs of ??$process@AEAU_tip_WinXMenuEnumerationTest@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAXAEAU_tip_WinXMenuEnumerationTest@@@Z @ 0x1801D7270
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_WinXMenuEnumerationTest@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1801E7E70 (-deserialize@-$test_merged_data@U_tip_WinXMenuEnumerationTest@@@details@tip@@EEAAXAEAVJSONInputA.c)
 * Callees:
 *     ?startNode@JSONInputArchive@cereal@@QEAAXXZ @ 0x180351DEC (-startNode@JSONInputArchive@cereal@@QEAAXXZ.c)
 *     ??$?RV?$NameValuePair@AEA_N@cereal@@V01@V01@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONInputArchive@1@$$QEAV?$NameValuePair@AEA_N@1@00@Z @ 0x1805BBCD8 (--$-RV-$NameValuePair@AEA_N@cereal@@V01@V01@@-$InputArchive@VJSONInputArchive@cereal@@$0A@@cerea.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<_tip_WinXMenuEnumerationTest &>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 result; // rax
  _QWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v9[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v10[3]; // [rsp+40h] [rbp-18h] BYREF

  cereal::JSONInputArchive::startNode(*(cereal::JSONInputArchive **)(a1 + 32));
  v4 = *(_QWORD *)(a1 + 32);
  v8[0] = "wasObsoleteLinkFound";
  v8[1] = a2 + 10;
  v5 = *(_QWORD *)(v4 + 32);
  v9[0] = "wereAllLinksFound";
  v9[1] = a2 + 9;
  v10[0] = "wasDefaultProfileLookupNecessary";
  v10[1] = a2 + 8;
  ((void (__fastcall *)(__int64, _QWORD *, _QWORD *, _QWORD *))cereal::InputArchive<cereal::JSONInputArchive,0>::operator()<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>)(
    v5,
    v10,
    v9,
    v8);
  v6 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(v6 + 344) -= 40LL;
  result = *(_QWORD *)(v6 + 344);
  ++*(_QWORD *)(result - 16);
  return result;
}
