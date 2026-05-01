/*
 * XREFs of ??0system_error@std@@QEAA@Verror_code@1@@Z @ 0x1803D46C8
 * Callers:
 *     ??$_Convert_wide_to_narrow_replace_chars@U?$char_traits@D@std@@V?$allocator@D@2@@filesystem@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@W4__std_code_page@@V?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@D@1@@Z @ 0x1803D2D24 (--$_Convert_wide_to_narrow_replace_chars@U-$char_traits@D@std@@V-$allocator@D@2@@filesystem@std@.c)
 *     ?_Check_convert_result@filesystem@std@@YAHU__std_fs_convert_result@@@Z @ 0x1803DC81C (-_Check_convert_result@filesystem@std@@YAHU__std_fs_convert_result@@@Z.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18018AB94 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1803920BC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??0_System_error@std@@IEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x1803D4368 (--0_System_error@std@@IEAA@Verror_code@1@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::system_error::system_error(_QWORD *a1, _OWORD *a2)
{
  void *v4; // rcx
  unsigned __int64 v6; // [rsp+20h] [rbp-50h] BYREF
  void *v7[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v8[3]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v9; // [rsp+58h] [rbp-18h]

  v7[0] = a1;
  std::string::string(v8, (__int64)&`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique);
  *(_OWORD *)v7 = *a2;
  std::_System_error::_System_error(a1, v7, (__int64)v8);
  if ( v9 >= 0x10 )
  {
    v6 = v9 + 1;
    v4 = (void *)v8[0];
    v7[0] = (void *)v8[0];
    if ( v9 + 1 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v7, &v6);
      v4 = v7[0];
    }
    operator delete(v4);
  }
  *a1 = &std::system_error::`vftable';
  return a1;
}
