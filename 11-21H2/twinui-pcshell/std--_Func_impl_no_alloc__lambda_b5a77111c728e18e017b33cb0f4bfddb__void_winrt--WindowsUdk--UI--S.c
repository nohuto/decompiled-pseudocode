/*
 * XREFs of std::_Func_impl_no_alloc__lambda_b5a77111c728e18e017b33cb0f4bfddb__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Copy @ 0x1801CE5B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009EA78 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     _std::_Global_new_std::_Func_impl_no_alloc__lambda_b5a77111c728e18e017b33cb0f4bfddb__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension___lambda_b5a77111c728e18e017b33cb0f4bfddb____::_2_::_Guard_type::__Guard_type @ 0x1801C4778 (_std--_Global_new_std--_Func_impl_no_alloc__lambda_b5a77111c728e18e017b33cb0f4bfddb__void_winrt-.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_b5a77111c728e18e017b33cb0f4bfddb__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Copy(
        __int64 a1)
{
  _QWORD *v2; // rbx
  void *v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x50uLL);
  v4 = v2;
  *v2 = off_180645810;
  v2[1] = *(_QWORD *)(a1 + 8);
  *((_OWORD *)v2 + 1) = *(_OWORD *)(a1 + 16);
  v2[4] = *(_QWORD *)(a1 + 32);
  std::wstring::wstring((__int64)(v2 + 5), a1 + 40);
  *((_BYTE *)v2 + 72) = *(_BYTE *)(a1 + 72);
  v4 = 0LL;
  std::_Global_new_std::_Func_impl_no_alloc__lambda_b5a77111c728e18e017b33cb0f4bfddb__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension___lambda_b5a77111c728e18e017b33cb0f4bfddb____::_2_::_Guard_type::__Guard_type(&v4);
  return v2;
}
