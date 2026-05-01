/*
 * XREFs of ??$?_0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@path@filesystem@std@@QEAAAEAV012@AEBV?$basic_string_view@GU?$char_traits@G@std@@@2@@Z @ 0x180582968
 * Callers:
 *     ?_Open_dir@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAVpath@23@W4directory_options@23@AEAU_Find_file_handle@23@AEAU__std_fs_find_data@@@Z @ 0x18058757C (-_Open_dir@_Dir_enum_impl@filesystem@std@@SA-AW4__std_win_error@@AEAVpath@23@W4directory_options.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18010AACC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x180584CCC (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::filesystem::path::operator/=<std::basic_string_view<unsigned short>,0>(void *Src, __int64 a2)
{
  __int64 v3; // rbx
  char v5[16]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v6; // [rsp+38h] [rbp-20h]
  __int64 v7; // [rsp+40h] [rbp-18h]

  v6 = 0LL;
  v7 = 7LL;
  *(_WORD *)v5 = 0;
  std::wstring::assign(v5, *(const void **)a2, *(_QWORD *)(a2 + 8));
  v3 = std::filesystem::path::operator/=(Src, (std::filesystem *)v5);
  std::wstring::_Tidy_deallocate((__int64)v5);
  return v3;
}
