/*
 * XREFs of ?_PrepareAppForActivation@CApplicationManager@@AEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@PEAPEAUHWND__@@@Z @ 0x18000C918
 * Callers:
 *     ?ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@@Z @ 0x18000C7C0 (-ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUII.c)
 * Callees:
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByApplication@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18000D3F4 (--$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImme.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x18000E214 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::_PrepareAppForActivation(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  int First; // ebx
  int v9; // eax
  __int64 v11; // [rsp+40h] [rbp+20h] BYREF
  __int64 v12; // [rsp+58h] [rbp+38h] BYREF

  if ( a4 )
    *a4 = 0LL;
  if ( *(_DWORD *)(a1 + 960) == 2 )
  {
    v11 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
    v12 = a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
    First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByApplication>(a1, &v12, &v11, 0LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
    if ( First >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 312LL))(v11, a2, &v12);
      First = v9;
      if ( v9 == -2147023598 )
      {
        CApplicationManager::_ForgetApplicationNoLock(a1, v11, 1LL);
      }
      else if ( v9 >= 0 && a4 )
      {
        *a4 = v12;
      }
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  }
  else
  {
    return (unsigned int)-2147024891;
  }
  return (unsigned int)First;
}
