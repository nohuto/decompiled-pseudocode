/*
 * XREFs of ?AddChunk@?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@tip_rapidjson@@AEAA_N_K@Z @ 0x18034DBD4
 * Callers:
 *     ?Malloc@?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@tip_rapidjson@@QEAAPEAX_K@Z @ 0x18034EC44 (-Malloc@-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@tip_rapidjson@@QEAAPEAX_K@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

char __fastcall tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>::AddChunk(__int64 *a1, __int64 a2)
{
  void *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rcx

  if ( !a1[3] )
  {
    v4 = operator new(1uLL);
    a1[3] = (__int64)v4;
    a1[4] = (__int64)v4;
  }
  if ( a2 == -24 )
    return 0;
  v5 = malloc(a2 + 24);
  if ( !v5 )
    return 0;
  v6 = *a1;
  v5[1] = 0LL;
  v5[2] = v6;
  *v5 = a2;
  *a1 = (__int64)v5;
  return 1;
}
