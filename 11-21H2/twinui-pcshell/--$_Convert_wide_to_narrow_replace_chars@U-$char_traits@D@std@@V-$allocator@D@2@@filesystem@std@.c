/*
 * XREFs of ??$_Convert_wide_to_narrow_replace_chars@U?$char_traits@D@std@@V?$allocator@D@2@@filesystem@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@W4__std_code_page@@V?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@D@1@@Z @ 0x18057DBF4
 * Callers:
 *     ?_Pretty_message@filesystem_error@filesystem@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@V?$basic_string_view@DU?$char_traits@D@std@@@3@AEBVpath@23@1@Z @ 0x180581C04 (-_Pretty_message@filesystem_error@filesystem@std@@CA-AV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180350EB4 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ??0system_error@std@@QEAA@Verror_code@1@@Z @ 0x18057EBCC (--0system_error@std@@QEAA@Verror_code@1@@Z.c)
 *     ?_Check_convert_result@filesystem@std@@YAHU__std_fs_convert_result@@@Z @ 0x180581954 (-_Check_convert_result@filesystem@std@@YAHU__std_fs_convert_result@@@Z.c)
 *     __std_fs_convert_wide_to_narrow_replace_chars @ 0x1805E3384 (__std_fs_convert_wide_to_narrow_replace_chars.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::filesystem::_Convert_wide_to_narrow_replace_chars<std::char_traits<char>,std::allocator<char>>(
        _QWORD *Src,
        UINT CodePage,
        __int64 a3)
{
  int v5; // esi
  const WCHAR *v6; // rbp
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // r8
  int v10; // r14d
  _QWORD *v11; // rcx
  CHAR *v12; // r9
  __int64 v13; // rax
  int v15; // [rsp+40h] [rbp-58h] BYREF
  void ***v16; // [rsp+48h] [rbp-50h]
  _BYTE pExceptionObject[48]; // [rsp+50h] [rbp-48h] BYREF

  Src[2] = 0LL;
  Src[3] = 15LL;
  *(_BYTE *)Src = 0;
  if ( *(_QWORD *)(a3 + 8) )
  {
    if ( *(_QWORD *)(a3 + 8) > 0x7FFFFFFFuLL )
    {
      v15 = 22;
      v16 = &`std::_Immortalize_memcpy_image<std::_Generic_error_category>'::`2'::_Static;
      std::system_error::system_error(pExceptionObject, &v15);
      throw (std::system_error *)pExceptionObject;
    }
    v5 = *(_DWORD *)(a3 + 8);
    v6 = *(const WCHAR **)a3;
    v7 = _std_fs_convert_wide_to_narrow_replace_chars(CodePage, *(LPCWCH *)a3, v5, 0LL, 0);
    v8 = std::filesystem::_Check_convert_result(v7);
    v10 = v8;
    v11 = Src;
    if ( (unsigned __int64)v8 > Src[2] )
    {
      std::string::append((void **)Src, v8 - Src[2], v9);
    }
    else
    {
      if ( Src[3] >= 0x10uLL )
        v11 = (_QWORD *)*Src;
      Src[2] = v8;
      *((_BYTE *)v11 + v8) = 0;
    }
    v12 = (CHAR *)Src;
    if ( Src[3] >= 0x10uLL )
      v12 = (CHAR *)*Src;
    v13 = _std_fs_convert_wide_to_narrow_replace_chars(CodePage, v6, v5, v12, v10);
    std::filesystem::_Check_convert_result(v13);
  }
  return Src;
}
