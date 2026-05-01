/*
 * XREFs of ?Pop@?$NumberStream@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@$00$0A@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@QEAAPEBDXZ @ 0x18034F57C
 * Callers:
 *     ??$ParseNumber@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@@Z @ 0x180346A48 (--$ParseNumber@$0BBA@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_r.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x1802D6668 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ??$Expand@D@?$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@AEAAX_K@Z @ 0x1803462A8 (--$Expand@D@-$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@AEAAX_K@Z.c)
 */

unsigned __int64 __fastcall tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::NumberStream<tip_rapidjson::BasicIStreamWrapper<std::istream>,1,0>::Pop(
        __int64 a1)
{
  __int64 v1; // rbx
  _BYTE *v3; // rdx
  unsigned __int64 v4; // r8
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rcx
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(_BYTE **)(v1 + 24);
  v4 = *(_QWORD *)(v1 + 32);
  if ( (unsigned __int64)(v3 + 1) > v4 )
  {
    tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<char>(*(_QWORD **)(a1 + 8));
    v3 = *(_BYTE **)(v1 + 24);
    v4 = *(_QWORD *)(v1 + 32);
  }
  if ( (unsigned __int64)(v3 + 1) > v4 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *(_QWORD *)(v1 + 24) = v3 + 1;
  *v3 = 0;
  ++*(_DWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(unsigned int *)(a1 + 16);
  if ( *(_QWORD *)(v5 + 24) - *(_QWORD *)(v5 + 16) < v6 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  v7 = *(_QWORD *)(v5 + 24) - v6;
  *(_QWORD *)(v5 + 24) = v7;
  return v7;
}
