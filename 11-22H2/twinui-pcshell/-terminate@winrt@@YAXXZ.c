/*
 * XREFs of ?terminate@winrt@@YAXXZ @ 0x180392300
 * Callers:
 *     std::experimental::coroutine_traits_winrt::fire_and_forget__lambda_c27fb3894833df319de68fad3b02a886__const___::promise_type::unhandled_exception @ 0x180201A5C (std--experimental--coroutine_traits_winrt--fire_and_forget__lambda_c27fb3894833df31_ea_180201A5C.c)
 *     ?unhandled_exception@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@2@@experimental@std@@QEBAXXZ @ 0x18022B7C0 (-unhandled_exception@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUSnapFlyoutInsta.c)
 *     ?unhandled_exception@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@2@@experimental@std@@QEBAXXZ @ 0x18048EE84 (-unhandled_exception@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUPenMenuSystemTr.c)
 * Callees:
 *     WINRT_IMPL_GetProcAddress @ 0x1801C798C (WINRT_IMPL_GetProcAddress.c)
 *     LoadLibraryW_0 @ 0x1801C8394 (LoadLibraryW_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
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
