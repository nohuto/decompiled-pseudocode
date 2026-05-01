/*
 * XREFs of ?ReverseAppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4REVERSE_APP_SWITCH_FLAGS@@@Z @ 0x1805C8320
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x1800528C8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x1805C7BAC (-QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x180793850 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_UpdateOperationActions@CAppLayoutOperation@@IEAAXW4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x1807944E4 (-_UpdateOperationActions@CAppLayoutOperation@@IEAAXW4APP_LAYOUT_OPERATION_ACTIONS@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x1807944F4 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppSwitchOperation::ReverseAppToAppSwitch(__int64 a1, struct IApplicationView *a2, char a3)
{
  __int64 v6; // r13
  struct _RTL_CRITICAL_SECTION *v7; // rbp
  int v8; // r12d
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
    v11 = 205LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
      (const char *)(unsigned int)SwitchToApp);
    goto LABEL_11;
  }
  SwitchToApp = AppSwitchOperation::QuerySwitchToApp(v6, a2, 4);
  v10 = SwitchToApp;
  if ( SwitchToApp < 0 )
  {
    v11 = 208LL;
    goto LABEL_9;
  }
  *(_DWORD *)(a1 - 72) = 129;
  if ( (a3 & 1) == 0 )
    CAppLayoutOperation::_UpdateOperationActions(a1 - 152, 2LL);
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 - 88), (__int64)a2);
  SwitchToApp = CAppLayoutOperation::_FinalizeLayout(a1 - 152, 0LL);
  v10 = SwitchToApp;
  if ( SwitchToApp < 0 )
  {
    v11 = 221LL;
    goto LABEL_9;
  }
  v10 = 0;
LABEL_11:
  if ( v8 >= 0 )
    LeaveCriticalSection(v7);
  return v10;
}
