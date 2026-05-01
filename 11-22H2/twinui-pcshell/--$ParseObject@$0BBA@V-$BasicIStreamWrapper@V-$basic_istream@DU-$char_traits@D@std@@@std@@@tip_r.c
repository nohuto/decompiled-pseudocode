/*
 * XREFs of ??$ParseObject@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@@Z @ 0x180151EAC
 * Callers:
 *     ??$ParseValue@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@@Z @ 0x1801520EC (--$ParseValue@$0BBA@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_ra.c)
 * Callees:
 *     ??$ParseString@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@_N@Z @ 0x1800C22E0 (--$ParseString@$0BBA@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_r.c)
 *     ??$SkipWhitespace@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@@tip_rapidjson@@YAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@0@@Z @ 0x180152064 (--$SkipWhitespace@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_rapi.c)
 *     ?Take@?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@QEAADXZ @ 0x1801520B8 (-Take@-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_rapidjson@@QEAADX.c)
 *     ??$ParseValue@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@@Z @ 0x1801520EC (--$ParseValue@$0BBA@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_ra.c)
 *     ?StartObject@?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@tip_rapidjson@@QEAA_NXZ @ 0x180152208 (-StartObject@-$GenericDocument@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip.c)
 *     ?EndObject@?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@tip_rapidjson@@QEAA_NI@Z @ 0x180152388 (-EndObject@-$GenericDocument@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_r.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 */

_BYTE *__fastcall tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::ParseObject<272,tip_rapidjson::BasicIStreamWrapper<std::istream>,tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  int v6; // eax
  _BYTE *result; // rax
  int v8; // eax
  unsigned int v9; // r14d
  int v10; // eax
  int v11; // eax
  int v12; // eax
  char v13; // dl
  _BYTE pExceptionObject[32]; // [rsp+20h] [rbp-20h] BYREF

  v6 = std::istream::peek(*a2);
  if ( v6 == -1 || (_BYTE)v6 != 123 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
  if ( (unsigned __int8)tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>::StartObject(a3) )
  {
    result = (_BYTE *)tip_rapidjson::SkipWhitespace<tip_rapidjson::BasicIStreamWrapper<std::istream>>(a2);
    if ( *(_DWORD *)(a1 + 48) )
      return result;
    v8 = std::istream::peek(*a2);
    if ( (_BYTE)v8 != 125 || v8 == -1 )
    {
      v9 = 0;
      while ( 1 )
      {
        v10 = std::istream::peek(*a2);
        if ( v10 == -1 || (_BYTE)v10 != 34 )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
            throw (std::exception *)pExceptionObject;
          }
          result = (_BYTE *)a2[1];
          *(_DWORD *)(a1 + 48) = 4;
          goto LABEL_28;
        }
        result = tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::ParseString<272,tip_rapidjson::BasicIStreamWrapper<std::istream>,tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>>(
                   (_QWORD *)a1,
                   a2,
                   a3);
        if ( *(_DWORD *)(a1 + 48) )
          return result;
        result = (_BYTE *)tip_rapidjson::SkipWhitespace<tip_rapidjson::BasicIStreamWrapper<std::istream>>(a2);
        if ( *(_DWORD *)(a1 + 48) )
          return result;
        v11 = std::istream::peek(*a2);
        if ( v11 == -1 || (_BYTE)v11 != 58 )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
            throw (std::exception *)pExceptionObject;
          }
          result = (_BYTE *)a2[1];
          *(_DWORD *)(a1 + 48) = 5;
          goto LABEL_28;
        }
        tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
        result = (_BYTE *)tip_rapidjson::SkipWhitespace<tip_rapidjson::BasicIStreamWrapper<std::istream>>(a2);
        if ( *(_DWORD *)(a1 + 48) )
          return result;
        result = (_BYTE *)tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::ParseValue<272,tip_rapidjson::BasicIStreamWrapper<std::istream>,tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>>(
                            a1,
                            a2,
                            a3);
        if ( *(_DWORD *)(a1 + 48) )
          return result;
        result = (_BYTE *)tip_rapidjson::SkipWhitespace<tip_rapidjson::BasicIStreamWrapper<std::istream>>(a2);
        if ( *(_DWORD *)(a1 + 48) )
          return result;
        ++v9;
        v12 = std::istream::peek(*a2);
        v13 = 0;
        if ( v12 != -1 )
          v13 = v12;
        if ( v13 != 44 )
          break;
        tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
        result = (_BYTE *)tip_rapidjson::SkipWhitespace<tip_rapidjson::BasicIStreamWrapper<std::istream>>(a2);
        if ( *(_DWORD *)(a1 + 48) )
          return result;
      }
      if ( v13 != 125 )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
          throw (std::exception *)pExceptionObject;
        }
        result = (_BYTE *)a2[1];
        *(_DWORD *)(a1 + 48) = 6;
        goto LABEL_28;
      }
      tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
      result = (_BYTE *)tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>::EndObject(
                          a3,
                          v9);
      if ( (_BYTE)result )
        return result;
      if ( *(_DWORD *)(a1 + 48) )
      {
        std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
        throw (std::exception *)pExceptionObject;
      }
    }
    else
    {
      tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
      result = (_BYTE *)tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>::EndObject(
                          a3,
                          0LL);
      if ( (_BYTE)result )
        return result;
      if ( *(_DWORD *)(a1 + 48) )
      {
        std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
        throw (std::exception *)pExceptionObject;
      }
    }
  }
  else if ( *(_DWORD *)(a1 + 48) )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  result = (_BYTE *)a2[1];
  *(_DWORD *)(a1 + 48) = 16;
LABEL_28:
  *(_QWORD *)(a1 + 56) = result;
  return result;
}
