/*
 * XREFs of ?ShowAsViewMode@CAppViewManager@@UEAAXPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803B1540
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_eb7347f801496dc1bb0f8fceb055189e_::__lambda_eb7347f801496dc1bb0f8fceb055189e_ @ 0x1802D0888 (_lambda_eb7347f801496dc1bb0f8fceb055189e_--__lambda_eb7347f801496dc1bb0f8fceb055189e_.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_e0406ff635fb08f1c21915f069992ce2___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_e0406ff635fb08f1c21915f069992ce2___1_long_ @ 0x1803AC040 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1803AC040.c)
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x1803B7FCC (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CAppViewManager::ShowAsViewMode(
        CAppViewManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *a2,
        struct IPresentationRequestedArgs *a3)
{
  CAppViewManager *v5; // rdi
  _QWORD *v6; // rax
  struct IAsyncCallback *v7; // rbx
  int v8; // eax
  CAppViewManager *v9; // [rsp+20h] [rbp-28h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *v10; // [rsp+28h] [rbp-20h] BYREF
  struct IPresentationRequestedArgs *v11; // [rsp+30h] [rbp-18h] BYREF
  struct IPresentationRequestedArgs *v12; // [rsp+70h] [rbp+28h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *v13; // [rsp+78h] [rbp+30h] BYREF
  __int64 v14; // [rsp+80h] [rbp+38h] BYREF
  struct IAsyncCallback *v15; // [rsp+88h] [rbp+40h] BYREF

  v5 = (CAppViewManager *)((char *)this - 32);
  v14 = (__int64)this - 32;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
  v13 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
  v12 = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
  v9 = v5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
  v10 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
  v11 = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = (struct IAsyncCallback *)Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_e0406ff635fb08f1c21915f069992ce2___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_e0406ff635fb08f1c21915f069992ce2___1_long_(
                                    v6,
                                    &v9);
  else
    v7 = 0LL;
  v15 = v7;
  lambda_eb7347f801496dc1bb0f8fceb055189e_::__lambda_eb7347f801496dc1bb0f8fceb055189e_((__int64 *)&v9);
  v8 = CAppViewManager::_QueueOperation(v5, v7);
  if ( v8 < 0 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, _QWORD))(*(_QWORD *)a2 + 104LL))(
      a2,
      (unsigned int)v8);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
}
