/*
 * XREFs of ??$?RV?$NameValuePair@AEAU_tip_WidgetsAppInstallTIP@@@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEAU_tip_WidgetsAppInstallTIP@@@1@@Z @ 0x1801C181C
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_WidgetsAppInstallTIP@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x1801CFE60 (-serialize@-$test_merged_data@U_tip_WidgetsAppInstallTIP@@@details@tip@@EEAAXAEAVJSONOutputArchi.c)
 * Callees:
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087AE0 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087BE0 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ??$serialize@VJSONOutputArchive@cereal@@@_tip_WidgetsAppInstallTIP@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x1801C3550 (--$serialize@VJSONOutputArchive@cereal@@@_tip_WidgetsAppInstallTIP@@QEAAXAEAVJSONOutputArchive@c.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<cereal::NameValuePair<_tip_WidgetsAppInstallTIP &>>(
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
  _tip_WidgetsAppInstallTIP::serialize<cereal::JSONOutputArchive>(v5, *(_QWORD *)(*(_QWORD *)(v4 + 32) + 32LL));
  cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v4 + 32));
  return *(_QWORD *)(a1 + 32);
}
