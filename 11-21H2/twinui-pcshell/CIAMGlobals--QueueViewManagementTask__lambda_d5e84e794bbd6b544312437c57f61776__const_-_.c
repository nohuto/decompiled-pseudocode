/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const_&_ @ 0x1800EDA50
 * Callers:
 *     ?_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x1800EB7F8 (-_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIntern.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d7e722f97b0ff1a046566d4f834dfe37___ @ 0x1800EDAE0 (Windows--Internal--ComTaskPool--QueueTask__lambda_d7e722f97b0ff1a046566d4f834dfe37___.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@IEAAKXZ @ 0x180140E00 (-InternalRelease@-$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const___(
        __int64 a1,
        __int64 *a2)
{
  PSRWLOCK v3; // rbx
  PVOID Ptr; // rcx
  volatile int *v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  PVOID v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h] BYREF

  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  if ( !Ptr )
    return 2147943568LL;
  v9 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
  v6 = *a2;
  v10 = v6;
  if ( v6 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v6 + 36), v5);
  v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_d7e722f97b0ff1a046566d4f834dfe37___(
         v6,
         v5,
         LODWORD(v3[15].Ptr),
         &v9);
  Microsoft::WRL::ComPtr<COperationWaiter>::InternalRelease(&v10);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  return v7;
}
