/*
 * XREFs of ?_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x1800EB7F8
 * Callers:
 *     ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1800EA190 (-HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown.c)
 *     ?OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x180106620 (-OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCOperationWaiter@@@Z @ 0x1800ECEF0 (--$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCOperationWaiter.c)
 *     ?Wait@COperationWaiter@@QEAAJXZ @ 0x1800ED844 (-Wait@COperationWaiter@@QEAAJXZ.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const_&_ @ 0x1800EDA50 (CIAMGlobals--QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const_-_.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@IEAAKXZ @ 0x180140E00 (-InternalRelease@-$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
  __int64 (__fastcall *v9)(PVOID, COperationWaiter *, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v11; // ebx
  volatile int *v12; // rdx
  COperationWaiter *v13; // rcx
  void (__fastcall *v14)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  PVOID v15; // rdi
  __int64 (__fastcall *v16)(PVOID, __int64, __int64 *); // rbx
  __int64 *v17; // rax
  struct IApplicationView *v18; // rax
  PVOID v20; // rdi
  __int64 (__fastcall *v21)(PVOID, HWND, __int64 *); // rbx
  __int64 *v22; // rax
  PVOID v23; // rdi
  __int64 (__fastcall *v24)(PVOID, HWND, __int64 *); // rbx
  __int64 *v25; // rax
  _QWORD v26[2]; // [rsp+20h] [rbp-10h] BYREF
  struct IApplicationView *v27; // [rsp+60h] [rbp+30h] BYREF
  COperationWaiter *v28; // [rsp+68h] [rbp+38h] BYREF
  __int64 v29; // [rsp+78h] [rbp+48h] BYREF

  *a4 = 0LL;
  v27 = 0LL;
  if ( a2 )
  {
    v28 = 0LL;
    v7 = **a2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
    v7((struct IImmersiveApplicationInternal *)a2, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v28);
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    v9 = *(__int64 (__fastcall **)(PVOID, COperationWaiter *, __int64 *))(*(_QWORD *)Ptr + 56LL);
    AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v27);
    v11 = v9(Ptr, v28, AddressOf);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
  }
  else
  {
    v20 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    v21 = *(__int64 (__fastcall **)(PVOID, HWND, __int64 *))(*(_QWORD *)v20 + 48LL);
    v22 = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v27);
    v11 = v21(v20, a3, v22);
  }
  if ( v11 >= 0 )
    goto LABEL_13;
  v28 = 0LL;
  Microsoft::WRL::ComPtr<COperationWaiter>::InternalRelease(&v28);
  v11 = Microsoft::WRL::Details::MakeAndInitialize<COperationWaiter,COperationWaiter,>(&v28);
  if ( v11 >= 0 )
  {
    v13 = v28;
    v26[0] = v28;
    if ( v28 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((COperationWaiter *)((char *)v28 + 36), v12);
    if ( (int)CIAMGlobals::QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const___(v13, v26) >= 0 )
      COperationWaiter::Wait(v28);
    if ( a2 )
    {
      v29 = 0LL;
      v14 = (void (__fastcall *)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))**a2;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
      v14((struct IImmersiveApplicationInternal *)a2, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v29);
      v15 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
      v16 = *(__int64 (__fastcall **)(PVOID, __int64, __int64 *))(*(_QWORD *)v15 + 56LL);
      v17 = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v27);
      v11 = v16(v15, v29, v17);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
    }
    else
    {
      v23 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
      v24 = *(__int64 (__fastcall **)(PVOID, HWND, __int64 *))(*(_QWORD *)v23 + 48LL);
      v25 = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v27);
      v11 = v24(v23, a3, v25);
    }
    Microsoft::WRL::ComPtr<COperationWaiter>::InternalRelease(v26);
  }
  Microsoft::WRL::ComPtr<COperationWaiter>::InternalRelease(&v28);
  if ( v11 >= 0 )
  {
LABEL_13:
    v18 = v27;
    v27 = 0LL;
    *a4 = v18;
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v27);
  return (unsigned int)v11;
}
