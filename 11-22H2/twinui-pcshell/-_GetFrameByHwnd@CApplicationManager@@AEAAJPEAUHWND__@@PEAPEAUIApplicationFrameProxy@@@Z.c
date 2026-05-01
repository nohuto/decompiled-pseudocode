/*
 * XREFs of ?_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x180040048
 * Callers:
 *     ?OnTitleBarHitTestVisualUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x18003FD40 (-OnTitleBarHitTestVisualUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?OnTitleBarDrawnByAppUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x18003FE20 (-OnTitleBarDrawnByAppUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?OnTitleBarColorUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x18003FF00 (-OnTitleBarColorUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?OnDesiredTitlebarOverlayStateUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x18039E180 (-OnDesiredTitlebarOverlayStateUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?OnTitleBarIconUpdated@CApplicationManager@@UEAAJPEAUHWND__@@PEAXK@Z @ 0x18039E290 (-OnTitleBarIconUpdated@CApplicationManager@@UEAAJPEAUHWND__@@PEAXK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$FindEx@VCImmersiveAppFinderByHwnd@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByHwnd@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1801647C0 (--$FindEx@VCImmersiveAppFinderByHwnd@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicationInte.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::_GetFrameByHwnd(
        CApplicationManager *this,
        HWND a2,
        struct IApplicationFrameProxy **a3)
{
  int v6; // ebx
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  HWND v9; // [rsp+30h] [rbp-10h] BYREF
  int v10; // [rsp+38h] [rbp-8h]
  __int64 v11; // [rsp+70h] [rbp+30h] BYREF
  __int64 v12; // [rsp+80h] [rbp+40h] BYREF
  __int64 v13; // [rsp+88h] [rbp+48h] BYREF

  v6 = -2147467261;
  *a3 = 0LL;
  if ( *((_QWORD *)this + 76) )
  {
    v11 = 0LL;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
    v9 = a2;
    v10 = 0;
    v11 = 0LL;
    v12 = 0LL;
    v6 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByHwnd>(
           (char *)this + 632,
           &v9,
           &v12,
           &v13);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
    if ( v6 >= 0 )
    {
      v7 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 79) + 8 * v13);
      v6 = (**v7)(v7, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v11);
      if ( v6 >= 0 )
        v6 = (*(__int64 (__fastcall **)(__int64, struct IApplicationFrameProxy **))(*(_QWORD *)v11 + 496LL))(v11, a3);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  }
  return (unsigned int)v6;
}
