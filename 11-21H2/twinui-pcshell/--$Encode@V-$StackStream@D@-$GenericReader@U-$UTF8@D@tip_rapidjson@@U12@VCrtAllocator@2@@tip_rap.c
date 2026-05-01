/*
 * XREFs of ??$Encode@V?$StackStream@D@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@@?$UTF8@D@tip_rapidjson@@SAXAEAV?$StackStream@D@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@1@I@Z @ 0x180345E9C
 * Callers:
 *     ??$ParseString@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@_N@Z @ 0x18034814C (--$ParseString@$0BBA@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_r.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x1802D6668 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ??$Expand@D@?$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@AEAAX_K@Z @ 0x1803462A8 (--$Expand@D@-$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@AEAAX_K@Z.c)
 */

_BYTE *__fastcall tip_rapidjson::UTF8<char>::Encode<tip_rapidjson::GenericReader<tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator>::StackStream<char>>(
        _QWORD *a1,
        unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  _BYTE *v5; // rcx
  unsigned __int64 v6; // rdx
  _BYTE *result; // rax
  __int64 v8; // rsi
  _BYTE *v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  __int64 v12; // rsi
  _BYTE *v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rsi
  _BYTE *v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  __int64 v19; // rsi
  _BYTE *v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // rsi
  _BYTE *v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // rsi
  _BYTE *v26; // rcx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdx
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
        v19 = *a1;
        v20 = *(_BYTE **)(*a1 + 24LL);
        v21 = *(_QWORD *)(v19 + 32);
        if ( (unsigned __int64)(v20 + 1) > v21 )
        {
          tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<char>(v19);
          v20 = *(_BYTE **)(v19 + 24);
          v21 = *(_QWORD *)(v19 + 32);
        }
        if ( (unsigned __int64)(v20 + 1) > v21 )
        {
          std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
          throw (std::exception *)pExceptionObject;
        }
        *(_QWORD *)(v19 + 24) = v20 + 1;
        *v20 = (v2 >> 18) | 0xF0;
        ++*((_DWORD *)a1 + 2);
        v22 = *a1;
        v23 = *(_BYTE **)(*a1 + 24LL);
        v24 = *(_QWORD *)(*a1 + 32LL);
        if ( (unsigned __int64)(v23 + 1) > v24 )
        {
          tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<char>(*a1);
          v23 = *(_BYTE **)(v22 + 24);
          v24 = *(_QWORD *)(v22 + 32);
        }
        if ( (unsigned __int64)(v23 + 1) > v24 )
        {
          std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
          throw (std::exception *)pExceptionObject;
        }
        *(_QWORD *)(v22 + 24) = v23 + 1;
        *v23 = (v2 >> 12) & 0x3F | 0x80;
        ++*((_DWORD *)a1 + 2);
        v25 = *a1;
        v26 = *(_BYTE **)(*a1 + 24LL);
        v27 = *(_QWORD *)(*a1 + 32LL);
        if ( (unsigned __int64)(v26 + 1) > v27 )
        {
          tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<char>(*a1);
          v26 = *(_BYTE **)(v25 + 24);
          v27 = *(_QWORD *)(v25 + 32);
        }
        if ( (unsigned __int64)(v26 + 1) > v27 )
        {
          std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
          throw (std::exception *)pExceptionObject;
        }
        *(_QWORD *)(v25 + 24) = v26 + 1;
        *v26 = (v2 >> 6) & 0x3F | 0x80;
        ++*((_DWORD *)a1 + 2);
        v4 = *a1;
        v5 = *(_BYTE **)(*a1 + 24LL);
        v28 = *(_QWORD *)(*a1 + 32LL);
        if ( (unsigned __int64)(v5 + 1) > v28 )
        {
          tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<char>(*a1);
          v5 = *(_BYTE **)(v4 + 24);
          v28 = *(_QWORD *)(v4 + 32);
        }
        result = v5 + 1;
        if ( (unsigned __int64)(v5 + 1) > v28 )
        {
          std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
          throw (std::exception *)pExceptionObject;
        }
      }
      else
      {
        v12 = *a1;
        v13 = *(_BYTE **)(*a1 + 24LL);
        v14 = *(_QWORD *)(v12 + 32);
        if ( (unsigned __int64)(v13 + 1) > v14 )
        {
          tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<char>(v12);
          v13 = *(_BYTE **)(v12 + 24);
          v14 = *(_QWORD *)(v12 + 32);
        }
        if ( (unsigned __int64)(v13 + 1) > v14 )
        {
          std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
          throw (std::exception *)pExceptionObject;
        }
        *(_QWORD *)(v12 + 24) = v13 + 1;
        *v13 = (v2 >> 12) | 0xE0;
        ++*((_DWORD *)a1 + 2);
        v15 = *a1;
        v16 = *(_BYTE **)(*a1 + 24LL);
        v17 = *(_QWORD *)(*a1 + 32LL);
        if ( (unsigned __int64)(v16 + 1) > v17 )
        {
          tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<char>(*a1);
          v16 = *(_BYTE **)(v15 + 24);
          v17 = *(_QWORD *)(v15 + 32);
        }
        if ( (unsigned __int64)(v16 + 1) > v17 )
        {
          std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
          throw (std::exception *)pExceptionObject;
        }
        *(_QWORD *)(v15 + 24) = v16 + 1;
        *v16 = (v2 >> 6) & 0x3F | 0x80;
        ++*((_DWORD *)a1 + 2);
        v4 = *a1;
        v5 = *(_BYTE **)(*a1 + 24LL);
        v18 = *(_QWORD *)(*a1 + 32LL);
        if ( (unsigned __int64)(v5 + 1) > v18 )
        {
          tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<char>(*a1);
          v5 = *(_BYTE **)(v4 + 24);
          v18 = *(_QWORD *)(v4 + 32);
        }
        result = v5 + 1;
        if ( (unsigned __int64)(v5 + 1) > v18 )
        {
          std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
          throw (std::exception *)pExceptionObject;
        }
      }
    }
    else
    {
      v8 = *a1;
      v9 = *(_BYTE **)(*a1 + 24LL);
      v10 = *(_QWORD *)(v8 + 32);
      if ( (unsigned __int64)(v9 + 1) > v10 )
      {
        tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<char>(v8);
        v9 = *(_BYTE **)(v8 + 24);
        v10 = *(_QWORD *)(v8 + 32);
      }
      if ( (unsigned __int64)(v9 + 1) > v10 )
      {
        std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
        throw (std::exception *)pExceptionObject;
      }
      *(_QWORD *)(v8 + 24) = v9 + 1;
      *v9 = (v2 >> 6) | 0xC0;
      ++*((_DWORD *)a1 + 2);
      v4 = *a1;
      v5 = *(_BYTE **)(*a1 + 24LL);
      v11 = *(_QWORD *)(*a1 + 32LL);
      if ( (unsigned __int64)(v5 + 1) > v11 )
      {
        tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<char>(*a1);
        v5 = *(_BYTE **)(v4 + 24);
        v11 = *(_QWORD *)(v4 + 32);
      }
      result = v5 + 1;
      if ( (unsigned __int64)(v5 + 1) > v11 )
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
    v5 = *(_BYTE **)(*a1 + 24LL);
    v6 = *(_QWORD *)(v4 + 32);
    if ( (unsigned __int64)(v5 + 1) > v6 )
    {
      tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<char>(v4);
      v5 = *(_BYTE **)(v4 + 24);
      v6 = *(_QWORD *)(v4 + 32);
    }
    result = v5 + 1;
    if ( (unsigned __int64)(v5 + 1) > v6 )
    {
      std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
      throw (std::exception *)pExceptionObject;
    }
  }
  *(_QWORD *)(v4 + 24) = result;
  *v5 = v2;
  ++*((_DWORD *)a1 + 2);
  return result;
}
