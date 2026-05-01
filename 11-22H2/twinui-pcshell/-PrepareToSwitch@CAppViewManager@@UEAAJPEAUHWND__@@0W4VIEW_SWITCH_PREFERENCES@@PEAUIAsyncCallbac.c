/*
 * XREFs of ?PrepareToSwitch@CAppViewManager@@UEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x1803B0AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_c5bad73058b4167fadc00bcfc86ad84b___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_c5bad73058b4167fadc00bcfc86ad84b___1_long_ @ 0x1803ABFC4 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1803ABFC4.c)
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x1803B7FCC (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAppViewManager::PrepareToSwitch(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  CAppViewManager *v8; // rbx
  __int64 v9; // rdi
  void *v10; // rcx
  struct IAsyncCallback *v11; // rax
  unsigned int v12; // ebx
  __int64 v14[3]; // [rsp+20h] [rbp-30h] BYREF
  int v15; // [rsp+38h] [rbp-18h]
  __int64 v16[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v17; // [rsp+80h] [rbp+30h] BYREF
  struct IAsyncCallback *v18; // [rsp+88h] [rbp+38h] BYREF

  v8 = (CAppViewManager *)(a1 - 32);
  v17 = a1 - 32;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
  v9 = a5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&a5);
  v14[0] = (__int64)v8;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v14);
  v14[1] = a2;
  v14[2] = a3;
  v15 = a4;
  v16[0] = v9;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v16);
  v10 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = 0LL;
  if ( v10 )
    v11 = (struct IAsyncCallback *)Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_c5bad73058b4167fadc00bcfc86ad84b___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_c5bad73058b4167fadc00bcfc86ad84b___1_long_(
                                     (__int64)v10,
                                     (__int64)v14);
  v18 = v11;
  v12 = CAppViewManager::_QueueOperation(v8, v11);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v16);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v14);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&a5);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
  return v12;
}
