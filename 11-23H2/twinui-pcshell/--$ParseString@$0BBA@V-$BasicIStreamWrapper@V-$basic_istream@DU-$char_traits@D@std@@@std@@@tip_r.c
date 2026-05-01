/*
 * XREFs of ??$ParseString@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@_N@Z @ 0x1800C22E0
 * Callers:
 *     ??$ParseObject@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@@Z @ 0x180151EAC (--$ParseObject@$0BBA@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_r.c)
 *     ??$ParseValue@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@@Z @ 0x1801520EC (--$ParseValue@$0BBA@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_ra.c)
 * Callees:
 *     ??$Expand@D@?$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@AEAAX_K@Z @ 0x180151680 (--$Expand@D@-$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@AEAAX_K@Z.c)
 *     ?Take@?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@QEAADXZ @ 0x1801520B8 (-Take@-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_rapidjson@@QEAADX.c)
 *     ?String@?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@tip_rapidjson@@QEAA_NPEBDI_N@Z @ 0x180152448 (-String@-$GenericDocument@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapi.c)
 *     ?Resize@?$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@AEAAX_K@Z @ 0x180152788 (-Resize@-$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@AEAAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ??$Encode@V?$StackStream@D@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@@?$UTF8@D@tip_rapidjson@@SAXAEAV?$StackStream@D@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@1@I@Z @ 0x180413A7C (--$Encode@V-$StackStream@D@-$GenericReader@U-$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rap.c)
 *     ??$ParseHex4@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAIAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@_K@Z @ 0x180413E68 (--$ParseHex4@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_rapidjson.c)
 */

_BYTE *__fastcall tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::ParseString<272,tip_rapidjson::BasicIStreamWrapper<std::istream>,tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  int v5; // eax
  unsigned int v6; // r14d
  _QWORD *v7; // rdi
  int v8; // eax
  char v9; // bl
  _BYTE *v10; // rcx
  _BYTE *v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  _BYTE *v17; // rcx
  _BYTE *result; // rax
  _QWORD *v19; // rbx
  __int64 v20; // rdx
  void *v21; // rax
  __int64 v22; // r15
  int v23; // eax
  bool v24; // zf
  unsigned __int8 v25; // cl
  unsigned __int8 v26; // dl
  __int64 v27; // rbx
  __int64 v28; // rdx
  int v29; // r12d
  _QWORD *v30; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v31; // [rsp+28h] [rbp-28h]
  _BYTE pExceptionObject[32]; // [rsp+30h] [rbp-20h] BYREF

  v5 = std::istream::peek(*a2);
  if ( v5 == -1 || (_BYTE)v5 != 34 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
  v30 = a1;
  v6 = 0;
  v31 = 0;
  v7 = a1;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = std::istream::peek(*a2);
      if ( v8 != -1 )
        break;
      LOBYTE(v8) = 0;
LABEL_54:
      v19 = a1 + 6;
      if ( (_BYTE)v8 )
      {
        if ( *(_DWORD *)v19 )
        {
          std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
          throw (std::exception *)pExceptionObject;
        }
        result = (_BYTE *)a2[1];
        *(_DWORD *)v19 = 10;
      }
      else
      {
        if ( *(_DWORD *)v19 )
        {
          std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
          throw (std::exception *)pExceptionObject;
        }
        result = (_BYTE *)a2[1];
        *(_DWORD *)v19 = 11;
      }
      a1[7] = result;
LABEL_60:
      if ( *(_DWORD *)v19 )
        goto LABEL_22;
    }
    if ( (_BYTE)v8 != 92 )
      break;
    v22 = a2[1];
    tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
    v23 = std::istream::peek(*a2);
    v24 = v23 == -1;
    v25 = v23;
    v26 = 0;
    result = `tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::ParseStringToStream<272,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::BasicIStreamWrapper<std::istream>,tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::StackStream<char>>'::`2'::escape;
    if ( !v24 )
      v26 = v25;
    v27 = v26;
    if ( `tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::ParseStringToStream<272,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::BasicIStreamWrapper<std::istream>,tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::StackStream<char>>'::`2'::escape[v26] )
    {
      tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
      v9 = `tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::ParseStringToStream<272,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::BasicIStreamWrapper<std::istream>,tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::StackStream<char>>'::`2'::escape[v27];
      if ( (unsigned __int64)(v7[3] + 1LL) > v7[4] )
        tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<char>(v7);
      v10 = (_BYTE *)v7[3];
      v11 = v10 + 1;
      if ( (unsigned __int64)(v10 + 1) > v7[4] )
      {
        std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
        throw (std::exception *)pExceptionObject;
      }
LABEL_11:
      ++v6;
      v7[3] = v11;
      v31 = v6;
      *v10 = v9;
    }
    else
    {
      v19 = a1 + 6;
      if ( v26 != 117 )
      {
        if ( *(_DWORD *)v19 )
        {
          std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
          throw (std::exception *)pExceptionObject;
        }
        *(_DWORD *)v19 = 10;
        a1[7] = v22;
        goto LABEL_60;
      }
      tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
      result = (_BYTE *)tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::ParseHex4<tip_rapidjson::BasicIStreamWrapper<std::istream>>(
                          a1,
                          a2,
                          v22);
      v28 = (unsigned int)result;
      if ( *(_DWORD *)v19 )
        return result;
      v29 = (_DWORD)result - 55296;
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
          if ( *(_DWORD *)v19 )
          {
            std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
            throw (std::exception *)pExceptionObject;
          }
          *(_DWORD *)v19 = 9;
          a1[7] = v22;
          if ( *(_DWORD *)v19 )
            goto LABEL_22;
        }
        else
        {
          tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
        }
        result = (_BYTE *)tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::ParseHex4<tip_rapidjson::BasicIStreamWrapper<std::istream>>(
                            a1,
                            a2,
                            v22);
        if ( *(_DWORD *)v19 )
          goto LABEL_22;
        if ( (unsigned int)((_DWORD)result - 56320) > 0x3FF )
        {
          *(_DWORD *)v19 = 9;
          a1[7] = v22;
          if ( *(_DWORD *)v19 )
            goto LABEL_22;
        }
        v28 = (((_DWORD)result - 56320) | (unsigned int)(v29 << 10)) + 0x10000;
      }
      tip_rapidjson::UTF8<char>::Encode<tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::StackStream<char>>(
        &v30,
        v28);
      v6 = v31;
      v7 = v30;
    }
  }
  if ( (_BYTE)v8 != 34 )
  {
    if ( (unsigned __int8)v8 >= 0x20u )
    {
      v9 = tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
      if ( (unsigned __int64)(v7[3] + 1LL) > v7[4] )
        tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<char>(v7);
      v10 = (_BYTE *)v7[3];
      v11 = v10 + 1;
      if ( (unsigned __int64)(v10 + 1) > v7[4] )
      {
        std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
        throw (std::exception *)pExceptionObject;
      }
      goto LABEL_11;
    }
    goto LABEL_54;
  }
  tip_rapidjson::BasicIStreamWrapper<std::istream>::Take(a2);
  v12 = v7[3];
  v13 = v7[4];
  if ( v12 + 1 > v13 )
  {
    v14 = v7[2];
    if ( v14 )
    {
      v15 = ((v13 - v14 + 1) >> 1) + v13 - v14;
    }
    else
    {
      if ( !*v7 )
      {
        v21 = operator new(1uLL);
        v12 = v7[3];
        v14 = v7[2];
        *v7 = v21;
        v7[1] = v21;
      }
      v15 = v7[5];
    }
    v16 = v12 - v14 + 1;
    if ( v15 >= v16 )
      v16 = v15;
    tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Resize(v7, v16);
  }
  v17 = (_BYTE *)v7[3];
  result = v17 + 1;
  if ( (unsigned __int64)(v17 + 1) > v7[4] )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  v7[3] = result;
  v19 = a1 + 6;
  *v17 = 0;
  ++v6;
LABEL_22:
  if ( !*(_DWORD *)v19 )
  {
    if ( v7[3] - v7[2] < (unsigned __int64)v6 )
    {
      std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
      throw (std::exception *)pExceptionObject;
    }
    v20 = v7[3] - v6;
    v7[3] = v20;
    result = (_BYTE *)tip_rapidjson::GenericDocument<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>,tip_rapidjson::CrtAllocator>::String(
                        a3,
                        v20,
                        v6 - 1);
    if ( !(_BYTE)result )
    {
      if ( *(_DWORD *)v19 )
      {
        std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
        throw (std::exception *)pExceptionObject;
      }
      result = (_BYTE *)a2[1];
      *(_DWORD *)v19 = 16;
      v19[1] = result;
    }
  }
  return result;
}
