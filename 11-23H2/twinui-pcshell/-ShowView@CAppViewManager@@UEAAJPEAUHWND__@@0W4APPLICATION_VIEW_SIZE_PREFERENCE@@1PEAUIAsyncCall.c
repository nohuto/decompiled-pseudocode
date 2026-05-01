/*
 * XREFs of ?ShowView@CAppViewManager@@UEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1PEAUIAsyncCallback@@@Z @ 0x1803B1680
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_4af9e279c0557e674118e7fededcb641___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_4af9e279c0557e674118e7fededcb641___1_long_ @ 0x1803ABDF0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1803ABDF0.c)
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x1803B7FCC (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppViewManager::ShowView(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        struct IAsyncCallback *a6)
{
  CAppViewManager *v9; // r12
  __int64 v10; // rdi
  struct IAsyncCallback *v11; // rbx
  void *v12; // rax
  unsigned int v13; // ebx
  __int64 v15[3]; // [rsp+20h] [rbp-30h] BYREF
  int v16; // [rsp+38h] [rbp-18h]
  int v17; // [rsp+3Ch] [rbp-14h]
  __int64 v18; // [rsp+40h] [rbp-10h] BYREF
  __int64 v19; // [rsp+80h] [rbp+30h] BYREF

  v9 = (CAppViewManager *)(a1 - 32);
  v19 = a1 - 32;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
  v10 = (__int64)a6;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&a6);
  v15[0] = (__int64)v9;
  v11 = 0LL;
  v19 = 0LL;
  v15[1] = a2;
  v15[2] = a3;
  v16 = a4;
  v17 = a5;
  v18 = v10;
  a6 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a6);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
  v12 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v12 )
    v11 = (struct IAsyncCallback *)Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_4af9e279c0557e674118e7fededcb641___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_4af9e279c0557e674118e7fededcb641___1_long_(
                                     (__int64)v12,
                                     (__int64)v15);
  a6 = v11;
  v13 = CAppViewManager::_QueueOperation(v9, v11);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a6);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v15);
  return v13;
}
