/*
 * XREFs of ?MemberBegin@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEAAPEAU?$GenericMember@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@2@XZ @ 0x18034ECB8
 * Callers:
 *     ??0JSONInputArchive@cereal@@QEAA@AEAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z @ 0x18034C45C (--0JSONInputArchive@cereal@@QEAA@AEAV-$basic_istream@DU-$char_traits@D@std@@@std@@@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x1802D6668 (--0exception@std@@QEAA@QEBD@Z.c)
 */

__int64 __fastcall tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::MemberBegin(
        __int64 a1)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_WORD *)(a1 + 14) != 3 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  return *(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFLL;
}
