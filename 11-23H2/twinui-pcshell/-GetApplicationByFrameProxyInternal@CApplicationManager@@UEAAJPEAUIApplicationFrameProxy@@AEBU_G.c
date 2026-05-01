/*
 * XREFs of ?GetApplicationByFrameProxyInternal@CApplicationManager@@UEAAJPEAUIApplicationFrameProxy@@AEBU_GUID@@PEAPEAX@Z @ 0x18000FCC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$FindEx@VCImmersiveAppFinderByFrameProxy@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByFrameProxy@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18000FDAC (--$FindEx@VCImmersiveAppFinderByFrameProxy@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicati.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::GetApplicationByFrameProxyInternal(
        CApplicationManager *this,
        struct IApplicationFrameProxy *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v8; // ebx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, _QWORD); // rcx
  __int64 v11; // [rsp+30h] [rbp-10h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, const struct _GUID *, void **); // [rsp+70h] [rbp+30h] BYREF
  struct IApplicationFrameProxy *v13; // [rsp+78h] [rbp+38h] BYREF
  __int64 v14; // [rsp+88h] [rbp+48h] BYREF

  *a4 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
  v13 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
  v12 = 0LL;
  v14 = 0LL;
  v8 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByFrameProxy>(
         (char *)this + 392,
         &v13,
         &v14,
         &v11);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
  if ( v8 >= 0 )
  {
    v9 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD))(*((_QWORD *)this + 49) + 8 * v11);
    v8 = (**v9)(v9, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v12);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
  if ( v8 >= 0 )
    v8 = (**v12)(v12, a3, a4);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
  return (unsigned int)v8;
}
