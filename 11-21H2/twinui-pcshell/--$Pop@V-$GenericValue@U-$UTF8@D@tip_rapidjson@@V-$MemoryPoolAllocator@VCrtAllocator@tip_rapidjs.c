/*
 * XREFs of ??$Pop@V?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@@?$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@QEAAPEAV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@2@_K@Z @ 0x180348864
 * Callers:
 *     ??$ParseStream@$0BBA@U?$UTF8@D@tip_rapidjson@@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@2@@?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@tip_rapidjson@@QEAAAEAV01@AEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@@Z @ 0x180347FF4 (--$ParseStream@$0BBA@U-$UTF8@D@tip_rapidjson@@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_t.c)
 *     ?EndArray@?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@tip_rapidjson@@QEAA_NI@Z @ 0x18034E2AC (-EndArray@-$GenericDocument@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_ra.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x1802D6668 (--0exception@std@@QEAA@QEBD@Z.c)
 */

unsigned __int64 __fastcall tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Pop<tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>>(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r8
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 16 * a2;
  if ( *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16) < v2 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  v3 = *(_QWORD *)(a1 + 24) - v2;
  *(_QWORD *)(a1 + 24) = v3;
  return v3;
}
