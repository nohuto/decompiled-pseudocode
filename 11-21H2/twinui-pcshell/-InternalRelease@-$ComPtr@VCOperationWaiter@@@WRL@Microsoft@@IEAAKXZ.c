/*
 * XREFs of ?InternalRelease@?$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@IEAAKXZ @ 0x180140E00
 * Callers:
 *     ?WaitForPendingOperations@CFrameApplicationPresentation@@UEAAJXZ @ 0x1800EA4A0 (-WaitForPendingOperations@CFrameApplicationPresentation@@UEAAJXZ.c)
 *     ?_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x1800EB7F8 (-_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIntern.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const_&_ @ 0x1800EDA50 (CIAMGlobals--QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const_-_.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d7e722f97b0ff1a046566d4f834dfe37___::_scalar_deleting_destructor_ @ 0x1801600E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d7e722f97b0ff1a046566d4f834dfe37___--_scala.c)
 *     CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c___::_scalar_deleting_destructor_ @ 0x1801617A0 (CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c___--_scalar_deleting_destructo.c)
 *     ??1?$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@QEAA@XZ @ 0x1802DF4D0 (--1-$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<COperationWaiter>::InternalRelease(volatile signed __int32 **a1)
{
  unsigned int v1; // ebx
  volatile signed __int32 *v2; // r8
  signed __int32 v3; // edx
  unsigned __int32 v4; // edi

  v1 = 0;
  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    do
      v3 = *((_DWORD *)v2 + 9);
    while ( v3 != 0x7FFFFFFF && v3 != _InterlockedCompareExchange(v2 + 9, v3 - 1, v3) );
    v4 = v3 - 1;
    if ( v3 == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 72LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    return v4;
  }
  return v1;
}
