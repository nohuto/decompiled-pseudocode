/*
 * XREFs of ??$emplace_back@PEBU?$GenericMember@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@PEBU12@@?$vector@VIterator@JSONInputArchive@cereal@@V?$allocator@VIterator@JSONInputArchive@cereal@@@std@@@std@@QEAAAEAVIterator@JSONInputArchive@cereal@@$$QEAPEBU?$GenericMember@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@0@Z @ 0x1800F27A4
 * Callers:
 *     ?startNode@JSONInputArchive@cereal@@QEAAXXZ @ 0x1800F6C0C (-startNode@JSONInputArchive@cereal@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<cereal::JSONInputArchive::Iterator>::emplace_back<tip_rapidjson::GenericMember<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>> const *,tip_rapidjson::GenericMember<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>> const *>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r8
  int v8; // eax
  __int64 result; // rax

  v4 = a1[1];
  if ( v4 == a1[2] )
    return std::vector<cereal::JSONInputArchive::Iterator>::_Emplace_reallocate<tip_rapidjson::GenericMember<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>> const *,tip_rapidjson::GenericMember<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>> const *>(
             a1,
             v4,
             a2,
             a3);
  v5 = *a2;
  v6 = *a3;
  *(_QWORD *)(v4 + 24) = 0LL;
  *(_QWORD *)v4 = v5;
  *(_DWORD *)(v4 + 32) = 1;
  *(_QWORD *)(v4 + 8) = v6;
  v7 = v6 - v5;
  v8 = *(_DWORD *)(v4 + 32);
  if ( (v7 & 0xFFFFFFFFFFFFFFE0uLL) == 0 )
    v8 = 2;
  *(_DWORD *)(v4 + 32) = v8;
  result = a1[1];
  a1[1] = result + 40;
  return result;
}
