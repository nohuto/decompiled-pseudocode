/*
 * XREFs of ?Compare@CImmersiveAppFinderByFrameProxy@@QEBAHAEBV?$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z @ 0x18000FE54
 * Callers:
 *     ??$FindEx@VCImmersiveAppFinderByFrameProxy@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByFrameProxy@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18000FDAC (--$FindEx@VCImmersiveAppFinderByFrameProxy@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicati.c)
 * Callees:
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000FF1C (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveAppFinderByFrameProxy::Compare(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  __int64 v5; // rbx
  int (__fastcall *v6)(__int64, __int64 *); // rdi
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = a3;
  v4 = -1;
  v9 = 0LL;
  if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(a2, &v9) >= 0 )
  {
    v8 = 0LL;
    v5 = v9;
    v6 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 496LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v8);
    if ( v6(v5, &v8) >= 0 )
      v4 = ((*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 232LL))(v8, *a1) != 0) - 1;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v8);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v9);
  return v4;
}
