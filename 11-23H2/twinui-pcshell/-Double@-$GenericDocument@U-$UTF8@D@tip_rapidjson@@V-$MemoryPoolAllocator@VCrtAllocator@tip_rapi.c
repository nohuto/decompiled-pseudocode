/*
 * XREFs of ?Double@?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@tip_rapidjson@@QEAA_NN@Z @ 0x18041848C
 * Callers:
 *     ??$ParseNumber@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@@Z @ 0x1801518A4 (--$ParseNumber@$0BBA@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_r.c)
 * Callees:
 *     ??$Expand@V?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@@?$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@AEAAX_K@Z @ 0x180152730 (--$Expand@V-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapi.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 */

char __fastcall tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>::Double(
        _QWORD *a1,
        double a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  _BYTE pExceptionObject[32]; // [rsp+20h] [rbp-38h] BYREF

  v2 = a1 + 4;
  if ( (unsigned __int64)(a1[7] + 16LL) > a1[8] )
    tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>>(a1 + 4);
  v3 = v2[3];
  if ( (unsigned __int64)(v3 + 16) > v2[4] )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  v2[3] = v3 + 16;
  *(_OWORD *)v3 = 0LL;
  *(double *)v3 = a2;
  *(_WORD *)(v3 + 14) = 534;
  return 1;
}
