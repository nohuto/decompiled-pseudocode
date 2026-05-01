/*
 * XREFs of ??$QueueViewManagementTask@V_lambda_e3476b40c3599fe2d8be82ea48422b91_@@@CIAMGlobals@@QEAAJ$$QEAV_lambda_e3476b40c3599fe2d8be82ea48422b91_@@@Z @ 0x1800EA804
 * Callers:
 *     ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800EA614 (-PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV-$ComPtr@UIImmersiveApplic.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$QueueTask@V_lambda_e02303751d4e49a7e603e0304fd9978e_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_e02303751d4e49a7e603e0304fd9978e_@@@Z @ 0x1800EA8B4 (--$QueueTask@V_lambda_e02303751d4e49a7e603e0304fd9978e_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 */

__int64 __fastcall CIAMGlobals::QueueViewManagementTask<_lambda_e3476b40c3599fe2d8be82ea48422b91_>(
        __int64 a1,
        __int64 *a2)
{
  PSRWLOCK v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // ebx
  PVOID Ptr; // [rsp+20h] [rbp-20h] BYREF
  __int64 v12; // [rsp+28h] [rbp-18h] BYREF
  __int64 v13[2]; // [rsp+30h] [rbp-10h] BYREF

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( !CApplicationManagerUtility::g_pIAMGlobals[14].Ptr )
    return 2147943568LL;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&Ptr);
  v12 = 0LL;
  if ( &v12 != a2 )
  {
    v6 = *a2;
    *a2 = 0LL;
    v12 = v6;
  }
  v13[0] = 0LL;
  v7 = a2 + 1;
  if ( v13 != v7 )
  {
    v8 = *v7;
    *v7 = 0LL;
    v13[0] = v8;
  }
  v9 = Windows::Internal::ComTaskPool::QueueTask<_lambda_e02303751d4e49a7e603e0304fd9978e_>(
         v5,
         v4,
         LODWORD(v2[15].Ptr),
         &Ptr);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v13);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&Ptr);
  return v9;
}
