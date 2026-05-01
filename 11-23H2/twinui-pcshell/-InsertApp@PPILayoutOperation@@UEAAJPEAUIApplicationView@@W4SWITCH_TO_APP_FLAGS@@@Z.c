/*
 * XREFs of ?InsertApp@PPILayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x1805CC6F0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x1800528C8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?QueryInsertApp@PPILayoutOperation@@AEAAJPEAUIApplicationView@@@Z @ 0x1805CC8E8 (-QueryInsertApp@PPILayoutOperation@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x180793850 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_UpdateOperationActions@CAppLayoutOperation@@IEAAXW4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x1807944E4 (-_UpdateOperationActions@CAppLayoutOperation@@IEAAXW4APP_LAYOUT_OPERATION_ACTIONS@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x1807944F4 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PPILayoutOperation::InsertApp(__int64 a1, struct IApplicationView *a2, char a3)
{
  PPILayoutOperation *v6; // r13
  struct _RTL_CRITICAL_SECTION *v7; // r14
  int v8; // r12d
  __int64 v9; // rdi
  int InsertApp; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = (PPILayoutOperation *)(a1 - 176);
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 16) & -(__int64)(a1 != 176));
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v7, 1);
  v9 = a1 - 152;
  InsertApp = CAppLayoutOperation::_VerifyAndPrepareLayout((CAppLayoutOperation *)(a1 - 152), 0LL, 0);
  v11 = InsertApp;
  if ( InsertApp >= 0 )
  {
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 - 88), (__int64)a2);
    *(_DWORD *)(a1 - 72) = 1;
    if ( (a3 & 1) == 0 )
      CAppLayoutOperation::_UpdateOperationActions(v9, 2LL);
    if ( (a3 & 2) == 0 )
    {
      CAppLayoutOperation::_UpdateOperationActions(v9, 0x10000LL);
      if ( (a3 & 8) != 0 )
        CAppLayoutOperation::_UpdateOperationActions(v9, 0x400000LL);
    }
    InsertApp = PPILayoutOperation::QueryInsertApp(v6, a2);
    v11 = InsertApp;
    if ( InsertApp >= 0 )
    {
      InsertApp = CAppLayoutOperation::_FinalizeLayout(v9, 2LL);
      v11 = InsertApp;
      if ( InsertApp >= 0 )
        goto LABEL_13;
      v12 = 113LL;
    }
    else
    {
      v12 = 112LL;
    }
  }
  else
  {
    v12 = 93LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"pcshell\\twinui\\tabletmode\\lib\\ppilayoutoperation.cpp",
    (const char *)(unsigned int)InsertApp);
LABEL_13:
  if ( v8 >= 0 )
    LeaveCriticalSection(v7);
  return v11;
}
