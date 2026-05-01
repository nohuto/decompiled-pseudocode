/*
 * XREFs of ?Uint64@?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@tip_rapidjson@@QEAA_N_K@Z @ 0x18041A65C
 * Callers:
 *     ??$ParseNumber@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@@Z @ 0x1801518A4 (--$ParseNumber@$0BBA@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_r.c)
 * Callees:
 *     ??$Expand@V?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@@?$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@AEAAX_K@Z @ 0x180152730 (--$Expand@V-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapi.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 */

char __fastcall tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>::Uint64(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rcx
  __int16 v5; // ax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1 + 4;
  if ( (unsigned __int64)(a1[7] + 16LL) > a1[8] )
    tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>>(a1 + 4);
  v4 = v2[3];
  if ( (unsigned __int64)(v4 + 16) > v2[4] )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  v2[3] = v4 + 16;
  v5 = 278;
  *(_OWORD *)v4 = 0LL;
  *(_QWORD *)v4 = a2;
  *(_WORD *)(v4 + 14) = 278;
  if ( a2 >= 0 )
  {
    v5 = 406;
    *(_WORD *)(v4 + 14) = 406;
  }
  if ( (a2 & 0xFFFFFFFF00000000uLL) == 0 )
  {
    v5 |= 0x40u;
    *(_WORD *)(v4 + 14) = v5;
  }
  if ( (a2 & 0xFFFFFFFF80000000uLL) == 0 )
    *(_WORD *)(v4 + 14) = v5 | 0x20;
  return 1;
}
