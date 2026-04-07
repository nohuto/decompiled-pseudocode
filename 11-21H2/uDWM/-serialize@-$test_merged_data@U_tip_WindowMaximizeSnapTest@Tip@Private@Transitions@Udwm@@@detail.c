/*
 * XREFs of ?serialize@?$test_merged_data@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x180011FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$serialize@VJSONOutputArchive@cereal@@@_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x18004256C (--$serialize@VJSONOutputArchive@cereal@@@_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udw.c)
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800436C0 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800439D4 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 */

void __fastcall tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest>::serialize(
        __int64 a1,
        __int64 a2,
        char a3)
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
    Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest::serialize<cereal::JSONOutputArchive>(
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
