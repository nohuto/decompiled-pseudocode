/*
 * XREFs of ??$process@V?$NameValuePair@AEAJ@cereal@@V12@V12@V12@V12@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAJ@1@0000@Z @ 0x18058D170
 * Callers:
 *     ??$process@V?$NameValuePair@AEAJ@cereal@@V12@V12@V12@V12@V12@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAJ@1@00000@Z @ 0x18058D338 (--$process@V-$NameValuePair@AEAJ@cereal@@V12@V12@V12@V12@V12@@-$InputArchive@VJSONInputArchive@c.c)
 * Callees:
 *     ?GetInt@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAHXZ @ 0x18034E69C (-GetInt@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjs.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x1803519C4 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180352198 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v9; // r10
  _DWORD *v10; // rdi
  cereal::JSONInputArchive *v11; // rbx
  _BYTE *v12; // rax
  __int64 v13; // rcx
  _DWORD *v14; // rdi
  cereal::JSONInputArchive *v15; // rbx
  _BYTE *v16; // rax
  __int64 v17; // rcx
  _DWORD *v18; // rdi
  cereal::JSONInputArchive *v19; // rbx
  _BYTE *v20; // rax
  __int64 v21; // rdx
  _DWORD *v22; // rdi
  cereal::JSONInputArchive *v23; // rbx
  _BYTE *v24; // rax
  __int64 v25; // rdx
  _DWORD *v26; // rdi
  cereal::JSONInputArchive *v27; // rbx
  _BYTE *v28; // rax
  __int64 result; // rax

  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v9 + 304) = *a2;
  v10 = (_DWORD *)a2[1];
  v11 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v9 + 32) + 32LL);
  cereal::JSONInputArchive::search(v11);
  v12 = (_BYTE *)cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v11 + 43) - 40LL);
  *v10 = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetInt(v12);
  ++*(_QWORD *)(*((_QWORD *)v11 + 43) - 16LL);
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v13 + 304) = *a3;
  v14 = (_DWORD *)a3[1];
  v15 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v13 + 32) + 32LL);
  cereal::JSONInputArchive::search(v15);
  v16 = (_BYTE *)cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v15 + 43) - 40LL);
  *v14 = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetInt(v16);
  ++*(_QWORD *)(*((_QWORD *)v15 + 43) - 16LL);
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v17 + 304) = *a4;
  v18 = (_DWORD *)a4[1];
  v19 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v17 + 32) + 32LL);
  cereal::JSONInputArchive::search(v19);
  v20 = (_BYTE *)cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v19 + 43) - 40LL);
  *v18 = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetInt(v20);
  ++*(_QWORD *)(*((_QWORD *)v19 + 43) - 16LL);
  v21 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v21 + 304) = *a5;
  v22 = (_DWORD *)a5[1];
  v23 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v21 + 32) + 32LL);
  cereal::JSONInputArchive::search(v23);
  v24 = (_BYTE *)cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v23 + 43) - 40LL);
  *v22 = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetInt(v24);
  ++*(_QWORD *)(*((_QWORD *)v23 + 43) - 16LL);
  v25 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v25 + 304) = *a6;
  v26 = (_DWORD *)a6[1];
  v27 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v25 + 32) + 32LL);
  cereal::JSONInputArchive::search(v27);
  v28 = (_BYTE *)cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v27 + 43) - 40LL);
  *v26 = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetInt(v28);
  result = *((_QWORD *)v27 + 43);
  ++*(_QWORD *)(result - 16);
  return result;
}
