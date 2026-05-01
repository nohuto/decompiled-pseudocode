/*
 * XREFs of ??$?RV?$NameValuePair@AEAU?$test_data_metrics@U_tip_SearchHideTest@@@details@tip@@@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEAU?$test_data_metrics@U_tip_SearchHideTest@@@details@tip@@@1@@Z @ 0x180198D14
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_SearchFullActivationTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x1801A31E0 (-serialize@-$test_merged_data@U_tip_SearchFullActivationTest@@@details@tip@@EEAAXAEAVJSONOutputA.c)
 *     ?serialize@?$test_merged_data@U_tip_SearchHideTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x1801A32A0 (-serialize@-$test_merged_data@U_tip_SearchHideTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cer.c)
 *     ?serialize@?$test_merged_data@U_tip_EnsureWebExperiencePackageInstalledTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x1801CFDA0 (-serialize@-$test_merged_data@U_tip_EnsureWebExperiencePackageInstalledTest@@@details@tip@@EEAAX.c)
 *     ?serialize@?$test_merged_data@U_tip_WinXMenuEnumerationTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x1801E80F0 (-serialize@-$test_merged_data@U_tip_WinXMenuEnumerationTest@@@details@tip@@EEAAXAEAVJSONOutputAr.c)
 * Callees:
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087AE0 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087BE0 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<cereal::NameValuePair<tip::details::test_data_metrics<_tip_SearchHideTest> &>>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // r9
  __int64 v4; // rdi
  __int64 v5; // rbx

  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL);
  v4 = *(_QWORD *)(v3 + 32);
  *(_QWORD *)(v3 + 408) = *a2;
  v5 = a2[1];
  cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v4 + 32));
  **(_DWORD **)(v5 + 8) = 0;
  cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v4 + 32));
  return *(_QWORD *)(a1 + 32);
}
