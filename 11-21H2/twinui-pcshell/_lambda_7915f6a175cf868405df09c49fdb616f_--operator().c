/*
 * XREFs of _lambda_7915f6a175cf868405df09c49fdb616f_::operator() @ 0x18022B31C
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_7915f6a175cf868405df09c49fdb616f___::Invoke @ 0x1803107E0 (CAsyncCallbackWithLambda__lambda_7915f6a175cf868405df09c49fdb616f___--Invoke.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18007B5B0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18007FF90 (-GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIApplicationViewBase@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewBase@@@WRL@Microsoft@@@Details@12@@Z @ 0x18030EE4C (--$As@UIApplicationViewBase@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_7915f6a175cf868405df09c49fdb616f_::operator()(__int64 a1)
{
  __int64 *AddressOf; // rax
  int ViewForHwnd; // ebx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int (__fastcall ***v9)(_QWORD, GUID *, WINBOOL *); // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v9);
  ViewForHwnd = CApplicationViewManager::GetViewForHwnd(
                  (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 8) + 136LL),
                  *(HWND *)a1,
                  (struct IApplicationView **)AddressOf);
  if ( ViewForHwnd >= 0 )
  {
    v10 = 0LL;
    v4 = Microsoft::WRL::ComPtr<IApplicationView>::As<IApplicationViewBase>(&v9, &v10);
    ViewForHwnd = v4;
    if ( v4 >= 0 )
    {
      LOBYTE(v5) = *(_DWORD *)(a1 + 16) != 0;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 40LL))(v10, v5);
      v4 = CApplicationViewManager::RaiseApplicationViewChanged(*(_QWORD *)(a1 + 32) + 136LL, v9, 6u, 0LL);
      ViewForHwnd = v4;
      if ( v4 >= 0 )
      {
LABEL_7:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
        goto LABEL_8;
      }
      v6 = 754LL;
    }
    else
    {
      v6 = 751LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_7;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v9);
  return (unsigned int)ViewForHwnd;
}
