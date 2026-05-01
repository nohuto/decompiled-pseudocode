/*
 * XREFs of ?ShowAsStandalone@CAppViewManager@@UEAAJPEAUIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x1800575A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x1800578A4 (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_ed86ba92a0a36c90dc1eb653ea3f75c8___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_ed86ba92a0a36c90dc1eb653ea3f75c8___1_long_ @ 0x180057D8C (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_180057D8C.c)
 *     _lambda_ed86ba92a0a36c90dc1eb653ea3f75c8_::__lambda_ed86ba92a0a36c90dc1eb653ea3f75c8_ @ 0x1800591B8 (_lambda_ed86ba92a0a36c90dc1eb653ea3f75c8_--__lambda_ed86ba92a0a36c90dc1eb653ea3f75c8_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAppViewManager::ShowAsStandalone(
        CAppViewManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone *a2,
        struct IPresentationRequestedArgs *a3)
{
  CAppViewManager *v5; // rdi
  void *v6; // rax
  struct IAsyncCallback *v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  CAppViewManager *v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone *v14; // [rsp+70h] [rbp+28h] BYREF
  __int64 v15; // [rsp+78h] [rbp+30h] BYREF
  struct IAsyncCallback *v16; // [rsp+80h] [rbp+38h] BYREF
  struct IPresentationRequestedArgs *v17; // [rsp+88h] [rbp+40h] BYREF

  v5 = (CAppViewManager *)((char *)this - 32);
  v15 = (__int64)this - 32;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
  v14 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
  v17 = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IPresentationRequestedArgs *))(*(_QWORD *)a3 + 8LL))(a3);
  v11 = v5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
  v12[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v12);
  v12[1] = (__int64)a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IPresentationRequestedArgs *))(*(_QWORD *)a3 + 8LL))(a3);
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = (struct IAsyncCallback *)Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_ed86ba92a0a36c90dc1eb653ea3f75c8___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_ed86ba92a0a36c90dc1eb653ea3f75c8___1_long_(
                                    v6,
                                    &v11);
  else
    v7 = 0LL;
  v16 = v7;
  lambda_ed86ba92a0a36c90dc1eb653ea3f75c8_::__lambda_ed86ba92a0a36c90dc1eb653ea3f75c8_(&v11);
  if ( v7 )
  {
    v8 = CAppViewManager::_QueueOperation(v5, v7);
    v9 = v8;
    if ( v8 < 0 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone *, _QWORD))(*(_QWORD *)a2 + 96LL))(
        a2,
        (unsigned int)v8);
  }
  else
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x234,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)0x8007000ELL,
      (int)v11);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v17);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  return v9;
}
