/*
 * XREFs of ??$_FindFirstApplication@VCImmersiveAppFinderByAppId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByAppId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1802DE850
 * Callers:
 *     ?ForgetApplication@CApplicationManager@@UEAAJPEBG@Z @ 0x1802E2B40 (-ForgetApplication@CApplicationManager@@UEAAJPEBG@Z.c)
 *     ?GetApplication@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplication@@@Z @ 0x1802E3010 (-GetApplication@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$FindEx@VCImmersiveAppFinderByAppId@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByAppId@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1802DCF10 (--$FindEx@VCImmersiveAppFinderByAppId@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicationInt.c)
 */

// Hidden C++ exception states: #wind=2
__int64 CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByAppId>(__int64 a1, _QWORD *a2, _QWORD *a3, ...)
{
  _QWORD *v4; // rsi
  int v5; // edi
  __int64 v7; // [rsp+20h] [rbp-18h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  va_list va1; // [rsp+60h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  if ( a3 )
    *a3 = 0LL;
  v4 = (_QWORD *)(a1 + 632);
  v9 = 0LL;
  v5 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByAppId>(
         (_QWORD *)(a1 + 632),
         a2,
         (__int64 *)va,
         &v8,
         v7);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)va);
  if ( v5 >= 0 && a3 )
    return (unsigned int)(***(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*v4 + 8 * v8))(
                           *(_QWORD *)(*v4 + 8 * v8),
                           &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
                           a3);
  return (unsigned int)v5;
}
