/*
 * XREFs of ?_Check_convert_result@filesystem@std@@YAHU__std_fs_convert_result@@@Z @ 0x1803DC81C
 * Callers:
 *     ??$_Convert_wide_to_narrow_replace_chars@U?$char_traits@D@std@@V?$allocator@D@2@@filesystem@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@W4__std_code_page@@V?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@D@1@@Z @ 0x1803D2D24 (--$_Convert_wide_to_narrow_replace_chars@U-$char_traits@D@std@@V-$allocator@D@2@@filesystem@std@.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0system_error@std@@QEAA@Verror_code@1@@Z @ 0x1803D46C8 (--0system_error@std@@QEAA@Verror_code@1@@Z.c)
 */

__int64 __fastcall std::filesystem::_Check_convert_result(__int64 a1)
{
  __int128 v2; // [rsp+20h] [rbp-48h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+30h] [rbp-38h] BYREF

  if ( HIDWORD(a1) )
  {
    LODWORD(v2) = HIDWORD(a1);
    *((_QWORD *)&v2 + 1) = &`std::_Immortalize_memcpy_image<std::_System_error_category>'::`2'::_Static;
    std::system_error::system_error(pExceptionObject, &v2);
    throw (std::system_error *)pExceptionObject;
  }
  return (unsigned int)a1;
}
