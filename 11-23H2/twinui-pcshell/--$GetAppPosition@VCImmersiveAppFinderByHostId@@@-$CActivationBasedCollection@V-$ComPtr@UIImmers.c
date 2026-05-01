/*
 * XREFs of ??$GetAppPosition@VCImmersiveAppFinderByHostId@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByHostId@@_KPEA_K@Z @ 0x18000E800
 * Callers:
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x18000E214 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHostId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHostId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18000E7B4 (--$_FindFirstApplication@VCImmersiveAppFinderByHostId@@@CApplicationManager@@AEAAJAEBVCImmersive.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIImmersiveApplication2@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication2@@@WRL@Microsoft@@@Details@12@@Z @ 0x180063984 (--$As@UIImmersiveApplication2@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByHostId>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rdi
  int v10; // r14d
  __int64 v11; // [rsp+20h] [rbp-10h] BYREF
  __int64 v12; // [rsp+28h] [rbp-8h] BYREF
  __int64 v13; // [rsp+70h] [rbp+40h] BYREF
  __int64 v14; // [rsp+80h] [rbp+50h] BYREF
  __int64 v15; // [rsp+88h] [rbp+58h] BYREF

  v14 = a3;
  v7 = 0;
  v12 = 0LL;
  *a4 = 0LL;
  v8 = 0LL;
  if ( *(_QWORD *)(a1 + 16) )
  {
    while ( 1 )
    {
      v11 = 0LL;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v8);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
      v10 = -1;
      v13 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication2>(&v15, &v13) >= 0 )
      {
        (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 32LL))(v13, *a2, &v14);
        v10 = ((_DWORD)v14 != 0) - 1;
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
      if ( !v10 )
        break;
      if ( (unsigned __int64)++v8 >= *(_QWORD *)(a1 + 16) )
        goto LABEL_2;
    }
    *a4 = v8;
  }
  else
  {
LABEL_2:
    v7 = -2147319765;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
  return v7;
}
