/*
 * XREFs of ?ShowAsViewMode@CAppViewManager@@UEAAXPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x1802F7A70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x1800578A4 (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     _lambda_ed86ba92a0a36c90dc1eb653ea3f75c8_::__lambda_ed86ba92a0a36c90dc1eb653ea3f75c8_ @ 0x1800591B8 (_lambda_ed86ba92a0a36c90dc1eb653ea3f75c8_--__lambda_ed86ba92a0a36c90dc1eb653ea3f75c8_.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_e0406ff635fb08f1c21915f069992ce2___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_e0406ff635fb08f1c21915f069992ce2___1_long_ @ 0x1802F3604 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802F3604.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CAppViewManager::ShowAsViewMode(
        CAppViewManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *a2,
        struct IPresentationRequestedArgs *a3)
{
  RTL_SRWLOCK *v5; // rdi
  _QWORD *v6; // rax
  struct IAsyncCallback *v7; // rbx
  int v8; // eax
  RTL_SRWLOCK *v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10[4]; // [rsp+28h] [rbp-20h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *v11; // [rsp+70h] [rbp+28h] BYREF
  __int64 v12; // [rsp+78h] [rbp+30h] BYREF
  struct IAsyncCallback *v13; // [rsp+80h] [rbp+38h] BYREF
  struct IPresentationRequestedArgs *v14; // [rsp+88h] [rbp+40h] BYREF

  v5 = (RTL_SRWLOCK *)((char *)this - 32);
  v12 = (__int64)this - 32;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
  v11 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
  v14 = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IPresentationRequestedArgs *))(*(_QWORD *)a3 + 8LL))(a3);
  v9 = v5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
  v10[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v10);
  v10[1] = (__int64)a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IPresentationRequestedArgs *))(*(_QWORD *)a3 + 8LL))(a3);
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = (struct IAsyncCallback *)Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_e0406ff635fb08f1c21915f069992ce2___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_e0406ff635fb08f1c21915f069992ce2___1_long_(
                                    v6,
                                    &v9);
  else
    v7 = 0LL;
  v13 = v7;
  lambda_ed86ba92a0a36c90dc1eb653ea3f75c8_::__lambda_ed86ba92a0a36c90dc1eb653ea3f75c8_((__int64 *)&v9);
  v8 = CAppViewManager::_QueueOperation(v5, v7);
  if ( v8 < 0 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, _QWORD))(*(_QWORD *)a2 + 104LL))(
      a2,
      (unsigned int)v8);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v14);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
}
