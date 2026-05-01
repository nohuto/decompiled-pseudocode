/*
 * XREFs of ?AppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01W4APP_TO_APP_SWITCH_FLAGS@@@Z @ 0x1805C71A0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x1800528C8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01PEAW4FinalizeLayoutFlags@@@Z @ 0x1805C75FC (-QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREF.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x180793850 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_UpdateOperationActions@CAppLayoutOperation@@IEAAXW4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x1807944E4 (-_UpdateOperationActions@CAppLayoutOperation@@IEAAXW4APP_LAYOUT_OPERATION_ACTIONS@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x1807944F4 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppSwitchOperation::AppToAppSwitch(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 v9; // r12
  struct _RTL_CRITICAL_SECTION *v10; // rbp
  int v11; // r15d
  int AppToAppSwitch; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v17; // [rsp+80h] [rbp+8h]

  v9 = a1 - 176;
  v10 = (struct _RTL_CRITICAL_SECTION *)((a1 + 16) & -(__int64)(a1 != 176));
  v11 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v10, 1);
  AppToAppSwitch = CAppLayoutOperation::_VerifyAndPrepareLayout((CAppLayoutOperation *)(a1 - 152), 0LL, 0);
  v13 = AppToAppSwitch;
  if ( AppToAppSwitch < 0 )
  {
    v14 = 118LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
      (const char *)(unsigned int)AppToAppSwitch);
    goto LABEL_11;
  }
  AppToAppSwitch = AppSwitchOperation::QueryAppToAppSwitch(v9, a2, a3, a4);
  v13 = AppToAppSwitch;
  if ( AppToAppSwitch < 0 )
  {
    v14 = 122LL;
    goto LABEL_9;
  }
  *(_DWORD *)(a1 - 72) = 327697;
  if ( (a6 & 1) == 0 )
    CAppLayoutOperation::_UpdateOperationActions(a1 - 152, 2LL);
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 - 88), a4);
  AppToAppSwitch = CAppLayoutOperation::_FinalizeLayout(a1 - 152, v17 | 4u);
  v13 = AppToAppSwitch;
  if ( AppToAppSwitch < 0 )
  {
    v14 = 136LL;
    goto LABEL_9;
  }
  v13 = 0;
LABEL_11:
  if ( v11 >= 0 )
    LeaveCriticalSection(v10);
  return v13;
}
