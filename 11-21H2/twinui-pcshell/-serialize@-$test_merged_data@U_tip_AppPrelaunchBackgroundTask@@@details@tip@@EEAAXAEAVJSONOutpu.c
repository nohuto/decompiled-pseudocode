/*
 * XREFs of ?serialize@?$test_merged_data@U_tip_AppPrelaunchBackgroundTask@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x1805BE6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087AE0 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087BE0 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ??$process@AEAJ@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAJ@Z @ 0x1801554EC (--$process@AEAJ@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAJ@Z.c)
 */

void __fastcall tip::details::test_merged_data<_tip_AppPrelaunchBackgroundTask>::serialize(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx

  if ( (a3 & 1) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 32LL);
    v7 = *(_QWORD *)(v6 + 32);
    *(_QWORD *)(v6 + 408) = "test";
    cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v7 + 32));
    v8 = a1 + 152;
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 32) + 32LL) + 32LL) + 32LL) + 32LL);
    *(_QWORD *)(v9 + 408) = "hr";
    v10 = *(_QWORD *)(v9 + 32);
    if ( !a1 )
      v8 = 8LL;
    cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<long &>(v10, (int *)v8);
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
