/*
 * XREFs of ?_HandleApplicationPrecreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1803A79BC
 * Callers:
 *     ?HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@@Z @ 0x18000CB60 (-HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@.c)
 * Callees:
 *     ?PositionAppAtEnd@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x18000AF70 (-PositionAppAtEnd@-$CActivationBasedCollection@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Mi.c)
 *     ??0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z @ 0x18000CD04 (--0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByApplication@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@_KPEA_K@Z @ 0x18000D48C (--$GetAppPosition@VCImmersiveAppFinderByApplication@@@-$CActivationBasedCollection@V-$ComPtr@UII.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveWindowManager::_HandleApplicationPrecreation(IUnknown *punkSite, IUnknown *a2)
{
  IUnknown *v3; // rsi
  ULONG (__stdcall *AddRef)(IUnknown *); // rbx
  int v5; // ebx
  int v6; // eax
  __int64 v7; // r8
  IUnknown *v9; // [rsp+40h] [rbp+20h] BYREF
  __int64 v10; // [rsp+48h] [rbp+28h] BYREF

  v3 = punkSite + 26;
  IUnknown_SetSite(a2, punkSite);
  AddRef = v3->lpVtbl->AddRef;
  v9 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
  v5 = ((__int64 (__fastcall *)(IUnknown *, IUnknown **))AddRef)(v3, &v9);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v9);
  if ( v5 < 0 )
    goto LABEL_3;
  v10 = 0LL;
  v6 = (unsigned int)CImmersiveAppFinderByApplication::CImmersiveAppFinderByApplication(
                       (CImmersiveAppFinderByApplication *)&v9,
                       (void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *))a2);
  CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByApplication>(
    (int)v3,
    v6,
    v7,
    (int)&v10);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v9);
  v9 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
  v5 = CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::PositionAppAtEnd(v3, &v9, v10);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v9);
  if ( v5 < 0 )
LABEL_3:
    IUnknown_SetSite(a2, 0LL);
  return (unsigned int)v5;
}
