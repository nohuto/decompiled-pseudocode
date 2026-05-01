/*
 * XREFs of ?Malloc@?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@tip_rapidjson@@QEAAPEAX_K@Z @ 0x18034EC44
 * Callers:
 *     ??0?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEAA@PEBDIAEAV?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@1@@Z @ 0x18034BE80 (--0-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@.c)
 *     ?EndArray@?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@tip_rapidjson@@QEAA_NI@Z @ 0x18034E2AC (-EndArray@-$GenericDocument@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_ra.c)
 *     ?EndObject@?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@tip_rapidjson@@QEAA_NI@Z @ 0x18034E44C (-EndObject@-$GenericDocument@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_r.c)
 * Callees:
 *     ?AddChunk@?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@tip_rapidjson@@AEAA_N_K@Z @ 0x18034DBD4 (-AddChunk@-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@tip_rapidjson@@AEAA_N_K@Z.c)
 */

__int64 __fastcall tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>::Malloc(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( !a2 )
    return 0LL;
  v3 = (a2 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( !*a1 || v3 + *(_QWORD *)(*a1 + 8) > *(_QWORD *)*a1 )
  {
    v4 = a1[1];
    if ( v4 <= v3 )
      v4 = v3;
    if ( !tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>::AddChunk(a1, v4) )
      return 0LL;
  }
  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 8);
  *(_QWORD *)(v5 + 8) = v6 + v3;
  return v6 + v5 + 24;
}
