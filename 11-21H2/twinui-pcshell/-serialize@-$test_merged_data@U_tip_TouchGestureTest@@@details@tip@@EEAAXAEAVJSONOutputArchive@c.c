/*
 * XREFs of ?serialize@?$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x180590190
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087AE0 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087BE0 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ??$serialize@VJSONOutputArchive@cereal@@@_tip_TouchGestureTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x18058DB40 (--$serialize@VJSONOutputArchive@cereal@@@_tip_TouchGestureTest@@QEAAXAEAVJSONOutputArchive@cerea.c)
 */

void __fastcall tip::details::test_merged_data<_tip_TouchGestureTest>::serialize(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx

  if ( (a3 & 1) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 32LL);
    v7 = *(_QWORD *)(v6 + 32);
    *(_QWORD *)(v6 + 408) = "test";
    cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v7 + 32));
    _tip_TouchGestureTest::serialize<cereal::JSONOutputArchive>(
      (a1 + 144) & -(__int64)(a1 != 0),
      *(_QWORD *)(*(_QWORD *)(v7 + 32) + 32LL));
    cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v7 + 32));
  }
  if ( (a3 & 2) != 0 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 32LL);
    v9 = *(_QWORD *)(v8 + 32);
    *(_QWORD *)(v8 + 408) = "metrics";
    cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v9 + 32));
    *(_DWORD *)(a1 + 120) = 0;
    cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v9 + 32));
  }
}
