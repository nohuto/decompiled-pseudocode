/*
 * XREFs of std::_Func_impl_no_alloc__lambda_f5bad7708cd3d32b6b139f2523e4a8ac__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Delete_this @ 0x1801472E0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ @ 0x180147344 (-unconditional_release_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ.c)
 *     ??$_Deallocate@$07$0A@@std@@YAXPEAX_K@Z @ 0x18031A808 (--$_Deallocate@$07$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_f5bad7708cd3d32b6b139f2523e4a8ac__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Delete_this(
        __int64 a1,
        char a2)
{
  _QWORD *v4; // rcx
  __int64 result; // rax

  v4 = (_QWORD *)(a1 + 16);
  if ( *v4 )
    result = winrt::com_ptr<CMultitaskingViewManager>::unconditional_release_ref(v4);
  if ( a2 )
    return std::_Deallocate<8,0>(a1, 24LL);
  return result;
}
