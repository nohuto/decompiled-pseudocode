/*
 * XREFs of ?EvictApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1805C7390
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009D028 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?QueryEvictApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1805C79FC (-QueryEvictApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x180793850 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_UpdateOperationActions@CAppLayoutOperation@@IEAAXW4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x1807944E4 (-_UpdateOperationActions@CAppLayoutOperation@@IEAAXW4APP_LAYOUT_OPERATION_ACTIONS@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x1807944F4 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AppSwitchOperation::EvictApp(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // r15
  struct _RTL_CRITICAL_SECTION *v7; // r13
  int EvictApp; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  char v11; // bl
  __int64 v12; // rdi
  int (__fastcall *v13)(__int64, _QWORD, __int64, GUID *, __int64 *); // rbx
  __int64 v14; // rbx
  int (__fastcall *v15)(__int64, GUID *, __int64 *); // rdi
  int v17; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v19; // [rsp+80h] [rbp+40h] BYREF
  __int64 v20; // [rsp+98h] [rbp+58h] BYREF

  v6 = a1 - 176;
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 16) & -(__int64)(a1 != 176));
  v17 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v7, 1);
  EvictApp = CAppLayoutOperation::_VerifyAndPrepareLayout((CAppLayoutOperation *)(a1 - 152), 0LL, 0);
  v9 = EvictApp;
  if ( EvictApp < 0 )
  {
    v10 = 146LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
      (const char *)(unsigned int)EvictApp);
    goto LABEL_25;
  }
  EvictApp = AppSwitchOperation::QueryEvictApp(v6, a2, a3);
  v9 = EvictApp;
  if ( EvictApp < 0 )
  {
    v10 = 149LL;
    goto LABEL_23;
  }
  *(_DWORD *)(a1 - 72) = 1;
  if ( (a3 & 1) != 0 )
    CAppLayoutOperation::_UpdateOperationActions(a1 - 152, 524352LL);
  if ( (a3 & 4) != 0 )
  {
    v11 = 1;
    CAppLayoutOperation::_UpdateOperationActions(a1 - 152, 32LL);
  }
  else
  {
    v11 = 0;
  }
  if ( (a3 & 8) == 0 )
    CAppLayoutOperation::_UpdateOperationActions(a1 - 152, 0x10000LL);
  if ( (a3 & 2) == 0
    && (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 - 112) + 80LL))(*(_QWORD *)(a1 - 112), 1LL)
    && (!(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 - 112) + 80LL))(*(_QWORD *)(a1 - 112), 4LL)
     || v11) )
  {
    v20 = 0LL;
    v12 = *(_QWORD *)(a1 - 112);
    v13 = *(int (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v12 + 104LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
    if ( v13(v12, 0LL, 1LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v20) >= 0 )
    {
      v19 = 0LL;
      v14 = v20;
      v15 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v20 + 48LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v19);
      if ( v15(v14, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v19) >= 0 )
      {
        Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 - 88), &v19);
        CAppLayoutOperation::_UpdateOperationActions(a1 - 152, 2LL);
      }
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v19);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
  }
  EvictApp = CAppLayoutOperation::_FinalizeLayout(a1 - 152, 0LL);
  v9 = EvictApp;
  if ( EvictApp < 0 )
  {
    v10 = 195LL;
    goto LABEL_23;
  }
  v9 = 0;
LABEL_25:
  if ( v17 >= 0 )
    LeaveCriticalSection(v7);
  return v9;
}
