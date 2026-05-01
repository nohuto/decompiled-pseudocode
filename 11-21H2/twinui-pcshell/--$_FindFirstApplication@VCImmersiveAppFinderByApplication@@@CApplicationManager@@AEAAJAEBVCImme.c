/*
 * XREFs of ??$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByApplication@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180054954
 * Callers:
 *     ?GetSizeConstraintOverrides@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUtagSIZE@@111@Z @ 0x1800541E0 (-GetSizeConstraintOverrides@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUtagSIZE@@11.c)
 *     ?TerminateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4PLM_TERMINATE_FLAGS@@PEAW4PLM_TASKCOMPLETION_CATEGORY_FLAGS@@@Z @ 0x180054330 (-TerminateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4PLM_TERMINATE_FLAGS.c)
 *     ?SetApplicationViewPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewPosition@@W4SET_IMM_APP_POS@@@Z @ 0x180054580 (-SetApplicationViewPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicatio.c)
 *     ?_PrepareAppForActivation@CApplicationManager@@AEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@PEAPEAUHWND__@@@Z @ 0x180054878 (-_PrepareAppForActivation@CApplicationManager@@AEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImme.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$FindEx@VCImmersiveAppFinderByApplication@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800EC5A4 (--$FindEx@VCImmersiveAppFinderByApplication@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicat.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByApplication>(
        __int64 a1,
        int a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v6; // r14
  int v7; // esi
  __int64 v8; // rbp
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 )
    *a3 = 0LL;
  v6 = (_QWORD *)(a1 + 632);
  v10 = 0LL;
  v7 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByApplication>(
         (int)a1 + 632,
         a2,
         (unsigned int)&v10,
         (unsigned int)&v11);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
  if ( v7 >= 0 )
  {
    v8 = v11;
    if ( a3 )
      v7 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*v6 + 8 * v11))(
             *(_QWORD *)(*v6 + 8 * v11),
             &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
             a3);
    if ( a4 )
      *a4 = v8;
  }
  return (unsigned int)v7;
}
