/*
 * XREFs of ??$Encode@V?$StackStream@D@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@@?$UTF8@D@tip_rapidjson@@SAXAEAV?$StackStream@D@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@1@I@Z @ 0x180413A7C
 * Callers:
 *     ??$ParseString@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@_N@Z @ 0x1800C22E0 (--$ParseString@$0BBA@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_r.c)
 * Callees:
 *     ??$Expand@D@?$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@AEAAX_K@Z @ 0x180151680 (--$Expand@D@-$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@AEAAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 */

_BYTE *__fastcall tip_rapidjson::UTF8<char>::Encode<tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::StackStream<char>>(
        _QWORD **a1,
        unsigned int a2)
{
  unsigned int v2; // ebx
  _QWORD *v4; // rsi
  _BYTE *result; // rax
  _BYTE *v6; // rcx
  __int64 v7; // rsi
  _BYTE *v8; // rcx
  __int64 v9; // rsi
  _BYTE *v10; // rcx
  _QWORD *v11; // rsi
  _BYTE *v12; // rcx
  __int64 v13; // rsi
  _BYTE *v14; // rcx
  _QWORD *v15; // rsi
  _BYTE *v16; // rcx
  _QWORD *v17; // rsi
  _BYTE *v18; // rcx
  _BYTE pExceptionObject[32]; // [rsp+20h] [rbp-20h] BYREF

  v2 = a2;
  if ( a2 > 0x7F )
  {
    if ( a2 > 0x7FF )
    {
      if ( a2 > 0xFFFF )
      {
        if ( a2 > 0x10FFFF )
        {
          std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
          throw (std::exception *)pExceptionObject;
        }
        v13 = (__int64)*a1;
        if ( (unsigned __int64)((*a1)[3] + 1LL) > (*a1)[4] )
          tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<char>(*a1);
        v14 = *(_BYTE **)(v13 + 24);
        if ( (unsigned __int64)(v14 + 1) > *(_QWORD *)(v13 + 32) )
        {
          std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
          throw (std::exception *)pExceptionObject;
        }
        *(_QWORD *)(v13 + 24) = v14 + 1;
        *v14 = (v2 >> 18) | 0xF0;
        v15 = *a1;
        ++*((_DWORD *)a1 + 2);
        if ( (unsigned __int64)(v15[3] + 1LL) > v15[4] )
          tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<char>(v15);
        v16 = (_BYTE *)v15[3];
        if ( (unsigned __int64)(v16 + 1) > v15[4] )
        {
          std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
          throw (std::exception *)pExceptionObject;
        }
        v15[3] = v16 + 1;
        *v16 = (v2 >> 12) & 0x3F | 0x80;
        v17 = *a1;
        ++*((_DWORD *)a1 + 2);
        if ( (unsigned __int64)(v17[3] + 1LL) > v17[4] )
          tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<char>(v17);
        v18 = (_BYTE *)v17[3];
        if ( (unsigned __int64)(v18 + 1) > v17[4] )
        {
          std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
          throw (std::exception *)pExceptionObject;
        }
        v17[3] = v18 + 1;
        *v18 = (v2 >> 6) & 0x3F | 0x80;
        v4 = *a1;
        ++*((_DWORD *)a1 + 2);
        if ( (unsigned __int64)(v4[3] + 1LL) > v4[4] )
          tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<char>(v4);
        result = (_BYTE *)v4[3];
        v6 = result + 1;
        if ( (unsigned __int64)(result + 1) > v4[4] )
        {
          std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
          throw (std::exception *)pExceptionObject;
        }
      }
      else
      {
        v9 = (__int64)*a1;
        if ( (unsigned __int64)((*a1)[3] + 1LL) > (*a1)[4] )
          tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<char>(*a1);
        v10 = *(_BYTE **)(v9 + 24);
        if ( (unsigned __int64)(v10 + 1) > *(_QWORD *)(v9 + 32) )
        {
          std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
          throw (std::exception *)pExceptionObject;
        }
        *(_QWORD *)(v9 + 24) = v10 + 1;
        *v10 = (v2 >> 12) | 0xE0;
        v11 = *a1;
        ++*((_DWORD *)a1 + 2);
        if ( (unsigned __int64)(v11[3] + 1LL) > v11[4] )
          tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<char>(v11);
        v12 = (_BYTE *)v11[3];
        if ( (unsigned __int64)(v12 + 1) > v11[4] )
        {
          std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
          throw (std::exception *)pExceptionObject;
        }
        v11[3] = v12 + 1;
        *v12 = (v2 >> 6) & 0x3F | 0x80;
        v4 = *a1;
        ++*((_DWORD *)a1 + 2);
        if ( (unsigned __int64)(v4[3] + 1LL) > v4[4] )
          tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<char>(v4);
        result = (_BYTE *)v4[3];
        v6 = result + 1;
        if ( (unsigned __int64)(result + 1) > v4[4] )
        {
          std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
          throw (std::exception *)pExceptionObject;
        }
      }
    }
    else
    {
      v7 = (__int64)*a1;
      if ( (unsigned __int64)((*a1)[3] + 1LL) > (*a1)[4] )
        tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<char>(*a1);
      v8 = *(_BYTE **)(v7 + 24);
      if ( (unsigned __int64)(v8 + 1) > *(_QWORD *)(v7 + 32) )
      {
        std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
        throw (std::exception *)pExceptionObject;
      }
      *(_QWORD *)(v7 + 24) = v8 + 1;
      *v8 = (v2 >> 6) | 0xC0;
      v4 = *a1;
      ++*((_DWORD *)a1 + 2);
      if ( (unsigned __int64)(v4[3] + 1LL) > v4[4] )
        tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<char>(v4);
      result = (_BYTE *)v4[3];
      v6 = result + 1;
      if ( (unsigned __int64)(result + 1) > v4[4] )
      {
        std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
        throw (std::exception *)pExceptionObject;
      }
    }
    LOBYTE(v2) = v2 & 0x3F | 0x80;
  }
  else
  {
    v4 = *a1;
    if ( (unsigned __int64)((*a1)[3] + 1LL) > (*a1)[4] )
      tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<char>(*a1);
    result = (_BYTE *)v4[3];
    v6 = result + 1;
    if ( (unsigned __int64)(result + 1) > v4[4] )
    {
      std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
      throw (std::exception *)pExceptionObject;
    }
  }
  v4[3] = v6;
  *result = v2;
  ++*((_DWORD *)a1 + 2);
  return result;
}
