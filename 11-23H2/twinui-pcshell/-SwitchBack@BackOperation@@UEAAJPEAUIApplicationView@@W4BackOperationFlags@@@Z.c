/*
 * XREFs of ?SwitchBack@BackOperation@@UEAAJPEAUIApplicationView@@W4BackOperationFlags@@@Z @ 0x1805CA6D0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x1800528C8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x180793850 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1807940F4 (-_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x1807944F4 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BackOperation::SwitchBack(__int64 a1, __int64 a2, char a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // r14
  int v7; // r15d
  int v8; // eax
  unsigned int v9; // ebx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // ebx
  int ViewFullScreen; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = (struct _RTL_CRITICAL_SECTION *)((a1 + 16) & -(__int64)(a1 != 176));
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v6, 1);
  v8 = CAppLayoutOperation::_VerifyAndPrepareLayout((CAppLayoutOperation *)(a1 - 152), 0LL, 0);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 55LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\tabletmode\\lib\\backoperation.cpp",
      (const char *)v10);
    goto LABEL_9;
  }
  v12 = 589889;
  if ( (a3 & 1) != 0 )
  {
    ViewFullScreen = CAppLayoutOperation::_MakeViewFullScreen(a1 - 152, a2, 10LL);
    v9 = ViewFullScreen;
    if ( ViewFullScreen < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x47,
        (int)"pcshell\\twinui\\tabletmode\\lib\\backoperation.cpp",
        (const char *)(unsigned int)ViewFullScreen);
      v10 = v9;
      v11 = 58LL;
      goto LABEL_6;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 - 88), a2);
    v12 = 589891;
  }
  CAppLayoutOperation::_FinalizeLayout(a1 - 152, 0LL);
  *(_DWORD *)(a1 - 72) = v12;
  v9 = 0;
LABEL_9:
  if ( v7 >= 0 )
    LeaveCriticalSection(v6);
  return v9;
}
