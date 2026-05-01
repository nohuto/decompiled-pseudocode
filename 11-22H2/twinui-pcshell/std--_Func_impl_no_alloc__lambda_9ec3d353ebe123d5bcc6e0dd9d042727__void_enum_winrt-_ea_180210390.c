/*
 * XREFs of std::_Func_impl_no_alloc__lambda_9ec3d353ebe123d5bcc6e0dd9d042727__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Delete_this @ 0x180210390
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ @ 0x180141204 (-unconditional_release_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_9ec3d353ebe123d5bcc6e0dd9d042727__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Delete_this(
        __int64 *a1,
        char a2)
{
  __int64 *v4; // rcx

  v4 = a1 + 2;
  if ( *v4 )
    winrt::com_ptr<CMultitaskingViewManager>::unconditional_release_ref(v4);
  if ( a2 )
    operator delete(a1);
}
