/*
 * XREFs of ?deserialize@?$test_merged_data@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1800F7740
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@JSONInputArchive@cereal@@QEAAXXZ @ 0x1800F6C0C (-startNode@JSONInputArchive@cereal@@QEAAXXZ.c)
 *     ??$serialize@VJSONInputArchive@cereal@@@_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1800F7204 (--$serialize@VJSONInputArchive@cereal@@@_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm.c)
 */

__int64 __fastcall tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  cereal::JSONInputArchive *v4; // rcx
  __int64 v5; // rax
  __int64 result; // rax

  v2 = (a1 + 144) & -(__int64)(a1 != 0);
  v3 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  v4 = *(cereal::JSONInputArchive **)(v3 + 32);
  *(_QWORD *)(v3 + 304) = "test";
  cereal::JSONInputArchive::startNode(v4);
  Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest::serialize<cereal::JSONInputArchive>(
    v2,
    *(_QWORD *)(*(_QWORD *)(v3 + 32) + 32LL));
  v5 = *(_QWORD *)(v3 + 32);
  *(_QWORD *)(v5 + 344) -= 40LL;
  result = *(_QWORD *)(v5 + 344);
  ++*(_QWORD *)(result - 16);
  return result;
}
