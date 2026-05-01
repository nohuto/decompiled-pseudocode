/*
 * XREFs of ?_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z @ 0x180587748
 * Callers:
 *     ??0_Dir_enum_impl@filesystem@std@@QEAA@$$QEAU_Creator@012@W4directory_options@12@@Z @ 0x1805846F4 (--0_Dir_enum_impl@filesystem@std@@QEAA@$$QEAU_Creator@012@W4directory_options@12@@Z.c)
 *     ?_Advance_and_reset_if_no_more_files@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@3@@Z @ 0x180587418 (-_Advance_and_reset_if_no_more_files@_Dir_enum_impl@filesystem@std@@SA-AW4__std_win_error@@AEAV-.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18010AACC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?erase@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K@Z @ 0x180576D3C (-erase@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K@Z.c)
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x180584CCC (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z @ 0x1805874F8 (-_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall std::filesystem::_Dir_enum_impl::_Refresh(
        std::filesystem::_Dir_enum_impl *this,
        const struct __std_fs_find_data *a2)
{
  std::filesystem *v2; // rbx
  char *v3; // rdx
  unsigned __int64 v4; // r8
  const unsigned __int16 *v5; // r8
  std::filesystem *v6; // rdi
  const unsigned __int16 *filename; // rax
  char v8[16]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]
  __int64 v10; // [rsp+40h] [rbp-18h]

  *((_DWORD *)this + 4) = *(_DWORD *)a2;
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 9);
  *((_DWORD *)this + 7) = 6;
  if ( (*(_DWORD *)a2 & 0x400) == 0 )
  {
    *((_QWORD *)this + 1) = *((unsigned int *)a2 + 8) + ((unsigned __int64)*((unsigned int *)a2 + 7) << 32);
    *(_QWORD *)this = *(_QWORD *)((char *)a2 + 20);
    *((_DWORD *)this + 7) = 46;
  }
  v2 = (std::filesystem::_Dir_enum_impl *)((char *)this + 32);
  v3 = (char *)a2 + 44;
  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)&v3[2 * v4] );
  v9 = 0LL;
  v10 = 7LL;
  *(_WORD *)v8 = 0;
  std::wstring::assign(v8, v3, v4);
  v6 = v2;
  if ( *((_QWORD *)v2 + 3) >= 8uLL )
    v6 = *(std::filesystem **)v2;
  filename = std::filesystem::_Find_filename(v6, (char *)v6 + 2 * *((_QWORD *)v2 + 2), v5);
  std::wstring::erase(v2, ((char *)filename - (char *)v6) >> 1);
  std::filesystem::path::operator/=(v2, (std::filesystem *)v8);
  std::wstring::_Tidy_deallocate((__int64)v8);
}
