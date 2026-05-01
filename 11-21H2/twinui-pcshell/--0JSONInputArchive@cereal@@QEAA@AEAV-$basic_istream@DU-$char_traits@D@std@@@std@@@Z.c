/*
 * XREFs of ??0JSONInputArchive@cereal@@QEAA@AEAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z @ 0x18034C45C
 * Callers:
 *     ?update_from_test_info@?$test_common_data@$00@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x180120C60 (-update_from_test_info@-$test_common_data@$00@details@tip@@AEAAXAEBUTestInfo@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??$ParseStream@$0BBA@U?$UTF8@D@tip_rapidjson@@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@2@@?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@tip_rapidjson@@QEAAAEAV01@AEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@@Z @ 0x180347FF4 (--$ParseStream@$0BBA@U-$UTF8@D@tip_rapidjson@@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_t.c)
 *     ??$_Emplace_reallocate@PEAV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@PEAV12@@?$vector@VIterator@JSONInputArchive@cereal@@V?$allocator@VIterator@JSONInputArchive@cereal@@@std@@@std@@QEAAPEAVIterator@JSONInputArchive@cereal@@QEAV234@$$QEAPEAV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@1@Z @ 0x180348C94 (--$_Emplace_reallocate@PEAV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAl.c)
 *     ??$emplace_back@PEAU?$GenericMember@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@PEAU12@@?$vector@VIterator@JSONInputArchive@cereal@@V?$allocator@VIterator@JSONInputArchive@cereal@@@std@@@std@@QEAAAEAVIterator@JSONInputArchive@cereal@@$$QEAPEAU?$GenericMember@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@0@Z @ 0x180349950 (--$emplace_back@PEAU-$GenericMember@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocato.c)
 *     ??0?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAA@QEAVJSONInputArchive@1@@Z @ 0x18034BF98 (--0-$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAA@QEAVJSONInputArchive@1@@Z.c)
 *     ?Begin@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEAAPEAV12@XZ @ 0x18034DCF8 (-Begin@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjso.c)
 *     ?End@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEAAPEAV12@XZ @ 0x18034E258 (-End@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@.c)
 *     ?MemberBegin@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEAAPEAU?$GenericMember@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@2@XZ @ 0x18034ECB8 (-MemberBegin@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_ra.c)
 *     ?MemberEnd@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEAAPEAU?$GenericMember@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@2@XZ @ 0x18034ED04 (-MemberEnd@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapi.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall cereal::JSONInputArchive::JSONInputArchive(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbp
  int v10; // eax
  _QWORD *v12; // [rsp+58h] [rbp+10h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  cereal::InputArchive<cereal::JSONInputArchive,0>::InputArchive<cereal::JSONInputArchive,0>(a1, a1);
  *(_QWORD *)a1 = &cereal::JSONInputArchive::`vftable';
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 312) = a2;
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_DWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 352) = 0LL;
  v12 = (_QWORD *)(a1 + 360);
  *(_OWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_QWORD *)(a1 + 408) = 0LL;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 1024LL;
  *(_DWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = 0LL;
  if ( !*(_QWORD *)(a1 + 376) )
  {
    v4 = operator new(0x28uLL);
    v12 = v4;
    *v4 = 0LL;
    v4[1] = 0x10000LL;
    v4[2] = 0LL;
    v4[3] = 0LL;
    v4[4] = 0LL;
    *(_QWORD *)(a1 + 376) = v4;
    *(_QWORD *)(a1 + 384) = v4;
  }
  tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>::ParseStream<272,tip_rapidjson::UTF8<char>,tip_rapidjson::BasicIStreamWrapper<std::istream>>(
    a1 + 360,
    (_QWORD *)(a1 + 312));
  v5 = a1 + 360;
  if ( *(_WORD *)(a1 + 374) == 4 )
  {
    v6 = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::End(v5);
    v12 = (_QWORD *)v6;
    v7 = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::Begin(a1 + 360);
    v13 = v7;
    v8 = *(_QWORD *)(a1 + 344);
    if ( v8 == *(_QWORD *)(a1 + 352) )
    {
      std::vector<cereal::JSONInputArchive::Iterator>::_Emplace_reallocate<tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>> *,tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>> *>(
        (__int64 *)(a1 + 336),
        v8,
        &v13,
        (__int64 *)&v12);
    }
    else
    {
      *(_QWORD *)(v8 + 16) = v7;
      *(_QWORD *)(v8 + 24) = 0LL;
      v9 = v6 - v7;
      v10 = 0;
      if ( (v9 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
        v10 = 2;
      *(_DWORD *)(v8 + 32) = v10;
      *(_QWORD *)(a1 + 344) += 40LL;
    }
  }
  else
  {
    v12 = (_QWORD *)tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::MemberEnd(v5);
    v13 = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::MemberBegin(a1 + 360);
    std::vector<cereal::JSONInputArchive::Iterator>::emplace_back<tip_rapidjson::GenericMember<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>> *,tip_rapidjson::GenericMember<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>> *>(
      (__int64 *)(a1 + 336),
      &v13,
      (__int64 *)&v12);
  }
  return a1;
}
