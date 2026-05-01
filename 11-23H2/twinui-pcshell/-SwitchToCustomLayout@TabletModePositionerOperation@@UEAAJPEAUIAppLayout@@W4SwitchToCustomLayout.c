/*
 * XREFs of ?SwitchToCustomLayout@TabletModePositionerOperation@@UEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x1805CBC20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009D028 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180792220 (-_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x180793850 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_UpdateOperationActions@CAppLayoutOperation@@IEAAXW4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x1807944E4 (-_UpdateOperationActions@CAppLayoutOperation@@IEAAXW4APP_LAYOUT_OPERATION_ACTIONS@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x1807944F4 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabletModePositionerOperation::SwitchToCustomLayout(__int64 a1, struct IAppLayout *a2, char a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // r13
  char v7; // r14
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, __int64 *); // rbx
  int v12; // eax
  __int64 v13; // rdi
  int (__fastcall *v14)(__int64, _QWORD, __int64, GUID *, int *); // rbx
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, GUID *, __int64 *); // rdi
  int v17; // eax
  __int64 v19; // [rsp+30h] [rbp-59h] BYREF
  int v20[2]; // [rsp+38h] [rbp-51h] BYREF
  __int64 v21[2]; // [rsp+40h] [rbp-49h] BYREF
  int v22; // [rsp+50h] [rbp-39h]
  _BYTE v23[16]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v24; // [rsp+70h] [rbp-19h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v6 = (struct _RTL_CRITICAL_SECTION *)((a1 + 16) & -(__int64)(a1 != 176));
  v21[1] = (__int64)v6;
  v7 = 1;
  v22 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v6, 1);
  v8 = CAppLayoutOperation::_VerifyAndPrepareLayout((CAppLayoutOperation *)(a1 - 152), a2, 0);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v21[0] = 0LL;
    v10 = *(_QWORD *)(a1 - 120);
    v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 128LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v21);
    v12 = v11(v10, v21);
    if ( v12 >= 0 )
    {
      while ( (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v21[0] + 24LL))(v21[0], 1LL, v23) >= 0 )
      {
        if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 - 112) + 184LL))(
                *(_QWORD *)(a1 - 112),
                v24) )
          CAppLayoutOperation::_AddAnimationData(a1 - 152, v24, (a3 & 1) != 0 ? 10 : 5);
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC2,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
        (const char *)(unsigned int)v12);
    }
    *(_DWORD *)(a1 - 72) = 1;
    if ( (a3 & 1) != 0 )
    {
      CAppLayoutOperation::_UpdateOperationActions(a1 - 152, 64LL);
      if ( (a3 & 2) == 0 )
      {
        *(_QWORD *)v20 = 0LL;
        v19 = 0LL;
        v13 = *(_QWORD *)(a1 - 112);
        v14 = *(int (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v13 + 104LL);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v20);
        if ( v14(v13, 0LL, 1LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v20) >= 0 )
        {
          v15 = *(_QWORD *)v20;
          v16 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(**(_QWORD **)v20 + 48LL);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v19);
          v17 = v16(v15, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v19);
          if ( v17 >= 0 )
          {
            Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 - 88), &v19);
            CAppLayoutOperation::_UpdateOperationActions(a1 - 152, 2LL);
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xDE,
              (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
              (const char *)(unsigned int)v17);
          }
        }
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v19);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v20);
      }
    }
    else
    {
      v7 = 0;
    }
    if ( (a3 & 4) == 0 )
    {
      CAppLayoutOperation::_UpdateOperationActions(a1 - 152, 0x10000LL);
      if ( v7 )
        CAppLayoutOperation::_UpdateOperationActions(a1 - 152, 0x80000LL);
    }
    CAppLayoutOperation::_FinalizeLayout(a1 - 152, 0LL);
    v9 = 0;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v21);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBE,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
      (const char *)(unsigned int)v8);
  }
  if ( v22 >= 0 )
    LeaveCriticalSection(v6);
  return v9;
}
