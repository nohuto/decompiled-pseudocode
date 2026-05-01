/*
 * XREFs of ??$_Convert_wide_to_narrow_replace_chars@U?$char_traits@D@std@@V?$allocator@D@2@@filesystem@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@W4__std_code_page@@V?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@D@1@@Z @ 0x1803D2D24
 * Callers:
 *     ?_Pretty_message@filesystem_error@filesystem@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@V?$basic_string_view@DU?$char_traits@D@std@@@3@AEBVpath@23@1@Z @ 0x1803DCA1C (-_Pretty_message@filesystem_error@filesystem@std@@CA-AV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x1802D236A (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ??0system_error@std@@QEAA@Verror_code@1@@Z @ 0x1803D46C8 (--0system_error@std@@QEAA@Verror_code@1@@Z.c)
 *     ?_Check_convert_result@filesystem@std@@YAHU__std_fs_convert_result@@@Z @ 0x1803DC81C (-_Check_convert_result@filesystem@std@@YAHU__std_fs_convert_result@@@Z.c)
 *     __std_fs_convert_wide_to_narrow_replace_chars @ 0x1807374C4 (__std_fs_convert_wide_to_narrow_replace_chars.c)
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
  int v9; // r14d
  _QWORD *v10; // rcx
  CHAR *v11; // r9
  __int64 v12; // rax
  int v14; // [rsp+40h] [rbp-58h] BYREF
  void ***v15; // [rsp+48h] [rbp-50h]
  _BYTE pExceptionObject[48]; // [rsp+50h] [rbp-48h] BYREF

  *Src = 0LL;
  Src[2] = 0LL;
  Src[2] = 0LL;
  Src[3] = 15LL;
  *(_BYTE *)Src = 0;
  if ( *(_QWORD *)(a3 + 8) )
  {
    if ( *(_QWORD *)(a3 + 8) > 0x7FFFFFFFuLL )
    {
      v14 = 22;
      v15 = &`std::_Immortalize_memcpy_image<std::_Generic_error_category>'::`2'::_Static;
      std::system_error::system_error(pExceptionObject, &v14);
      throw (std::system_error *)pExceptionObject;
    }
    v5 = *(_DWORD *)(a3 + 8);
    v6 = *(const WCHAR **)a3;
    v7 = _std_fs_convert_wide_to_narrow_replace_chars(CodePage, *(LPCWCH *)a3, v5, 0LL, 0);
    v8 = std::filesystem::_Check_convert_result(v7);
    v9 = v8;
    v10 = Src;
    if ( (unsigned __int64)v8 > Src[2] )
    {
      std::string::append(Src, v8 - Src[2]);
    }
    else
    {
      if ( Src[3] >= 0x10uLL )
        v10 = (_QWORD *)*Src;
      Src[2] = v8;
      *((_BYTE *)v10 + v8) = 0;
    }
    v11 = (CHAR *)Src;
    if ( Src[3] >= 0x10uLL )
      v11 = (CHAR *)*Src;
    v12 = _std_fs_convert_wide_to_narrow_replace_chars(CodePage, v6, v5, v11, v9);
    std::filesystem::_Check_convert_result(v12);
  }
  return Src;
}
