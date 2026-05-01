/*
 * XREFs of ?ResizeApps@AppResizeOperation@@UEAAJW4ResizeAction@@AEBUtagPOINT@@@Z @ 0x180511D10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?QueryResizeApps@AppResizeOperation@@AEAAJW4ResizeAction@@AEBUtagPOINT@@@Z @ 0x180511398 (-QueryResizeApps@AppResizeOperation@@AEAAJW4ResizeAction@@AEBUtagPOINT@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1806150B0 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x180615D0C (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppResizeOperation::ResizeApps(__int64 a1, int a2, __int64 a3)
{
  CAppLayoutOperation *v5; // rdi
  __int64 v6; // r14
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  int v8; // ebp
  int ResizeApps; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = (CAppLayoutOperation *)(a1 - 152);
  v6 = a1 - 176;
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 16) & -(__int64)(a1 != 176));
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v7, 1);
  ResizeApps = CAppLayoutOperation::_VerifyAndPrepareLayout(v5, 0LL, 0);
  v10 = ResizeApps;
  if ( ResizeApps >= 0 )
  {
    *((_DWORD *)v5 + 20) = 1;
    ResizeApps = AppResizeOperation::QueryResizeApps(v6, a2, a3);
    v10 = ResizeApps;
    if ( ResizeApps >= 0 )
    {
      ResizeApps = CAppLayoutOperation::_FinalizeLayout(v5, 0LL);
      v10 = ResizeApps;
      if ( ResizeApps >= 0 )
        goto LABEL_8;
      v11 = 61LL;
    }
    else
    {
      v11 = 60LL;
    }
  }
  else
  {
    v11 = 58LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
    (const char *)(unsigned int)ResizeApps);
LABEL_8:
  if ( v8 >= 0 )
    LeaveCriticalSection(v7);
  return v10;
}
