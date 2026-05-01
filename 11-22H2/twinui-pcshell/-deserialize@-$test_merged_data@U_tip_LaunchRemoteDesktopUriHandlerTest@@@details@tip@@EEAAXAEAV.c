/*
 * XREFs of ?deserialize@?$test_merged_data@U_tip_LaunchRemoteDesktopUriHandlerTest@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x180550B20
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@JSONInputArchive@cereal@@QEAAXXZ @ 0x180162F0C (-startNode@JSONInputArchive@cereal@@QEAAXXZ.c)
 */

__int64 __fastcall tip::details::test_merged_data<_tip_LaunchRemoteDesktopUriHandlerTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  cereal::JSONInputArchive *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  v3 = *(cereal::JSONInputArchive **)(v2 + 32);
  *(_QWORD *)(v2 + 304) = "test";
  cereal::JSONInputArchive::startNode(v3);
  v4 = *(_QWORD *)(v2 + 32);
  v5 = *(_QWORD *)(v4 + 344);
  result = v5 - 40;
  *(_QWORD *)(v4 + 344) = v5 - 40;
  ++*(_QWORD *)(v5 - 56);
  return result;
}
