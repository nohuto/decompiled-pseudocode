/*
 * XREFs of ?InsertApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x1805CDAE0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x1800528C8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$PPIWin32Vtc_SideBarInserted@I@TabletModeTelemetry@@SAX$$QEAI@Z @ 0x1805CCED4 (--$PPIWin32Vtc_SideBarInserted@I@TabletModeTelemetry@@SAX$$QEAI@Z.c)
 *     ?_FinalizeLayout@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1805CEA6C (-_FinalizeLayout@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z.c)
 *     ?_QueryInsertAppToLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@W4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1805CF740 (-_QueryInsertAppToLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@W4APP_LAYOUT_INS.c)
 *     ?_UpdateOperationActions@CAppLayoutOperation@@IEAAXW4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x1807944E4 (-_UpdateOperationActions@CAppLayoutOperation@@IEAAXW4APP_LAYOUT_OPERATION_ACTIONS@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PPIWin32VtcLayoutOperation::InsertApp(
        __int64 a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64),
        char a3)
{
  __int64 v6; // rdi
  struct _RTL_CRITICAL_SECTION *v7; // r15
  int v8; // r12d
  int InsertAppToLayout; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rbx
  int (__fastcall *v13)(__int64, ApplicationViewHelpers **, _QWORD); // rbx
  struct IApplicationView *v14; // rdx
  HWND v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  struct IApplicationView *v18; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int WindowForView; // [rsp+60h] [rbp+8h] BYREF
  ApplicationViewHelpers *v22; // [rsp+78h] [rbp+20h] BYREF

  v6 = a1 - 176;
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 16) & -(__int64)(a1 != 176));
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v7, 1);
  InsertAppToLayout = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, 0LL);
  v10 = InsertAppToLayout;
  if ( InsertAppToLayout < 0 )
  {
    v11 = 34LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
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
    v11 = 53LL;
    goto LABEL_10;
  }
  v22 = 0LL;
  v13 = *(int (__fastcall **)(__int64, ApplicationViewHelpers **, _QWORD))(*(_QWORD *)v6 + 160LL);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v22);
  if ( v13(v6, &v22, 0LL) < 0
    || (v15 = (HWND)ApplicationViewHelpers::GetWindowForView(
                      (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v22,
                      v14),
        GetPropA(v15, "OVERRIDE_LAYOUT")) )
  {
    v16 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 192LL))(v6, 2LL);
    v10 = v16;
    if ( v16 < 0 )
    {
      v17 = 68LL;
      goto LABEL_17;
    }
LABEL_18:
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64)))(*(_QWORD *)v6 + 168LL))(
           v6,
           a2) )
    {
      WindowForView = ApplicationViewHelpers::GetWindowForView(a2, v18);
      TabletModeTelemetry::PPIWin32Vtc_SideBarInserted<unsigned int>(&WindowForView);
    }
    v10 = 0;
    goto LABEL_21;
  }
  v16 = PPIWin32VtcLayoutOperation::_FinalizeLayout(v6);
  v10 = v16;
  if ( v16 >= 0 )
    goto LABEL_18;
  v17 = 63LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (int)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
    (const char *)(unsigned int)v16);
LABEL_21:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v22);
LABEL_22:
  if ( v8 >= 0 )
    LeaveCriticalSection(v7);
  return v10;
}
