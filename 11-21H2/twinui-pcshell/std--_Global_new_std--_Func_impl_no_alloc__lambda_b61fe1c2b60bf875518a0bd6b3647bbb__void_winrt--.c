/*
 * XREFs of std::_Global_new_std::_Func_impl_no_alloc__lambda_b61fe1c2b60bf875518a0bd6b3647bbb__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension___lambda_b61fe1c2b60bf875518a0bd6b3647bbb__const_&_ @ 0x1801C208C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_b61fe1c2b60bf875518a0bd6b3647bbb__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Copy @ 0x1801CE640 (std--_Func_impl_no_alloc__lambda_b61fe1c2b60bf875518a0bd6b3647bbb__void_winrt--WindowsUdk--UI--S.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009EA78 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     _std::_Global_new_std::_Func_impl_no_alloc__lambda_b61fe1c2b60bf875518a0bd6b3647bbb__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension___lambda_b61fe1c2b60bf875518a0bd6b3647bbb____::_2_::_Guard_type::__Guard_type @ 0x1801C479C (_std--_Global_new_std--_Func_impl_no_alloc__lambda_b61fe1c2b60bf875518a0bd6b3647bbb_ea_1801C479C.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::_Global_new_std::_Func_impl_no_alloc__lambda_b61fe1c2b60bf875518a0bd6b3647bbb__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension___lambda_b61fe1c2b60bf875518a0bd6b3647bbb__const___(
        __int64 a1)
{
  char *v2; // rbx
  char *v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x60uLL);
  v4 = v2;
  *(_QWORD *)v2 = off_180645840;
  *((_QWORD *)v2 + 1) = *(_QWORD *)a1;
  *((_OWORD *)v2 + 1) = *(_OWORD *)(a1 + 8);
  *((_QWORD *)v2 + 4) = *(_QWORD *)(a1 + 24);
  *(_OWORD *)(v2 + 40) = *(_OWORD *)(a1 + 32);
  std::wstring::wstring((__int64)(v2 + 56), a1 + 48);
  v2[88] = *(_BYTE *)(a1 + 80);
  v4 = 0LL;
  std::_Global_new_std::_Func_impl_no_alloc__lambda_b61fe1c2b60bf875518a0bd6b3647bbb__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension___lambda_b61fe1c2b60bf875518a0bd6b3647bbb____::_2_::_Guard_type::__Guard_type(&v4);
  return v2;
}
