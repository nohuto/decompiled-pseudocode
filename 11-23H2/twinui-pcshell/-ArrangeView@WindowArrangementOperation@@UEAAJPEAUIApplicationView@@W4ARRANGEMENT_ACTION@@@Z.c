/*
 * XREFs of ?ArrangeView@WindowArrangementOperation@@UEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@@Z @ 0x1805C8850
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x1800528C8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x1801BDC18 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?QueryArrangeView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW4FinalizeLayoutFlags@@@Z @ 0x1805C8D48 (-QueryArrangeView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@P.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x180793850 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x1807944F4 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall WindowArrangementOperation::ArrangeView(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // r12
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  HRESULT v10; // eax
  void *v11; // rbx
  __int64 (__fastcall *v12)(void *, __int64 *); // rdi
  int v13; // eax
  bool v14; // bl
  void *v15; // rbx
  __int64 (__fastcall *v16)(void *, GUID *, GUID *, __int64 *); // rdi
  int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, __int64 *); // rdi
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, GUID *, __int64); // rsi
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // [rsp+30h] [rbp-30h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v33; // [rsp+40h] [rbp-20h]
  struct _RTL_CRITICAL_SECTION *v34; // [rsp+48h] [rbp-18h]
  int v35; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  __int64 v37; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v38; // [rsp+B8h] [rbp+58h] BYREF

  v6 = a1 - 176;
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 16) & -(__int64)(a1 != 176));
  v33 = v7;
  v34 = v7;
  v35 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v7, 1);
  v8 = CAppLayoutOperation::_VerifyAndPrepareLayout((CAppLayoutOperation *)(a1 - 152), 0LL, 0);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_30;
  }
  ppvOut = 0LL;
  if ( !IsSurfaceHubWithWin32VtcEnabled() )
    goto LABEL_33;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  v10 = IUnknown_QueryService(
          *(IUnknown **)(a1 - 160),
          &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
          &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
          &ppvOut);
  v9 = v10;
  if ( v10 >= 0 )
  {
    v37 = 0LL;
    v11 = ppvOut;
    v12 = *(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)ppvOut + 72LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v37);
    v13 = v12(v11, &v37);
    v9 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x47,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
        (const char *)(unsigned int)v13);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v37);
LABEL_28:
      v7 = v33;
      goto LABEL_29;
    }
    v14 = (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v37 + 88LL))(v37, 4LL) != 0;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v37);
    if ( v14 )
    {
      v38 = 0LL;
      v15 = ppvOut;
      v16 = *(__int64 (__fastcall **)(void *, GUID *, GUID *, __int64 *))(*(_QWORD *)ppvOut + 80LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
      v17 = v16(v15, &CLSID_PPIWin32VtcLayoutOperation, &GUID_7f4d2785_4b93_429e_9250_0e9670706fba, &v38);
      v9 = v17;
      if ( v17 < 0 )
      {
        v18 = 79LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
          (const char *)(unsigned int)v17);
LABEL_23:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
        goto LABEL_28;
      }
      v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 104LL))(v38);
      v9 = v17;
      if ( v17 < 0 )
      {
        v18 = 80LL;
        goto LABEL_13;
      }
      v37 = 0LL;
      v19 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v38)(
              v38,
              &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb,
              &v37);
      v9 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x52,
          (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
          (const char *)(unsigned int)v19);
        goto LABEL_21;
      }
      v31 = 0LL;
      v20 = v37;
      v21 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v37 + 48LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v31);
      v22 = v21(v20, &v31);
      v9 = v22;
      if ( v22 < 0 )
      {
        v23 = 84LL;
LABEL_20:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
          (const char *)(unsigned int)v22);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v31);
LABEL_21:
        v26 = v37;
        if ( v37 )
        {
          v37 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
        goto LABEL_23;
      }
      v24 = v31;
      v25 = *(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v31 + 192LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 - 112));
      v22 = v25(v24, &GUID_dad20bf4_9130_4ecb_bcce_cab826dcafae, a1 - 112);
      v9 = v22;
      if ( v22 < 0 )
      {
        v23 = 85LL;
        goto LABEL_20;
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v31);
      v27 = v37;
      if ( v37 )
      {
        v37 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
LABEL_27:
      v9 = 0;
      goto LABEL_28;
    }
LABEL_33:
    v29 = WindowArrangementOperation::QueryArrangeView(v6, a2, a3, &v37);
    v9 = v29;
    if ( v29 >= 0 )
    {
      *(_DWORD *)(a1 - 72) = 65539;
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 - 88), a2);
      v29 = CAppLayoutOperation::_FinalizeLayout(a1 - 152, (unsigned int)v37);
      v9 = v29;
      if ( v29 >= 0 )
        goto LABEL_27;
      v30 = 93LL;
    }
    else
    {
      v30 = 90LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
      (const char *)(unsigned int)v29);
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x44,
    (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
    (const char *)(unsigned int)v10);
LABEL_29:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
LABEL_30:
  if ( v35 >= 0 )
    LeaveCriticalSection(v7);
  return v9;
}
