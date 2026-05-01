/*
 * XREFs of ??$QueueViewManagementTask@V_lambda_e3476b40c3599fe2d8be82ea48422b91_@@@CIAMGlobals@@QEAAJ$$QEAV_lambda_e3476b40c3599fe2d8be82ea48422b91_@@@Z @ 0x18000EB34
 * Callers:
 *     ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000E8D0 (-PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV-$ComPtr@UIImmersiveApplic.c)
 * Callees:
 *     ??$QueueTask@V_lambda_e02303751d4e49a7e603e0304fd9978e_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_e02303751d4e49a7e603e0304fd9978e_@@@Z @ 0x18000EAA0 (--$QueueTask@V_lambda_e02303751d4e49a7e603e0304fd9978e_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 *     ??0_lambda_e02303751d4e49a7e603e0304fd9978e_@@QEAA@AEBV?$ComPtr@UIApplicationViewCollectionManagement@@@WRL@Microsoft@@$$QEAV_lambda_e3476b40c3599fe2d8be82ea48422b91_@@@Z @ 0x18000EB9C (--0_lambda_e02303751d4e49a7e603e0304fd9978e_@@QEAA@AEBV-$ComPtr@UIApplicationViewCollectionManag.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CIAMGlobals::QueueViewManagementTask<_lambda_e3476b40c3599fe2d8be82ea48422b91_>(
        __int64 a1,
        __int64 a2)
{
  PSRWLOCK v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  _BYTE v8[8]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v9[8]; // [rsp+28h] [rbp-20h] BYREF
  _BYTE v10[24]; // [rsp+30h] [rbp-18h] BYREF

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( !CApplicationManagerUtility::g_pIAMGlobals[14].Ptr )
    return 2147943568LL;
  v3 = _lambda_e02303751d4e49a7e603e0304fd9978e_::_lambda_e02303751d4e49a7e603e0304fd9978e_(
         v8,
         &CApplicationManagerUtility::g_pIAMGlobals[14],
         a2);
  v6 = Windows::Internal::ComTaskPool::QueueTask<_lambda_e02303751d4e49a7e603e0304fd9978e_>(
         v5,
         v4,
         (unsigned int)v2[15].Ptr,
         v3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v10);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v9);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v8);
  return v6;
}
