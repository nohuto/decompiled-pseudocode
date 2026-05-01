/*
 * XREFs of ??$?_0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@path@filesystem@std@@QEAAAEAV012@AEBV?$basic_string_view@GU?$char_traits@G@std@@@2@@Z @ 0x1806411E8
 * Callers:
 *     ?_Open_dir@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAVpath@23@W4directory_options@23@AEAU_Find_file_handle@23@AEAU__std_fs_find_data@@@Z @ 0x180645348 (-_Open_dir@_Dir_enum_impl@filesystem@std@@SA-AW4__std_win_error@@AEAVpath@23@W4directory_options.c)
 * Callees:
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180090A78 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x180090B34 (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
std::filesystem *__fastcall std::filesystem::path::operator/=<std::basic_string_view<unsigned short>,0>(
        std::filesystem *Src,
        __int64 a2)
{
  void *v3; // r8
  std::filesystem *v4; // rbx
  void *v6[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v7[4]; // [rsp+30h] [rbp-38h] BYREF

  v3 = *(void **)(a2 + 8);
  v6[0] = *(void **)a2;
  v6[1] = v3;
  std::wstring::wstring(v7, v6);
  v4 = std::filesystem::path::operator/=(Src, (std::filesystem *)v7);
  std::wstring::_Tidy_deallocate((__int64)v7);
  return v4;
}
