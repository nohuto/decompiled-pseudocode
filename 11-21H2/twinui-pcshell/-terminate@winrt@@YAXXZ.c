/*
 * XREFs of ?terminate@winrt@@YAXXZ @ 0x18033D998
 * Callers:
 *     ?unhandled_exception@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVMiniSearchExperienceManager@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@QEBAXXZ @ 0x1801D0138 (-unhandled_exception@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVMiniSearchExper.c)
 *     std::experimental::coroutine_traits_winrt::fire_and_forget__lambda_ead74eb18ddaf5d60afd1f95853bb976__const___winrt::WindowsUdk::UI::MenuItem_const_&_winrt::WindowsUdk::UI::MenuItemInvokedArgs_const_&_::promise_type::unhandled_exception @ 0x1801E81B0 (std--experimental--coroutine_traits_winrt--fire_and_forget__lambda_ead74eb18ddaf5d6_ea_1801E81B0.c)
 * Callees:
 *     WINRT_IMPL_GetProcAddress @ 0x180189380 (WINRT_IMPL_GetProcAddress.c)
 *     LoadLibraryW_0 @ 0x18018A15A (LoadLibraryW_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802DA298 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

void __fastcall __noreturn winrt::terminate(winrt *this)
{
  void (__fastcall *ProcAddress)(_QWORD); // rbx
  HMODULE LibraryW_0; // rax
  _DWORD *v3; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  ProcAddress = (void (__fastcall *)(_QWORD))`winrt::terminate'::`2'::handler;
  if ( !`winrt::terminate'::`2'::handler )
  {
    LibraryW_0 = LoadLibraryW_0(L"combase.dll");
    ProcAddress = (void (__fastcall *)(_QWORD))WINRT_IMPL_GetProcAddress(LibraryW_0, "RoFailFastWithErrorContext");
    if ( !ProcAddress )
      ProcAddress = (void (__fastcall *)(_QWORD))winrt::impl::fallback_RoFailFastWithErrorContext;
    `winrt::terminate'::`2'::handler = (__int64)ProcAddress;
  }
  v3 = winrt::to_hresult(&v4);
  ProcAddress((unsigned int)*v3);
  abort();
}
