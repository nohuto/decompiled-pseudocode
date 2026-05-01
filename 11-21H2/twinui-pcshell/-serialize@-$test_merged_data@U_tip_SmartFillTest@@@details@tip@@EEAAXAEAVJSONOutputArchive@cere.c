/*
 * XREFs of ?serialize@?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x1805A7EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087AE0 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087BE0 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ??$process@V?$NameValuePair@AEAW4SnapRegionAnchorLocations@AdvancedSmartFill@SnapLayoutHelpers@@@cereal@@V12@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAW4SnapRegionAnchorLocations@AdvancedSmartFill@SnapLayoutHelpers@@@1@00@Z @ 0x1805A1590 (--$process@V-$NameValuePair@AEAW4SnapRegionAnchorLocations@AdvancedSmartFill@SnapLayoutHelpers@@.c)
 */

void __fastcall tip::details::test_merged_data<_tip_SmartFillTest>::serialize(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  _QWORD v13[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v15[3]; // [rsp+40h] [rbp-18h] BYREF

  if ( (a3 & 1) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 32LL);
    v7 = *(_QWORD *)(v6 + 32);
    *(_QWORD *)(v6 + 408) = "test";
    cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v7 + 32));
    v13[0] = "fillToVerticalAnchorLocations";
    v8 = a1 + 248;
    if ( !a1 )
      v8 = 104LL;
    v13[1] = v8;
    v14[0] = "fillToHorizontalAnchorLocations";
    v9 = a1 + 224;
    if ( !a1 )
      v9 = 80LL;
    v14[1] = v9;
    v15[0] = "anchorLocations";
    v10 = a1 + 200;
    if ( !a1 )
      v10 = 56LL;
    v15[1] = v10;
    cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<enum SnapLayoutHelpers::AdvancedSmartFill::SnapRegionAnchorLocations &>,cereal::NameValuePair<enum SnapLayoutHelpers::AdvancedSmartFill::SnapRegionAnchorLocations &>,cereal::NameValuePair<enum SnapLayoutHelpers::AdvancedSmartFill::SnapRegionAnchorLocations &>>(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 32) + 32LL) + 32LL),
      (__int64)v15,
      (__int64)v14,
      (__int64)v13);
    cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v7 + 32));
  }
  if ( (a3 & 2) != 0 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 32LL);
    v12 = *(_QWORD *)(v11 + 32);
    *(_QWORD *)(v11 + 408) = "metrics";
    cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v12 + 32));
    *(_DWORD *)(a1 + 120) = 0;
    cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v12 + 32));
  }
}
