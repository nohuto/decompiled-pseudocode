/*
 * XREFs of ??$Parse@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@QEAA?AUParseResult@1@AEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@@Z @ 0x180346310
 * Callers:
 *     ??$ParseStream@$0BBA@U?$UTF8@D@tip_rapidjson@@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@2@@?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@tip_rapidjson@@QEAAAEAV01@AEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@@Z @ 0x180347FF4 (--$ParseStream@$0BBA@U-$UTF8@D@tip_rapidjson@@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_t.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x1802D6668 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ??$ParseValue@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@@Z @ 0x1803487B8 (--$ParseValue@$0BBA@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_ra.c)
 *     ??$SkipWhitespace@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@@tip_rapidjson@@YAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@0@@Z @ 0x1803488B8 (--$SkipWhitespace@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_rapi.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::Parse<272,tip_rapidjson::BasicIStreamWrapper<std::istream>,tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>>(
        __int64 a1,
        _OWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  tip_rapidjson::SkipWhitespace<tip_rapidjson::BasicIStreamWrapper<std::istream>>(a3);
  if ( !*(_DWORD *)(a1 + 48) )
  {
    v8 = std::istream::peek(*a3);
    if ( v8 == -1 || !(_BYTE)v8 )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
        throw (std::exception *)pExceptionObject;
      }
      v10 = a3[1];
      *(_DWORD *)(a1 + 48) = 1;
      goto LABEL_14;
    }
    tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::ParseValue<272,tip_rapidjson::BasicIStreamWrapper<std::istream>,tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>>(
      a1,
      a3,
      a4);
    if ( !*(_DWORD *)(a1 + 48) )
    {
      tip_rapidjson::SkipWhitespace<tip_rapidjson::BasicIStreamWrapper<std::istream>>(a3);
      if ( !*(_DWORD *)(a1 + 48) )
      {
        v9 = std::istream::peek(*a3);
        if ( v9 != -1 )
        {
          if ( (_BYTE)v9 )
          {
            if ( *(_DWORD *)(a1 + 48) )
            {
              std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
              throw (std::exception *)pExceptionObject;
            }
            v10 = a3[1];
            *(_DWORD *)(a1 + 48) = 2;
LABEL_14:
            *(_QWORD *)(a1 + 56) = v10;
          }
        }
      }
    }
  }
  *a2 = *(_OWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 16);
  return a2;
}
