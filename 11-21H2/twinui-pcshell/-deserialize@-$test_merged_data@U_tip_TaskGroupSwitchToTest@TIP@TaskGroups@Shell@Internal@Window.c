/*
 * XREFs of ?deserialize@?$test_merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18058BC20
 * Callers:
 *     <none>
 * Callees:
 *     ?loadValue@JSONInputArchive@cereal@@QEAAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18035147C (-loadValue@JSONInputArchive@cereal@@QEAAXAEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 *     ?startNode@JSONInputArchive@cereal@@QEAAXXZ @ 0x180351DEC (-startNode@JSONInputArchive@cereal@@QEAAXXZ.c)
 */

__int64 __fastcall tip::details::test_merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdi
  cereal::JSONInputArchive *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 result; // rax

  v3 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  v4 = *(cereal::JSONInputArchive **)(v3 + 32);
  *(_QWORD *)(v3 + 304) = "test";
  cereal::JSONInputArchive::startNode(v4);
  v5 = a1 + 152;
  if ( !a1 )
    v5 = 8LL;
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 32LL) + 32LL) + 32LL);
  *(_QWORD *)(v6 + 304) = "groupId";
  cereal::JSONInputArchive::loadValue(*(cereal::JSONInputArchive **)(*(_QWORD *)(v6 + 32) + 32LL), (_OWORD *)v5);
  v7 = *(_QWORD *)(v3 + 32);
  *(_QWORD *)(v7 + 344) -= 40LL;
  result = *(_QWORD *)(v7 + 344);
  ++*(_QWORD *)(result - 16);
  return result;
}
