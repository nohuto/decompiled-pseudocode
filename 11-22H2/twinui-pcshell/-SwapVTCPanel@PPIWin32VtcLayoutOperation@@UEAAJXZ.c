/*
 * XREFs of ?SwapVTCPanel@PPIWin32VtcLayoutOperation@@UEAAJXZ @ 0x1805CE290
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$PPIWin32Vtc_SideBarSwapped@_N@TabletModeTelemetry@@SAX$$QEA_N@Z @ 0x1805CCF44 (--$PPIWin32Vtc_SideBarSwapped@_N@TabletModeTelemetry@@SAX$$QEA_N@Z.c)
 *     ?_FinalizeLayout@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1805CEA6C (-_FinalizeLayout@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z.c)
 *     ?_QueryEvictAppFromLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1805CF564 (-_QueryEvictAppFromLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?_QueryInsertAppToLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@W4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1805CF740 (-_QueryInsertAppToLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@W4APP_LAYOUT_INS.c)
 *     ?_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180792220 (-_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@.c)
 *     ?_UpdateOperationActions@CAppLayoutOperation@@IEAAXW4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x1807944E4 (-_UpdateOperationActions@CAppLayoutOperation@@IEAAXW4APP_LAYOUT_OPERATION_ACTIONS@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PPIWin32VtcLayoutOperation::SwapVTCPanel(PPIWin32VtcLayoutOperation *this)
{
  PPIWin32VtcLayoutOperation *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  int v4; // r14d
  int v5; // eax
  unsigned int v6; // ebx
  __int64 (__fastcall *v7)(PPIWin32VtcLayoutOperation *, struct IApplicationView **, _QWORD); // rbx
  int EvictAppFromLayout; // eax
  __int64 v9; // rdx
  _BOOL8 v10; // r8
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  bool v13; // [rsp+50h] [rbp+8h] BYREF
  struct IApplicationView *v14; // [rsp+58h] [rbp+10h] BYREF

  v2 = (PPIWin32VtcLayoutOperation *)((char *)this - 176);
  v3 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 16) & -(__int64)(this != (PPIWin32VtcLayoutOperation *)176));
  v4 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v3, 1);
  v5 = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, _QWORD))(*(_QWORD *)v2 + 48LL))(v2, 0LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12E,
      (int)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_14;
  }
  v14 = 0LL;
  v7 = *(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, struct IApplicationView **, _QWORD))(*(_QWORD *)v2 + 160LL);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v14);
  EvictAppFromLayout = v7(v2, &v14, 0LL);
  v6 = EvictAppFromLayout;
  if ( EvictAppFromLayout >= 0 )
  {
    EvictAppFromLayout = PPIWin32VtcLayoutOperation::_QueryEvictAppFromLayout(v2, v14, 0LL);
    v6 = EvictAppFromLayout;
    if ( EvictAppFromLayout >= 0 )
    {
      CAppLayoutOperation::_AddAnimationData((char *)this - 152, v14, 2LL);
      *((_DWORD *)this - 18) = 1;
      CAppLayoutOperation::_UpdateOperationActions((char *)this - 152, 2LL);
      CAppLayoutOperation::_UpdateOperationActions((char *)this - 152, 0x10000LL);
      v10 = PPIWin32VtcLayoutOperation::_sideBarLocation != 1;
      PPIWin32VtcLayoutOperation::_sideBarLocation = PPIWin32VtcLayoutOperation::_sideBarLocation != 1;
      EvictAppFromLayout = PPIWin32VtcLayoutOperation::_QueryInsertAppToLayout(v2, v14, v10);
      v6 = EvictAppFromLayout;
      if ( EvictAppFromLayout >= 0 )
      {
        EvictAppFromLayout = PPIWin32VtcLayoutOperation::_FinalizeLayout(v2);
        v6 = EvictAppFromLayout;
        if ( EvictAppFromLayout >= 0 )
        {
          v13 = PPIWin32VtcLayoutOperation::_sideBarLocation == 1;
          TabletModeTelemetry::PPIWin32Vtc_SideBarSwapped<bool>((char *)&v13);
          v6 = 0;
          goto LABEL_13;
        }
        v9 = 317LL;
      }
      else
      {
        v9 = 316LL;
      }
    }
    else
    {
      v9 = 306LL;
    }
  }
  else
  {
    v9 = 305LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
    (const char *)(unsigned int)EvictAppFromLayout);
LABEL_13:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v14);
LABEL_14:
  if ( v4 >= 0 )
    LeaveCriticalSection(v3);
  return v6;
}
