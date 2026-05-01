/*
 * XREFs of ?_HandleApplicationCreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18000D730
 * Callers:
 *     ?HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@@Z @ 0x18000CB60 (-HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveWindowManager::_HandleApplicationCreation(
        IUnknown *punkSite,
        IUnknown *punk,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a3,
        struct ITaskWindow *a4)
{
  int v8; // ebx
  ULONG (__stdcall *AddRef)(IUnknown *); // rbx
  IUnknown *v11; // [rsp+38h] [rbp+10h] BYREF

  IUnknown_SetSite(punk, punkSite);
  v8 = ((__int64 (__fastcall *)(IUnknown *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, struct ITaskWindow *))punk->lpVtbl[1].AddRef)(
         punk,
         a3,
         a4);
  if ( v8 >= 0 )
  {
    AddRef = punkSite[26].lpVtbl->AddRef;
    v11 = punk;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
    v8 = ((__int64 (__fastcall *)(IUnknown *, IUnknown **))AddRef)(&punkSite[26], &v11);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
    if ( v8 < 0 )
      IUnknown_SetSite(punk, 0LL);
  }
  return (unsigned int)v8;
}
