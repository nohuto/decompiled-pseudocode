/*
 * XREFs of ?Pop@?$NumberStream@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@$00$0A@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@QEAAPEBDXZ @ 0x180152694
 * Callers:
 *     ??$ParseNumber@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@@Z @ 0x1801518A4 (--$ParseNumber@$0BBA@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_r.c)
 * Callees:
 *     ??$Expand@D@?$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@AEAAX_K@Z @ 0x180151680 (--$Expand@D@-$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@AEAAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 */

unsigned __int64 __fastcall tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::NumberStream<tip_rapidjson::BasicIStreamWrapper<std::istream>,1,0>::Pop(
        __int64 a1)
{
  __int64 v1; // rbx
  _BYTE *v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rcx
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  if ( (unsigned __int64)(*(_QWORD *)(v1 + 24) + 1LL) > *(_QWORD *)(v1 + 32) )
    tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<char>(*(_QWORD **)(a1 + 8));
  v3 = *(_BYTE **)(v1 + 24);
  if ( (unsigned __int64)(v3 + 1) > *(_QWORD *)(v1 + 32) )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *(_QWORD *)(v1 + 24) = v3 + 1;
  *v3 = 0;
  ++*(_DWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(unsigned int *)(a1 + 16);
  if ( *(_QWORD *)(v4 + 24) - *(_QWORD *)(v4 + 16) < v5 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  v6 = *(_QWORD *)(v4 + 24) - v5;
  *(_QWORD *)(v4 + 24) = v6;
  return v6;
}
