/*
 * XREFs of ?serialize@?$test_merged_data@U_tip_EnsureWebExperiencePackageInstalledTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x1801CFDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087AE0 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087BE0 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ??$?RV?$NameValuePair@AEAU?$test_data_metrics@U_tip_SearchHideTest@@@details@tip@@@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEAU?$test_data_metrics@U_tip_SearchHideTest@@@details@tip@@@1@@Z @ 0x180198D14 (--$-RV-$NameValuePair@AEAU-$test_data_metrics@U_tip_SearchHideTest@@@details@tip@@@cereal@@@-$Ou.c)
 */

void __fastcall tip::details::test_merged_data<_tip_EnsureWebExperiencePackageInstalledTest>::serialize(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  _QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( (a3 & 1) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 32LL);
    v7 = *(_QWORD *)(v6 + 32);
    *(_QWORD *)(v6 + 408) = "test";
    cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v7 + 32));
    cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v7 + 32));
  }
  if ( (a3 & 2) != 0 )
  {
    if ( a1 )
      v8[0] = a1 + 144;
    else
      v8[0] = 0LL;
    v8[1] = a1 + 120;
    v9[0] = "metrics";
    v9[1] = v8;
    cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<cereal::NameValuePair<tip::details::test_data_metrics<_tip_SearchHideTest> &>>(
      a2,
      v9);
  }
}
