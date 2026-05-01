/*
 * XREFs of std::_Func_impl_no_alloc__lambda_b61fe1c2b60bf875518a0bd6b3647bbb__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Delete_this @ 0x1801CE770
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800E6350 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??$_Deallocate@$07$0A@@std@@YAXPEAX_K@Z @ 0x18031A808 (--$_Deallocate@$07$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_b61fe1c2b60bf875518a0bd6b3647bbb__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Delete_this(
        __int64 a1,
        char a2)
{
  std::wstring::~wstring((void **)(a1 + 56));
  if ( a2 )
    std::_Deallocate<8,0>(a1, 96LL);
}
