/*
 * XREFs of ?Int64@?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@tip_rapidjson@@QEAA_N_J@Z @ 0x18034E908
 * Callers:
 *     ??$ParseNumber@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@@Z @ 0x180346A48 (--$ParseNumber@$0BBA@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_r.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??$Expand@V?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@@?$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@AEAAX_K@Z @ 0x180191568 (--$Expand@V-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapi.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x1802D6668 (--0exception@std@@QEAA@QEBD@Z.c)
 */

char __fastcall tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>::Int64(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int16 v6; // ax
  __int16 v7; // ax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 56);
  v5 = v2[4];
  if ( v4 + 16 > v5 )
  {
    tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>>(v2);
    v4 = v2[3];
    v5 = v2[4];
  }
  if ( v4 + 16 > v5 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  v2[3] = v4 + 16;
  *(_OWORD *)v4 = 0LL;
  *(_QWORD *)v4 = a2;
  *(_WORD *)(v4 + 14) = 150;
  if ( a2 < 0 )
  {
    if ( a2 >= (__int64)0xFFFFFFFF80000000uLL )
    {
      v7 = 182;
      goto LABEL_12;
    }
  }
  else
  {
    v6 = 406;
    *(_WORD *)(v4 + 14) = 406;
    if ( (a2 & 0xFFFFFFFF00000000uLL) == 0 )
    {
      v6 = 470;
      *(_WORD *)(v4 + 14) = 470;
    }
    if ( (a2 & 0xFFFFFFFF80000000uLL) == 0 )
    {
      v7 = v6 | 0x20;
LABEL_12:
      *(_WORD *)(v4 + 14) = v7;
    }
  }
  return 1;
}
