/*
 * XREFs of ??$?RV?$NameValuePair@AEAU?$test_data_metrics@U_tip_WidgetsAppInstallTIP@@@details@tip@@@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEAU?$test_data_metrics@U_tip_WidgetsAppInstallTIP@@@details@tip@@@1@@Z @ 0x1801C1778
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_WidgetsAppInstallTIP@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x1801CFE60 (-serialize@-$test_merged_data@U_tip_WidgetsAppInstallTIP@@@details@tip@@EEAAXAEAVJSONOutputArchi.c)
 * Callees:
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087AE0 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087BE0 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ??$process@AEAK@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAK@Z @ 0x1801C30E0 (--$process@AEAK@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAK@Z.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<cereal::NameValuePair<tip::details::test_data_metrics<_tip_WidgetsAppInstallTIP> &>>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // r9
  __int64 v4; // rsi
  __int64 *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx

  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL);
  v4 = *(_QWORD *)(v3 + 32);
  *(_QWORD *)(v3 + 408) = *a2;
  v5 = (__int64 *)a2[1];
  cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v4 + 32));
  v6 = *v5;
  v7 = *v5 + 80;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 32LL) + 32LL) + 32LL) + 32LL);
  *(_QWORD *)(v8 + 408) = "installState";
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned long &>(*(_QWORD *)(v8 + 32), v7);
  *(_DWORD *)v5[1] = *(_DWORD *)(v6 + 80);
  cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v4 + 32));
  return *(_QWORD *)(a1 + 32);
}
