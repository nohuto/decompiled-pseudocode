/*
 * XREFs of ?SwitchToEmptyLayout@TabletModePositionerOperation@@UEAAJW4SwitchToEmptyLayoutFlags@@@Z @ 0x180513A90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?_EvictAllItems@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@PEA_N@Z @ 0x180614B9C (-_EvictAllItems@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@PEA.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1806150B0 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_UpdateOperationActions@CAppLayoutOperation@@IEAAXW4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x180615CFC (-_UpdateOperationActions@CAppLayoutOperation@@IEAAXW4APP_LAYOUT_OPERATION_ACTIONS@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x180615D0C (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositionerOperation::SwitchToEmptyLayout(__int64 a1, char a2)
{
  CAppLayoutOperation *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  int v5; // ebp
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (CAppLayoutOperation *)(a1 - 152);
  v4 = (struct _RTL_CRITICAL_SECTION *)((a1 + 16) & -(__int64)(a1 != 176));
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  v6 = CAppLayoutOperation::_VerifyAndPrepareLayout(v3, 0LL, 0);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 171LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_9;
  }
  v6 = CAppLayoutOperation::_EvictAllItems(v3, 0LL, 5LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 174LL;
    goto LABEL_5;
  }
  *((_DWORD *)v3 + 20) = 1;
  if ( (a2 & 1) != 0 )
    CAppLayoutOperation::_UpdateOperationActions(v3, 32LL);
  CAppLayoutOperation::_FinalizeLayout(v3, 2LL);
  v7 = 0;
LABEL_9:
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
  return v7;
}
