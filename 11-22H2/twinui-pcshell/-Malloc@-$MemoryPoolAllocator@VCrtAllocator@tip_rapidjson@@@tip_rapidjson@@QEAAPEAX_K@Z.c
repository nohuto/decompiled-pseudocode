/*
 * XREFs of ?Malloc@?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@tip_rapidjson@@QEAAPEAX_K@Z @ 0x1801525C0
 * Callers:
 *     ?EndArray@?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@tip_rapidjson@@QEAA_NI@Z @ 0x1801522FC (-EndArray@-$GenericDocument@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_ra.c)
 *     ?EndObject@?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@tip_rapidjson@@QEAA_NI@Z @ 0x180152388 (-EndObject@-$GenericDocument@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_r.c)
 *     ??0?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEAA@PEBDIAEAV?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@1@@Z @ 0x180152514 (--0-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@.c)
 * Callees:
 *     ?AddChunk@?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@tip_rapidjson@@AEAA_N_K@Z @ 0x1801527F8 (-AddChunk@-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@tip_rapidjson@@AEAA_N_K@Z.c)
 */

__int64 __fastcall tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>::Malloc(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v7; // rdx

  if ( !a2 )
    return 0LL;
  v3 = (a2 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( !*a1 || v3 + *(_QWORD *)(*a1 + 8LL) > *(_QWORD *)*a1 )
  {
    v7 = a1[1];
    if ( v7 <= v3 )
      v7 = v3;
    if ( !(unsigned __int8)tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>::AddChunk(a1, v7) )
      return 0LL;
  }
  v4 = *a1;
  v5 = *(_QWORD *)(*a1 + 8LL);
  *(_QWORD *)(v4 + 8) = v5 + v3;
  return v5 + v4 + 24;
}
