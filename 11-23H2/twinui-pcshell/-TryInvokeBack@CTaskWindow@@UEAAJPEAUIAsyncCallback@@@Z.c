/*
 * XREFs of ?TryInvokeBack@CTaskWindow@@UEAAJPEAUIAsyncCallback@@@Z @ 0x1803C8410
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs___::_)(Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____lambda_c68d2c3cb8c3b8a8d7d1e52e9b1b50b8___1_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____lambda_c68d2c3cb8c3b8a8d7d1e52e9b1b50b8___1_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs___ @ 0x1803C7D40 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1803C7D40.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTaskWindow::TryInvokeBack(CTaskWindow *this, struct IAsyncCallback *a2)
{
  __int64 v4; // rbx
  unsigned int v5; // ebx
  void *v6; // rax
  __int64 v7; // rax
  __int64 v9; // [rsp+20h] [rbp-10h] BYREF
  __int64 v10; // [rsp+28h] [rbp-8h] BYREF
  struct IAsyncCallback *v11; // [rsp+50h] [rbp+20h] BYREF
  struct IAsyncCallback *v12; // [rsp+60h] [rbp+30h] BYREF
  __int64 v13; // [rsp+68h] [rbp+38h] BYREF

  v4 = 0LL;
  if ( *((_QWORD *)this + 6) )
  {
    v13 = 0LL;
    if ( a2 )
    {
      v12 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
      v11 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
      v6 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v6 )
        v7 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs___::___Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____lambda_c68d2c3cb8c3b8a8d7d1e52e9b1b50b8___1_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____lambda_c68d2c3cb8c3b8a8d7d1e52e9b1b50b8___1_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs___(
               (__int64)v6,
               &v11);
      else
        v7 = 0LL;
      v10 = 0LL;
      v9 = 0LL;
      v4 = v7;
      v13 = v7;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 408LL))(*((_QWORD *)this + 6), v4);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
  }
  else
  {
    return (unsigned int)-2147467263;
  }
  return v5;
}
