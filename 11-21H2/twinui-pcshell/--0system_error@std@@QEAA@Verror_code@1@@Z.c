/*
 * XREFs of ??0system_error@std@@QEAA@Verror_code@1@@Z @ 0x18057EBCC
 * Callers:
 *     ??$_Convert_wide_to_narrow_replace_chars@U?$char_traits@D@std@@V?$allocator@D@2@@filesystem@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@W4__std_code_page@@V?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@D@1@@Z @ 0x18057DBF4 (--$_Convert_wide_to_narrow_replace_chars@U-$char_traits@D@std@@V-$allocator@D@2@@filesystem@std@.c)
 *     ?_Check_convert_result@filesystem@std@@YAHU__std_fs_convert_result@@@Z @ 0x180581954 (-_Check_convert_result@filesystem@std@@YAHU__std_fs_convert_result@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E911C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18034C21C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0_System_error@std@@IEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18057E828 (--0_System_error@std@@IEAA@Verror_code@1@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::system_error::system_error(_QWORD *a1, _OWORD *a2)
{
  __int64 v4; // r8
  void *v5; // rcx
  unsigned __int64 v7; // [rsp+20h] [rbp-50h] BYREF
  void *v8[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v9[3]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v10; // [rsp+58h] [rbp-18h]

  v8[0] = a1;
  std::string::string(v9, (__int64)&`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique);
  *(_OWORD *)v8 = *a2;
  std::_System_error::_System_error(a1, v8, (__int64)v9);
  if ( v10 >= 0x10 )
  {
    v7 = v10 + 1;
    v5 = (void *)v9[0];
    v8[0] = (void *)v9[0];
    if ( v10 + 1 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v8, &v7, v4);
      v5 = v8[0];
    }
    operator delete(v5);
  }
  *a1 = &std::system_error::`vftable';
  return a1;
}
