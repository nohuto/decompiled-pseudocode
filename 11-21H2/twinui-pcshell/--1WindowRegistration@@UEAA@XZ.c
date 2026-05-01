/*
 * XREFs of ??1WindowRegistration@@UEAA@XZ @ 0x1805D242C
 * Callers:
 *     ??_G?$heap_implements@VWindowRegistration@@@impl@winrt@@UEAAPEAXI@Z @ 0x1805D24E0 (--_G-$heap_implements@VWindowRegistration@@@impl@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@PEAUHWND__@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@IEAAIXZ @ 0x18001F32C (-subtract_reference@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?CloseNoLock@WindowRegistration@@AEAAXXZ @ 0x1805D25E0 (-CloseNoLock@WindowRegistration@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall WindowRegistration::~WindowRegistration(WindowRegistration *this)
{
  const char *v1; // r9
  WindowRegistration *v2; // rbx
  void *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    v2 = this;
    *(_QWORD *)this = &WindowRegistration::`vftable';
    WindowRegistration::CloseNoLock(this);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x33,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
      v1);
    v2 = this;
  }
  v3 = (void *)*((_QWORD *)v2 + 4);
  if ( v3 )
    operator delete(v3);
  winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,HWND__ *>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::subtract_reference((__int64)v2);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock, v4, v5, v6);
}
