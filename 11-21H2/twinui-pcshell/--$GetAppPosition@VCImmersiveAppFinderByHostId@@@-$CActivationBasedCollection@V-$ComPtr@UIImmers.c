/*
 * XREFs of ??$GetAppPosition@VCImmersiveAppFinderByHostId@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByHostId@@_KPEA_K@Z @ 0x1800E92E0
 * Callers:
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x1800E8EF8 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x1801232BC (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHostId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHostId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1802DE8F8 (--$_FindFirstApplication@VCImmersiveAppFinderByHostId@@@CApplicationManager@@AEAAJAEBVCImmersive.c)
 * Callees:
 *     ??$FindEx@VCImmersiveAppFinderByHostId@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByHostId@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800E930C (--$FindEx@VCImmersiveAppFinderByHostId@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicationIn.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByHostId>(
        int a1,
        int a2,
        __int64 a3,
        int a4)
{
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  return CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByHostId>(
           a1 + 8,
           a2,
           (unsigned int)&v5,
           a4);
}
