/*
 * XREFs of ?deserialize@?$test_merged_data@U_tip_AppThumbnailTest@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1801CF170
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@JSONInputArchive@cereal@@QEAAXXZ @ 0x180351DEC (-startNode@JSONInputArchive@cereal@@QEAAXXZ.c)
 */

__int64 __fastcall tip::details::test_merged_data<_tip_AppThumbnailTest>::deserialize(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  cereal::JSONInputArchive *v3; // rcx
  __int64 v4; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  v3 = *(cereal::JSONInputArchive **)(v2 + 32);
  *(_QWORD *)(v2 + 304) = "test";
  cereal::JSONInputArchive::startNode(v3);
  v4 = *(_QWORD *)(v2 + 32);
  *(_QWORD *)(v4 + 344) -= 40LL;
  result = *(_QWORD *)(v4 + 344);
  ++*(_QWORD *)(result - 16);
  return result;
}
