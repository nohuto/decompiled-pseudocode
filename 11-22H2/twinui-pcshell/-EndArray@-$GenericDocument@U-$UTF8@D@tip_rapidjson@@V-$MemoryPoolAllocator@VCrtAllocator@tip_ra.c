/*
 * XREFs of ?EndArray@?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@tip_rapidjson@@QEAA_NI@Z @ 0x1801522FC
 * Callers:
 *     ??$ParseArray@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@@Z @ 0x180151C04 (--$ParseArray@$0BBA@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_ra.c)
 * Callees:
 *     ?GetAllocator@?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@tip_rapidjson@@QEAAAEAV?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@XZ @ 0x1801524F4 (-GetAllocator@-$GenericDocument@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@ti.c)
 *     ?Malloc@?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@tip_rapidjson@@QEAAPEAX_K@Z @ 0x1801525C0 (-Malloc@-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@tip_rapidjson@@QEAAPEAX_K@Z.c)
 *     ??$Top@V?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@@?$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@QEAAPEAV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@2@XZ @ 0x180152634 (--$Top@V-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjs.c)
 *     ??$Pop@V?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@@?$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@QEAAPEAV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@2@_K@Z @ 0x180152660 (--$Pop@V-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjs.c)
 *     memcpy_0 @ 0x1801C934B (memcpy_0.c)
 */

char __fastcall tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>::EndArray(
        __int64 a1,
        unsigned int a2)
{
  __int64 v4; // rbp
  const void *v5; // r14
  __int64 v6; // rbx
  __int64 Allocator; // rax
  char result; // al
  size_t v9; // rbp
  __int64 v10; // rax

  v4 = a2;
  v5 = (const void *)tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Pop<tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>>(
                       a1 + 32,
                       a2);
  v6 = tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Top<tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>>(a1 + 32);
  Allocator = tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>::GetAllocator(a1);
  *(_WORD *)(v6 + 14) = 4;
  if ( a2 )
  {
    v9 = 16 * v4;
    v10 = tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>::Malloc(Allocator, v9);
    *(_QWORD *)(v6 + 8) = v10 | *(_QWORD *)(v6 + 8) & 0xFFFF000000000000uLL;
    memcpy_0((void *)v10, v5, v9);
  }
  else
  {
    *(_QWORD *)(v6 + 8) &= 0xFFFF000000000000uLL;
  }
  result = 1;
  *(_DWORD *)(v6 + 4) = a2;
  *(_DWORD *)v6 = a2;
  return result;
}
