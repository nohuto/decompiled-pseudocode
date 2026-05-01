/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@V_lambda_2306ffbffbb765df057de4289b56f06d_@@$0?0PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@3@PEAUIViewEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@EAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@3@PEAUIViewEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@789Windows@@@Z @ 0x180147B40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1802E26E8 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>::*)(Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>,_lambda_2306ffbffbb765df057de4289b56f06d_,-1,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(**(_QWORD **)(a1 + 16) + 24LL))(
         *(_QWORD *)(a1 + 16),
         &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
         &v8);
  if ( v6 >= 0 )
  {
    if ( v8 )
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 32))(
             *(_QWORD *)(a1 + 24) + *(int *)(a1 + 40),
             a2,
             a3);
    else
      v6 = -2147417848;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v8);
  if ( v6 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v6);
  return (unsigned int)v6;
}
