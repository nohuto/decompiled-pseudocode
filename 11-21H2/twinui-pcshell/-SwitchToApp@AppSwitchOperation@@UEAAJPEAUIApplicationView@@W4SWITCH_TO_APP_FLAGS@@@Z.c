/*
 * XREFs of ?SwitchToApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x18050FFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x1801712D0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x18050F6FC (-QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1806150B0 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_UpdateOperationActions@CAppLayoutOperation@@IEAAXW4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x180615CFC (-_UpdateOperationActions@CAppLayoutOperation@@IEAAXW4APP_LAYOUT_OPERATION_ACTIONS@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x180615D0C (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppSwitchOperation::SwitchToApp(__int64 a1, struct IApplicationView *a2, int a3)
{
  __int64 v6; // r12
  struct _RTL_CRITICAL_SECTION *v7; // rbp
  int v8; // r13d
  int SwitchToApp; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = a1 - 176;
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 16) & -(__int64)(a1 != 176));
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v7, 1);
  SwitchToApp = CAppLayoutOperation::_VerifyAndPrepareLayout((CAppLayoutOperation *)(a1 - 152), 0LL, 0);
  v10 = SwitchToApp;
  if ( SwitchToApp < 0 )
  {
    v11 = 72LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
      (const char *)(unsigned int)SwitchToApp);
    goto LABEL_16;
  }
  SwitchToApp = AppSwitchOperation::QuerySwitchToApp(v6, a2, a3);
  v10 = SwitchToApp;
  if ( SwitchToApp < 0 )
  {
    v11 = 75LL;
    goto LABEL_14;
  }
  *(_DWORD *)(a1 - 152 + 80) = 1;
  if ( (a3 & 1) == 0 )
    CAppLayoutOperation::_UpdateOperationActions(a1 - 152, 2LL);
  if ( (a3 & 2) == 0 )
  {
    CAppLayoutOperation::_UpdateOperationActions(a1 - 152, 0x10000LL);
    if ( (a3 & 8) != 0 )
      CAppLayoutOperation::_UpdateOperationActions(a1 - 152, 0x400000LL);
    if ( (a3 & 0x10) != 0 )
      CAppLayoutOperation::_UpdateOperationActions(a1 - 152, 0x2000000LL);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 - 88), (__int64)a2);
  SwitchToApp = CAppLayoutOperation::_FinalizeLayout(a1 - 152, 4LL);
  v10 = SwitchToApp;
  if ( SwitchToApp < 0 )
  {
    v11 = 103LL;
    goto LABEL_14;
  }
  v10 = 0;
LABEL_16:
  if ( v8 >= 0 )
    LeaveCriticalSection(v7);
  return v10;
}
