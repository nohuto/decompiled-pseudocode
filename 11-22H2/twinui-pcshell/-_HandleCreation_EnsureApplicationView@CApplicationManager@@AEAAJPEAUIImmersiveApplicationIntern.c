/*
 * XREFs of ?_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180010D50
 * Callers:
 *     ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x18000F300 (-HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown.c)
 *     ?OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x1802CF350 (-OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 * Callees:
 *     ?Wait@COperationWaiter@@QEAAJXZ @ 0x1800111BC (-Wait@COperationWaiter@@QEAAJXZ.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const_&_ @ 0x1800113F4 (CIAMGlobals--QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const_-_.c)
 *     ??$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCOperationWaiter@@@Z @ 0x180011478 (--$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCOperationWaiter.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18005F5C4 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::_HandleCreation_EnsureApplicationView(
        CApplicationManager *this,
        void (__fastcall ***a2)(struct IImmersiveApplicationInternal *, GUID *, COperationWaiter **),
        HWND a3,
        struct IApplicationView **a4)
{
  void (__fastcall *v7)(struct IImmersiveApplicationInternal *, GUID *, COperationWaiter **); // rbx
  PVOID Ptr; // rdi
  __int64 (__fastcall *v9)(PVOID, COperationWaiter *, struct IApplicationView **); // rbx
  int v10; // ebx
  volatile int *v11; // rdx
  COperationWaiter *v12; // rcx
  void (__fastcall *v13)(struct IImmersiveApplicationInternal *, GUID *, COperationWaiter **); // rbx
  PVOID v14; // rdi
  __int64 (__fastcall *v15)(PVOID, __int64, struct IApplicationView **); // rbx
  struct IApplicationView *v16; // rax
  PVOID v18; // rdi
  __int64 (__fastcall *v19)(PVOID, HWND, struct IApplicationView **); // rbx
  PVOID v20; // rdi
  __int64 (__fastcall *v21)(PVOID, HWND, struct IApplicationView **); // rbx
  _QWORD v22[2]; // [rsp+20h] [rbp-10h] BYREF
  struct IApplicationView *v23; // [rsp+60h] [rbp+30h] BYREF
  COperationWaiter *v24; // [rsp+68h] [rbp+38h] BYREF
  __int64 v25; // [rsp+78h] [rbp+48h] BYREF

  *a4 = 0LL;
  v23 = 0LL;
  if ( a2 )
  {
    v24 = 0LL;
    v7 = **a2;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
    v7((struct IImmersiveApplicationInternal *)a2, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v24);
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    v9 = *(__int64 (__fastcall **)(PVOID, COperationWaiter *, struct IApplicationView **))(*(_QWORD *)Ptr + 56LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v23);
    v10 = v9(Ptr, v24, &v23);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
  }
  else
  {
    v18 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    v19 = *(__int64 (__fastcall **)(PVOID, HWND, struct IApplicationView **))(*(_QWORD *)v18 + 48LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v23);
    v10 = v19(v18, a3, &v23);
  }
  if ( v10 >= 0 )
    goto LABEL_13;
  v24 = 0LL;
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v24);
  v10 = Microsoft::WRL::Details::MakeAndInitialize<COperationWaiter,COperationWaiter,>(&v24);
  if ( v10 >= 0 )
  {
    v12 = v24;
    v22[0] = v24;
    if ( v24 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((COperationWaiter *)((char *)v24 + 36), v11);
    if ( (int)CIAMGlobals::QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const___(v12, v22) >= 0 )
      COperationWaiter::Wait(v24);
    if ( a2 )
    {
      v25 = 0LL;
      v13 = **a2;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
      v13(
        (struct IImmersiveApplicationInternal *)a2,
        &GUID_8b14e88b_5663_4caf_b196_c31479262831,
        (COperationWaiter **)&v25);
      v14 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
      v15 = *(__int64 (__fastcall **)(PVOID, __int64, struct IApplicationView **))(*(_QWORD *)v14 + 56LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v23);
      v10 = v15(v14, v25, &v23);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
    }
    else
    {
      v20 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
      v21 = *(__int64 (__fastcall **)(PVOID, HWND, struct IApplicationView **))(*(_QWORD *)v20 + 48LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v23);
      v10 = v21(v20, a3, &v23);
    }
    Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(v22);
  }
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v24);
  if ( v10 >= 0 )
  {
LABEL_13:
    v16 = v23;
    v23 = 0LL;
    *a4 = v16;
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v23);
  return (unsigned int)v10;
}
