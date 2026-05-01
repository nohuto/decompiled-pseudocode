/*
 * XREFs of ?GetApplicationByWindowInternal@CApplicationManager@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1801646E0
 * Callers:
 *     ?GetApplicationByWindow@CApplicationManager@@UEAAJPEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z @ 0x1800521D0 (-GetApplicationByWindow@CApplicationManager@@UEAAJPEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$FindEx@VCImmersiveAppFinderByHwnd@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByHwnd@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1801647C0 (--$FindEx@VCImmersiveAppFinderByHwnd@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicationInte.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::GetApplicationByWindowInternal(
        CApplicationManager *this,
        HWND a2,
        const struct _GUID *a3,
        void **a4)
{
  int v8; // ebx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, _QWORD); // rcx
  HWND v11; // [rsp+30h] [rbp-10h] BYREF
  int v12; // [rsp+38h] [rbp-8h]
  __int64 (__fastcall ***v13)(_QWORD, const struct _GUID *, void **); // [rsp+70h] [rbp+30h] BYREF
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF
  __int64 v15; // [rsp+88h] [rbp+48h] BYREF

  *a4 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13);
  v11 = a2;
  v12 = 2;
  v13 = 0LL;
  v14 = 0LL;
  v8 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByHwnd>(
         (char *)this + 392,
         &v11,
         &v14,
         &v15);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
  if ( v8 >= 0 )
  {
    v9 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD))(*((_QWORD *)this + 49) + 8 * v15);
    v8 = (**v9)(v9, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v13);
    if ( v8 >= 0 )
      v8 = (**v13)(v13, a3, a4);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13);
  return (unsigned int)v8;
}
