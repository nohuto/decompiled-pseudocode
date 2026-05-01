/*
 * XREFs of _winrt::impl::invoke_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::SearchAppHost_winrt::Windows::Foundation::IInspectable__winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost_std::nullptr_t__::_1_::catch$12 @ 0x1801A3A16
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802DA298 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 *     ??$load_runtime_function@P6AHHHPEAX@_EP6AHHH0@_E@impl@winrt@@YAXPEBDAEAP6AHHHPEAX@_EP6AHHH1@_E@Z @ 0x180341354 (--$load_runtime_function@P6AHHHPEAX@_EP6AHHH0@_E@impl@winrt@@YAXPEBDAEAP6AHHHPEAX@_EP6AHHH1@_E@Z.c)
 */

_BOOL8 __fastcall winrt::impl::invoke_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::SearchAppHost_winrt::Windows::Foundation::IInspectable__winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost_std::nullptr_t__::_1_::catch_12(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = *(_DWORD *)winrt::to_hresult(a2 + 64);
  ___load_runtime_function_P6AHHHPEAX__EP6AHHH0__E_impl_winrt__YAXPEBDAEAP6AHHHPEAX__EP6AHHH1__E_Z(
    v3,
    &`winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>,winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,std::nullptr_t>'::`4'::handler);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))`winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>,winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,std::nullptr_t>'::`4'::handler)(
    v2,
    0LL,
    0LL);
  return v2 == -2147417848 || v2 == -2147023174 || v2 == -1996357631;
}
