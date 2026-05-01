/*
 * XREFs of ?string_to_wstring@util@cereal@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV?$basic_string_view@DU?$char_traits@D@std@@@4@@Z @ 0x18041B264
 * Callers:
 *     ?loadValue@JSONInputArchive@cereal@@QEAAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18041AB24 (-loadValue@JSONInputArchive@cereal@@QEAAXAEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1802CED4A (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ??0Exception@cereal@@QEAA@PEBD@Z @ 0x1804167A4 (--0Exception@cereal@@QEAA@PEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
wchar_t *__fastcall cereal::util::string_to_wstring(wchar_t *lpWideCharStr, __int64 a2)
{
  int v4; // eax
  __int64 cchWideChar; // rdi
  wchar_t *v6; // rax
  WCHAR *v7; // rax
  _BYTE pExceptionObject[32]; // [rsp+38h] [rbp-20h] BYREF

  *(_QWORD *)lpWideCharStr = 0LL;
  *((_QWORD *)lpWideCharStr + 2) = 0LL;
  *((_QWORD *)lpWideCharStr + 3) = 7LL;
  *lpWideCharStr = 0;
  if ( *(_QWORD *)(a2 + 8) )
  {
    v4 = MultiByteToWideChar(0xFDE9u, 0, *(LPCCH *)a2, *(_DWORD *)(a2 + 8), 0LL, 0);
    cchWideChar = v4;
    if ( v4 > 0 )
    {
      if ( (unsigned __int64)v4 > *((_QWORD *)lpWideCharStr + 2) )
      {
        std::wstring::append(lpWideCharStr, v4 - *((_QWORD *)lpWideCharStr + 2), 0);
      }
      else
      {
        v6 = lpWideCharStr;
        if ( *((_QWORD *)lpWideCharStr + 3) >= 8uLL )
          v6 = *(wchar_t **)lpWideCharStr;
        *((_QWORD *)lpWideCharStr + 2) = cchWideChar;
        v6[cchWideChar] = 0;
      }
      v7 = lpWideCharStr;
      if ( *((_QWORD *)lpWideCharStr + 3) >= 8uLL )
        v7 = *(WCHAR **)lpWideCharStr;
      LODWORD(cchWideChar) = MultiByteToWideChar(0xFDE9u, 0, *(LPCCH *)a2, *(_DWORD *)(a2 + 8), v7, cchWideChar);
    }
    if ( !(_DWORD)cchWideChar )
    {
      cereal::Exception::Exception(
        (cereal::Exception *)pExceptionObject,
        "String conversion failed to convert a non-empty ANSI string to Unicode.");
      throw (cereal::Exception *)pExceptionObject;
    }
  }
  return lpWideCharStr;
}
