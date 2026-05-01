/*
 * XREFs of ?InsertApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x180515430
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x1801712D0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$PPIWin32Vtc_SideBarInserted@I@TabletModeTelemetry@@SAX$$QEAI@Z @ 0x1805149E4 (--$PPIWin32Vtc_SideBarInserted@I@TabletModeTelemetry@@SAX$$QEAI@Z.c)
 *     ?_FinalizeLayout@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1805163DC (-_FinalizeLayout@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z.c)
 *     ?_QueryInsertAppToLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@W4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x18051703C (-_QueryInsertAppToLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@W4APP_LAYOUT_INS.c)
 *     ?_UpdateOperationActions@CAppLayoutOperation@@IEAAXW4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x180615CFC (-_UpdateOperationActions@CAppLayoutOperation@@IEAAXW4APP_LAYOUT_OPERATION_ACTIONS@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PPIWin32VtcLayoutOperation::InsertApp(__int64 a1, struct IApplicationView *a2, char a3)
{
  __int64 v6; // rdi
  struct _RTL_CRITICAL_SECTION *v7; // r15
  int v8; // r12d
  int InsertAppToLayout; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rbx
  int (__fastcall *v13)(__int64, __int64 *, _QWORD); // rbx
  __int64 *AddressOf; // rax
  struct IApplicationView *v15; // rdx
  HWND v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  struct IApplicationView *v19; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int WindowForView; // [rsp+60h] [rbp+8h] BYREF
  ApplicationViewHelpers *v23; // [rsp+78h] [rbp+20h] BYREF

  v6 = a1 - 176;
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 16) & -(__int64)(a1 != 176));
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v7, 1);
  InsertAppToLayout = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, 0LL);
  v10 = InsertAppToLayout;
  if ( InsertAppToLayout < 0 )
  {
    v11 = 38LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)InsertAppToLayout);
    goto LABEL_22;
  }
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 - 88), (__int64)a2);
  v12 = a1 - 152;
  *(_DWORD *)(a1 - 152 + 80) = 1;
  if ( (a3 & 1) == 0 )
    CAppLayoutOperation::_UpdateOperationActions(v12, 2LL);
  if ( (a3 & 2) == 0 )
  {
    CAppLayoutOperation::_UpdateOperationActions(v12, 0x10000LL);
    if ( (a3 & 8) != 0 )
      CAppLayoutOperation::_UpdateOperationActions(v12, 0x400000LL);
  }
  InsertAppToLayout = PPIWin32VtcLayoutOperation::_QueryInsertAppToLayout(
                        v6,
                        a2,
                        PPIWin32VtcLayoutOperation::_sideBarLocation);
  v10 = InsertAppToLayout;
  if ( InsertAppToLayout < 0 )
  {
    v11 = 57LL;
    goto LABEL_10;
  }
  v23 = 0LL;
  v13 = *(int (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v6 + 160LL);
  AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v23);
  if ( v13(v6, AddressOf, 0LL) < 0
    || (v16 = (HWND)ApplicationViewHelpers::GetWindowForView(
                      (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v23,
                      v15),
        GetPropA(v16, "OVERRIDE_LAYOUT")) )
  {
    v17 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 192LL))(v6, 2LL);
    v10 = v17;
    if ( v17 < 0 )
    {
      v18 = 72LL;
      goto LABEL_17;
    }
LABEL_18:
    if ( (*(unsigned __int8 (__fastcall **)(__int64, struct IApplicationView *))(*(_QWORD *)v6 + 168LL))(v6, a2) )
    {
      PPIWin32VtcLayoutOperation::_vtcSidebarView = a2;
      WindowForView = ApplicationViewHelpers::GetWindowForView(
                        (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))a2,
                        v19);
      TabletModeTelemetry::PPIWin32Vtc_SideBarInserted<unsigned int>(&WindowForView);
    }
    v10 = 0;
    goto LABEL_21;
  }
  v17 = PPIWin32VtcLayoutOperation::_FinalizeLayout(v6);
  v10 = v17;
  if ( v17 >= 0 )
    goto LABEL_18;
  v18 = 67LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
    (const char *)(unsigned int)v17);
LABEL_21:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v23);
LABEL_22:
  if ( v8 >= 0 )
    LeaveCriticalSection(v7);
  return v10;
}
