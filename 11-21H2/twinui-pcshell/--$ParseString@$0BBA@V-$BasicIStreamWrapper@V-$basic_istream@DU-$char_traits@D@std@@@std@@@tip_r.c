/*
 * XREFs of ??$ParseString@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@_N@Z @ 0x18034814C
 * Callers:
 *     ??$ParseObject@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@@Z @ 0x180347CD4 (--$ParseObject@$0BBA@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_r.c)
 *     ??$ParseValue@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@@Z @ 0x1803487B8 (--$ParseValue@$0BBA@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_ra.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ?Resize@?$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@AEAAX_K@Z @ 0x180193348 (-Resize@-$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@AEAAX_K@Z.c)
 *     ?Take@?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@QEAADXZ @ 0x18022C41C (-Take@-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_rapidjson@@QEAADX.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x1802D6668 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ??$Encode@V?$StackStream@D@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@@?$UTF8@D@tip_rapidjson@@SAXAEAV?$StackStream@D@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@1@I@Z @ 0x180345E9C (--$Encode@V-$StackStream@D@-$GenericReader@U-$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rap.c)
 *     ??$Expand@D@?$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@AEAAX_K@Z @ 0x1803462A8 (--$Expand@D@-$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@AEAAX_K@Z.c)
 *     ??$ParseHex4@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAIAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@_K@Z @ 0x180346804 (--$ParseHex4@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_rapidjson.c)
 *     ?String@?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@tip_rapidjson@@QEAA_NPEBDI_N@Z @ 0x18035019C (-String@-$GenericDocument@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapi.c)
 */

_BYTE *__fastcall tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::ParseString<272,tip_rapidjson::BasicIStreamWrapper<std::istream>,tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  int v6; // eax
  int v7; // r14d
  _QWORD *v8; // rdi
  int v9; // eax
  __int64 v10; // r15
  int v11; // eax
  bool v12; // zf
  unsigned __int8 v13; // cl
  unsigned __int8 v14; // dl
  _BYTE *result; // rax
  __int64 v16; // r12
  _BYTE *v17; // rcx
  char v18; // r15
  unsigned __int64 v19; // rdx
  unsigned int v20; // edx
  int v21; // edi
  char v22; // al
  char *v23; // rdx
  char v24; // r15
  unsigned __int64 v25; // r8
  int v26; // ecx
  _BYTE *v27; // rcx
  unsigned __int64 v28; // r8
  __int64 v29; // rdx
  void *v30; // rax
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // rdx
  unsigned int v33; // r14d
  __int64 v34; // rdx
  _QWORD *v35; // [rsp+20h] [rbp-30h] BYREF
  int v36; // [rsp+28h] [rbp-28h]
  _BYTE pExceptionObject[32]; // [rsp+30h] [rbp-20h] BYREF

  v6 = std::istream::peek(*a2);
  if ( v6 == -1 || (_BYTE)v6 != 34 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
  v35 = (_QWORD *)a1;
  v7 = 0;
  v36 = 0;
  v8 = (_QWORD *)a1;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = std::istream::peek(*a2);
      if ( v9 == -1 )
      {
        LOBYTE(v9) = 0;
LABEL_39:
        v26 = *(_DWORD *)(a1 + 48);
        if ( (_BYTE)v9 )
        {
          if ( v26 )
          {
            std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
            throw (std::exception *)pExceptionObject;
          }
          result = (_BYTE *)a2[1];
          *(_DWORD *)(a1 + 48) = 10;
        }
        else
        {
          if ( v26 )
          {
            std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
            throw (std::exception *)pExceptionObject;
          }
          result = (_BYTE *)a2[1];
          *(_DWORD *)(a1 + 48) = 11;
        }
        *(_QWORD *)(a1 + 56) = result;
        goto LABEL_30;
      }
      if ( (_BYTE)v9 != 92 )
        break;
      v10 = a2[1];
      tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
      v11 = std::istream::peek(*a2);
      v12 = v11 == -1;
      v13 = v11;
      v14 = 0;
      result = `tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::ParseStringToStream<272,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::BasicIStreamWrapper<std::istream>,tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::StackStream<char>>'::`2'::escape;
      if ( !v12 )
        v14 = v13;
      v16 = v14;
      if ( `tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::ParseStringToStream<272,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::BasicIStreamWrapper<std::istream>,tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::StackStream<char>>'::`2'::escape[v14] )
      {
        tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
        v17 = (_BYTE *)v8[3];
        v18 = `tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::ParseStringToStream<272,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::BasicIStreamWrapper<std::istream>,tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::StackStream<char>>'::`2'::escape[v16];
        v19 = v8[4];
        if ( (unsigned __int64)(v17 + 1) > v19 )
        {
          tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<char>(v8);
          v17 = (_BYTE *)v8[3];
          v19 = v8[4];
        }
        if ( (unsigned __int64)(v17 + 1) > v19 )
        {
          std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
          throw (std::exception *)pExceptionObject;
        }
        ++v7;
        v8[3] = v17 + 1;
        v36 = v7;
        *v17 = v18;
      }
      else if ( v14 == 117 )
      {
        tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
        result = (_BYTE *)tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::ParseHex4<tip_rapidjson::BasicIStreamWrapper<std::istream>>(
                            a1,
                            a2,
                            v10);
        v20 = (unsigned int)result;
        if ( *(_DWORD *)(a1 + 48) )
          return result;
        v21 = (_DWORD)result - 55296;
        if ( (unsigned int)((_DWORD)result - 55296) <= 0x3FF )
        {
          result = (_BYTE *)std::istream::peek(*a2);
          if ( (_DWORD)result == -1
            || (_BYTE)result != 92
            || (tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2),
                result = (_BYTE *)std::istream::peek(*a2),
                (_DWORD)result == -1)
            || (_BYTE)result != 117 )
          {
            if ( *(_DWORD *)(a1 + 48) )
            {
              std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
              throw (std::exception *)pExceptionObject;
            }
            *(_DWORD *)(a1 + 48) = 9;
            *(_QWORD *)(a1 + 56) = v10;
            if ( *(_DWORD *)(a1 + 48) )
              return result;
          }
          else
          {
            tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
          }
          result = (_BYTE *)tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::ParseHex4<tip_rapidjson::BasicIStreamWrapper<std::istream>>(
                              a1,
                              a2,
                              v10);
          if ( *(_DWORD *)(a1 + 48) )
            return result;
          if ( (unsigned int)((_DWORD)result - 56320) > 0x3FF )
          {
            *(_DWORD *)(a1 + 48) = 9;
            *(_QWORD *)(a1 + 56) = v10;
            if ( *(_DWORD *)(a1 + 48) )
              return result;
          }
          v20 = (((_DWORD)result - 56320) | (v21 << 10)) + 0x10000;
        }
        tip_rapidjson::UTF8<char>::Encode<tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::StackStream<char>>(
          &v35,
          v20);
        v7 = v36;
        v8 = v35;
      }
      else
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
          throw (std::exception *)pExceptionObject;
        }
        *(_DWORD *)(a1 + 48) = 10;
        *(_QWORD *)(a1 + 56) = v10;
LABEL_30:
        if ( *(_DWORD *)(a1 + 48) )
          return result;
      }
    }
    if ( (_BYTE)v9 == 34 )
      break;
    if ( (unsigned __int8)v9 < 0x20u )
      goto LABEL_39;
    v22 = tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
    v23 = (char *)v8[3];
    v24 = v22;
    v25 = v8[4];
    if ( (unsigned __int64)(v23 + 1) > v25 )
    {
      tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<char>(v8);
      v23 = (char *)v8[3];
      v25 = v8[4];
    }
    if ( (unsigned __int64)(v23 + 1) > v25 )
    {
      std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
      throw (std::exception *)pExceptionObject;
    }
    ++v7;
    v8[3] = v23 + 1;
    v36 = v7;
    *v23 = v24;
  }
  tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
  v27 = (_BYTE *)v8[3];
  v28 = v8[4];
  if ( (unsigned __int64)(v27 + 1) > v28 )
  {
    v29 = v8[2];
    if ( v29 )
    {
      v31 = ((v28 - v29 + 1) >> 1) + v28 - v29;
    }
    else
    {
      if ( !*v8 )
      {
        v30 = operator new(1uLL);
        v27 = (_BYTE *)v8[3];
        v29 = v8[2];
        *v8 = v30;
        v8[1] = v30;
      }
      v31 = v8[5];
    }
    v32 = (unsigned __int64)&v27[-v29 + 1];
    if ( v31 >= v32 )
      v32 = v31;
    tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Resize(v8, v32);
    v27 = (_BYTE *)v8[3];
  }
  result = v27 + 1;
  if ( (unsigned __int64)(v27 + 1) > v8[4] )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  v8[3] = result;
  v33 = v7 + 1;
  *v27 = 0;
  if ( !*(_DWORD *)(a1 + 48) )
  {
    if ( v8[3] - v8[2] < (unsigned __int64)v33 )
    {
      std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
      throw (std::exception *)pExceptionObject;
    }
    v34 = v8[3] - v33;
    v8[3] = v34;
    result = (_BYTE *)tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>::String(
                        a3,
                        v34,
                        v33 - 1);
    if ( !(_BYTE)result )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
        throw (std::exception *)pExceptionObject;
      }
      result = (_BYTE *)a2[1];
      *(_DWORD *)(a1 + 48) = 16;
      *(_QWORD *)(a1 + 56) = result;
    }
  }
  return result;
}
