/*
 * XREFs of ??$process@V?$NameValuePair@AEAW4SnapRegionAnchorLocations@AdvancedSmartFill@SnapLayoutHelpers@@@cereal@@V12@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAW4SnapRegionAnchorLocations@AdvancedSmartFill@SnapLayoutHelpers@@@1@00@Z @ 0x1805A1590
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x1805A7EC0 (-serialize@-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cere.c)
 * Callees:
 *     ??$process@H@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAH@Z @ 0x18015C08C (--$process@H@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAH@Z.c)
 */

char *__fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<enum SnapLayoutHelpers::AdvancedSmartFill::SnapRegionAnchorLocations &>,cereal::NameValuePair<enum SnapLayoutHelpers::AdvancedSmartFill::SnapRegionAnchorLocations &>,cereal::NameValuePair<enum SnapLayoutHelpers::AdvancedSmartFill::SnapRegionAnchorLocations &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // r11
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  int v15; // [rsp+30h] [rbp+8h] BYREF

  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v7 + 408) = *(_QWORD *)a2;
  v8 = *(_QWORD *)(v7 + 32);
  v15 = **(_DWORD **)(a2 + 8);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<int>(*(_QWORD *)(*(_QWORD *)(v8 + 32) + 32LL), &v15);
  v9 = *(_QWORD *)(a1 + 32);
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v10 + 408) = *(_QWORD *)a3;
  v11 = *(_QWORD *)(v10 + 32);
  v15 = **(_DWORD **)(a3 + 8);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<int>(*(_QWORD *)(*(_QWORD *)(v11 + 32) + 32LL), &v15);
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v12 + 408) = *(_QWORD *)a4;
  v13 = *(_QWORD *)(v12 + 32);
  v15 = **(_DWORD **)(a4 + 8);
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<int>(
           *(_QWORD *)(*(_QWORD *)(v13 + 32) + 32LL),
           &v15);
}
