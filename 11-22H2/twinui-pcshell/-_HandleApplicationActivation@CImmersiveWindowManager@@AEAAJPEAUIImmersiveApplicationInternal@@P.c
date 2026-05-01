/*
 * XREFs of ?_HandleApplicationActivation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@@Z @ 0x18000CC20
 * Callers:
 *     ?HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@@Z @ 0x18000CB60 (-HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@.c)
 * Callees:
 *     ??0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z @ 0x18000CD04 (--0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByApplication@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@_KPEA_K@Z @ 0x18000D48C (--$GetAppPosition@VCImmersiveAppFinderByApplication@@@-$CActivationBasedCollection@V-$ComPtr@UII.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_DeactivatePrevActiveApp@CImmersiveWindowManager@@AEAAJW4ZBID@@@Z @ 0x18006595C (-_DeactivatePrevActiveApp@CImmersiveWindowManager@@AEAAJW4ZBID@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PositionNewActiveApp@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x18039E58C (-PositionNewActiveApp@-$CActivationBasedCollection@V-$ComPtr@UIImmersiveApplicationInternal@@@WR.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveWindowManager::_HandleApplicationActivation(
        CImmersiveWindowManager *this,
        struct IImmersiveApplicationInternal *a2,
        HWND a3)
{
  char *v6; // r15
  CImmersiveAppFinderByApplication *v7; // rax
  __int64 v8; // r8
  int App; // ebx
  __int64 v10; // r8
  bool v11; // si
  unsigned int v12; // eax
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  struct IImmersiveApplicationInternal *v15; // [rsp+68h] [rbp+20h] BYREF

  v6 = (char *)this + 208;
  v7 = CImmersiveAppFinderByApplication::CImmersiveAppFinderByApplication((CImmersiveAppFinderByApplication *)&v15, a2);
  App = CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByApplication>(
          v6,
          v7,
          v8,
          &v14);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
  if ( App >= 0 )
  {
    v11 = *((_BYTE *)this + 248) && !v14;
    LOBYTE(v10) = v11;
    App = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, HWND, __int64))(*(_QWORD *)a2 + 64LL))(
            a2,
            a3,
            v10);
    if ( App >= 0 )
    {
      if ( !v11 )
      {
        v12 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 136LL))(a2);
        App = 0;
        if ( *((_BYTE *)this + 248) )
          App = CImmersiveWindowManager::_DeactivatePrevActiveApp(this, v12);
      }
      if ( v14 )
      {
        v15 = a2;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
        CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::PositionNewActiveApp(
          v6,
          &v15,
          v14);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
      }
      if ( App >= 0 )
        *((_BYTE *)this + 248) = 1;
    }
  }
  return (unsigned int)App;
}
