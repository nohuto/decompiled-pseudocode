/*
 * XREFs of ?serialize@?$test_merged_data@U_tip_RecoverRemoteSessionTipTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x180708490
 * Callers:
 *     <none>
 * Callees:
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C18D8 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1AA4 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ??$serialize@VJSONOutputArchive@cereal@@@_tip_RecoverRemoteSessionTipTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x1807050B4 (--$serialize@VJSONOutputArchive@cereal@@@_tip_RecoverRemoteSessionTipTest@@QEAAXAEAVJSONOutputAr.c)
 */

void __fastcall tip::details::test_merged_data<_tip_RecoverRemoteSessionTipTest>::serialize(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v3; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx

  v3 = a2 + 32;
  if ( (a3 & 1) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 32LL) + 32LL);
    v7 = *(_QWORD *)(v6 + 32);
    *(_QWORD *)(v6 + 408) = "test";
    cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v7 + 32));
    _tip_RecoverRemoteSessionTipTest::serialize<cereal::JSONOutputArchive>(
      (a1 + 176) & -(__int64)(a1 != 0),
      *(_QWORD *)(*(_QWORD *)(v7 + 32) + 32LL));
    cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v7 + 32));
  }
  if ( (a3 & 2) != 0 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 32LL) + 32LL);
    v9 = *(_QWORD *)(v8 + 32);
    *(_QWORD *)(v8 + 408) = "metrics";
    cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v9 + 32));
    *(_DWORD *)(a1 + 152) = 0;
    cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v9 + 32));
  }
}
