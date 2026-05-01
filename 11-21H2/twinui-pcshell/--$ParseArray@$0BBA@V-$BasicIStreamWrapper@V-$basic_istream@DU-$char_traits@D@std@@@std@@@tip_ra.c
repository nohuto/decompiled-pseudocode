/*
 * XREFs of ??$ParseArray@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@@Z @ 0x180346454
 * Callers:
 *     ??$ParseValue@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@@Z @ 0x1803487B8 (--$ParseValue@$0BBA@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_ra.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ?Take@?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@QEAADXZ @ 0x18022C41C (-Take@-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_rapidjson@@QEAADX.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x1802D6668 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ??$ParseValue@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@@Z @ 0x1803487B8 (--$ParseValue@$0BBA@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_ra.c)
 *     ??$SkipWhitespace@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@@tip_rapidjson@@YAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@0@@Z @ 0x1803488B8 (--$SkipWhitespace@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_rapi.c)
 *     ?EndArray@?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@tip_rapidjson@@QEAA_NI@Z @ 0x18034E2AC (-EndArray@-$GenericDocument@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_ra.c)
 *     ?StartArray@?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@tip_rapidjson@@QEAA_NXZ @ 0x18034F9FC (-StartArray@-$GenericDocument@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_.c)
 */

__int64 __fastcall tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::ParseArray<272,tip_rapidjson::BasicIStreamWrapper<std::istream>,tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  int v6; // eax
  __int64 result; // rax
  int v8; // eax
  unsigned int v9; // esi
  int v10; // eax
  int v11; // eax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v6 = std::istream::peek(*a2);
  if ( v6 == -1 || (_BYTE)v6 != 91 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
  if ( !(unsigned __int8)tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>::StartArray(a3) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
      throw (std::exception *)pExceptionObject;
    }
LABEL_23:
    result = a2[1];
    *(_DWORD *)(a1 + 48) = 16;
LABEL_27:
    *(_QWORD *)(a1 + 56) = result;
    return result;
  }
  result = tip_rapidjson::SkipWhitespace<tip_rapidjson::BasicIStreamWrapper<std::istream>>(a2);
  if ( *(_DWORD *)(a1 + 48) )
    return result;
  v8 = std::istream::peek(*a2);
  if ( v8 != -1 && (_BYTE)v8 == 93 )
  {
    tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
    result = tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>::EndArray(
               a3,
               0LL);
    if ( (_BYTE)result )
      return result;
    if ( *(_DWORD *)(a1 + 48) )
    {
      std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
      throw (std::exception *)pExceptionObject;
    }
    goto LABEL_23;
  }
  v9 = 0;
  do
  {
    result = tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::ParseValue<272,tip_rapidjson::BasicIStreamWrapper<std::istream>,tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>>(
               a1,
               a2,
               a3);
    if ( *(_DWORD *)(a1 + 48) )
      break;
    ++v9;
    result = tip_rapidjson::SkipWhitespace<tip_rapidjson::BasicIStreamWrapper<std::istream>>(a2);
    if ( *(_DWORD *)(a1 + 48) )
      break;
    v10 = std::istream::peek(*a2);
    if ( v10 == -1 || (_BYTE)v10 != 44 )
    {
      v11 = std::istream::peek(*a2);
      if ( v11 == -1 || (_BYTE)v11 != 93 )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
          throw (std::exception *)pExceptionObject;
        }
        result = a2[1];
        *(_DWORD *)(a1 + 48) = 7;
        goto LABEL_27;
      }
      tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
      result = tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>::EndArray(
                 a3,
                 v9);
      if ( (_BYTE)result )
        return result;
      if ( *(_DWORD *)(a1 + 48) )
      {
        std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
        throw (std::exception *)pExceptionObject;
      }
      goto LABEL_23;
    }
    tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
    result = tip_rapidjson::SkipWhitespace<tip_rapidjson::BasicIStreamWrapper<std::istream>>(a2);
  }
  while ( !*(_DWORD *)(a1 + 48) );
  return result;
}
