/*
 * XREFs of ?Switch@CAppViewManager@@UEAAXPEAUIViewEventArgsForSwitch@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802FAF60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x1800578A4 (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_73bca28b4d92a1291c49cf8f8a9be4e0___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_73bca28b4d92a1291c49cf8f8a9be4e0___1_long_ @ 0x1802F34A8 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802F34A8.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CAppViewManager::Switch(
        CAppViewManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch *a2)
{
  RTL_SRWLOCK *v3; // rbx
  struct IAsyncCallback *v4; // rax
  int v5; // eax
  RTL_SRWLOCK *v6; // [rsp+20h] [rbp-10h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch *v7; // [rsp+28h] [rbp-8h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch *v8; // [rsp+50h] [rbp+20h] BYREF
  __int64 v9; // [rsp+58h] [rbp+28h] BYREF
  struct IAsyncCallback *v10; // [rsp+60h] [rbp+30h] BYREF

  v3 = (RTL_SRWLOCK *)((char *)this - 32);
  v9 = (__int64)this - 32;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
  v8 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
  v6 = v3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v6);
  v7 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v7);
  v4 = (struct IAsyncCallback *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
    v4 = (struct IAsyncCallback *)Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_73bca28b4d92a1291c49cf8f8a9be4e0___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_73bca28b4d92a1291c49cf8f8a9be4e0___1_long_(
                                    v4,
                                    &v6);
  v10 = v4;
  v5 = CAppViewManager::_QueueOperation(v3, v4);
  if ( v5 < 0 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch *, _QWORD))(*(_QWORD *)a2 + 72LL))(
      a2,
      (unsigned int)v5);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v7);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
}
