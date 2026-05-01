/*
 * XREFs of ??0_Dir_enum_impl@filesystem@std@@QEAA@$$QEAU_Creator@012@W4directory_options@12@@Z @ 0x1805846F4
 * Callers:
 *     ??$make_shared@U_Dir_enum_impl@filesystem@std@@U_Creator@123@AEBW4directory_options@23@@std@@YA?AV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@0@$$QEAU_Creator@_Dir_enum_impl@filesystem@0@AEBW4directory_options@40@@Z @ 0x180583F68 (--$make_shared@U_Dir_enum_impl@filesystem@std@@U_Creator@123@AEBW4directory_options@23@@std@@YA-.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z @ 0x180587748 (-_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
std::filesystem::_Dir_enum_impl *__fastcall std::filesystem::_Dir_enum_impl::_Dir_enum_impl(
        std::filesystem::_Dir_enum_impl *this,
        __int64 a2)
{
  _OWORD *v4; // rdi
  __int64 v5; // rax

  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  v4 = (_OWORD *)((char *)this + 32);
  *((_OWORD *)this + 2) = 0LL;
  *((_OWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 7LL;
  *((_WORD *)this + 16) = 0;
  v5 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = -1LL;
  *((_QWORD *)this + 8) = v5;
  if ( (std::filesystem::_Dir_enum_impl *)((char *)this + 32) != (std::filesystem::_Dir_enum_impl *)a2 )
  {
    std::wstring::_Tidy_deallocate((__int64)this + 32);
    *v4 = *(_OWORD *)a2;
    v4[1] = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 7LL;
    *(_WORD *)a2 = 0;
  }
  std::filesystem::_Dir_enum_impl::_Refresh(this, (const struct __std_fs_find_data *)(a2 + 40));
  return this;
}
