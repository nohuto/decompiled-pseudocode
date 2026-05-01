/*
 * XREFs of std::_Func_impl_no_alloc__lambda_5ac696817d9ead6e33159563da3f5a7c__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Delete_this @ 0x180248130
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_5ac696817d9ead6e33159563da3f5a7c__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Delete_this(
        void *a1,
        char a2)
{
  std::wstring::_Tidy_deallocate((__int64)a1 + 24);
  if ( a2 )
    operator delete(a1);
}
