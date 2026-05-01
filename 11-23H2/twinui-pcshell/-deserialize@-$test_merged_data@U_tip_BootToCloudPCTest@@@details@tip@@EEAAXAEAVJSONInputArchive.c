/*
 * XREFs of ?deserialize@?$test_merged_data@U_tip_BootToCloudPCTest@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x180707CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@JSONInputArchive@cereal@@QEAAXXZ @ 0x180162F0C (-startNode@JSONInputArchive@cereal@@QEAAXXZ.c)
 *     ??$serialize@VJSONInputArchive@cereal@@@_tip_BootToCloudPCTest@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x180704C14 (--$serialize@VJSONInputArchive@cereal@@@_tip_BootToCloudPCTest@@QEAAXAEAVJSONInputArchive@cereal.c)
 */

__int64 __fastcall tip::details::test_merged_data<_tip_BootToCloudPCTest>::deserialize(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  cereal::JSONInputArchive *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  v2 = (a1 + 176) & -(__int64)(a1 != 0);
  v3 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  v4 = *(cereal::JSONInputArchive **)(v3 + 32);
  *(_QWORD *)(v3 + 304) = "test";
  cereal::JSONInputArchive::startNode(v4);
  _tip_BootToCloudPCTest::serialize<cereal::JSONInputArchive>(v2, *(_QWORD *)(*(_QWORD *)(v3 + 32) + 32LL));
  v5 = *(_QWORD *)(v3 + 32);
  v6 = *(_QWORD *)(v5 + 344);
  result = v6 - 40;
  *(_QWORD *)(v5 + 344) = v6 - 40;
  ++*(_QWORD *)(v6 - 56);
  return result;
}
