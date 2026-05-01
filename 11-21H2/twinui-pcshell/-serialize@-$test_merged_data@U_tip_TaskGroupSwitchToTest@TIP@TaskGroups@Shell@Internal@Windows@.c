/*
 * XREFs of ?serialize@?$test_merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x18058C2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800874B0 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087AE0 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087BE0 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?saveValue@JSONOutputArchive@cereal@@QEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800E6418 (-saveValue@JSONOutputArchive@cereal@@QEAAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 */

void __fastcall tip::details::test_merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>::serialize(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbx

  if ( (a3 & 1) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 32LL);
    v7 = *(_QWORD *)(v6 + 32);
    *(_QWORD *)(v6 + 408) = "test";
    cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v7 + 32));
    v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 32) + 32LL) + 32LL) + 32LL) + 32LL);
    v9 = *(_QWORD *)(v8 + 32);
    *(_QWORD *)(v8 + 408) = "groupId";
    cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v9 + 32));
    v10 = a1 + 152;
    if ( !a1 )
      v10 = 8LL;
    cereal::JSONOutputArchive::saveValue(*(_QWORD *)(*(_QWORD *)(v9 + 32) + 32LL), (_QWORD *)v10);
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
