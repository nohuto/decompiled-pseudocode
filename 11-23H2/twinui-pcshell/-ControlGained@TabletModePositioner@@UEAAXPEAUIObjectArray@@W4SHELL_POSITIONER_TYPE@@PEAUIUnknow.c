/*
 * XREFs of ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1805BA030
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000E158 (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009D028 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BA56C (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18011050C (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetScaleFactor@TabletModePositioner@@AEAAJPEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x18016BFC0 (-GetScaleFactor@TabletModePositioner@@AEAAJPEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1TMPControlGained@TabletModeTraceLogging@@QEAA@XZ @ 0x1805B87CC (--1TMPControlGained@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ?CancelMoveSizeOperationForOperableView@TabletModePositioner@@AEAAJXZ @ 0x1805B9AAC (-CancelMoveSizeOperationForOperableView@TabletModePositioner@@AEAAJXZ.c)
 *     ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1805BAFE0 (-CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUI.c)
 *     ?InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ @ 0x1805BD1A4 (-InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ.c)
 *     ?SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z @ 0x1805BE408 (-SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z.c)
 *     ?StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1805BFF14 (-StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONE.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x1805C141C (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 *     ?SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x1805C1890 (-SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFla.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall TabletModePositioner::ControlGained(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // eax
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64, struct IUnknown **); // rbx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdi
  int (__fastcall *v13)(__int64, __int64, struct IUnknown **); // rbx
  int v14; // eax
  __int64 (__fastcall *v15)(__int64, _QWORD, GUID *, struct IUnknown **); // rbx
  int v16; // eax
  char v17; // r12
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rsi
  int (__fastcall *v21)(__int64, struct IUnknown **); // rdi
  bool v22; // si
  struct IApplicationView *v23; // rdx
  int v24; // eax
  wil::details::in1diag3 *v25; // rcx
  __int64 v26; // rdx
  IUnknown **v27; // rdi
  struct IApplicationView *v28; // rdx
  int inited; // eax
  __int64 v30; // rsi
  int (__fastcall *v31)(__int64, struct IUnknown **); // rdi
  int v32; // eax
  int ScaleFactor; // eax
  int v34; // eax
  wil::details::in1diag3 *v35; // rcx
  __int64 v36; // rdx
  struct tagRECT *p_rc; // r9
  struct IUnknown *v38; // [rsp+38h] [rbp-C8h] BYREF
  struct IUnknown *v39; // [rsp+40h] [rbp-C0h] BYREF
  enum DEVICE_SCALE_FACTOR v40[2]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v41; // [rsp+50h] [rbp-B0h] BYREF
  struct IUnknown *v42; // [rsp+58h] [rbp-A8h] BYREF
  int v43; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+68h] [rbp-98h] BYREF
  struct tagRECT rc; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v46[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v46,
    (__int64)"TMPControlGained");
  v46[0] = &TabletModeTraceLogging::TMPControlGained::`vftable';
  TabletModeTraceLogging::TMPControlGained::StartActivity(v46, a2, a3);
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 224) + 24LL))(*(_QWORD *)(a1 + 224), &v41);
  v6 = *(_DWORD *)(a1 + 108);
  v38 = 0LL;
  if ( v41 == v6 )
  {
    v15 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)a2 + 32LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v38);
    v16 = v15(a2, 0LL, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v38);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x430,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v16);
LABEL_58:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v38);
      goto LABEL_59;
    }
    if ( ((int (__fastcall *)(struct IUnknown *, int *))v38->lpVtbl[9].QueryInterface)(v38, &v43) < 0 || !v43 )
      goto LABEL_58;
    v17 = 1;
    v18 = 0LL;
    v44 = 0LL;
    rc = 0LL;
    if ( a3 != 3 )
    {
      if ( a3 != 6 )
        goto LABEL_49;
      v39 = 0LL;
      v27 = (IUnknown **)(a1 - 128);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v39);
      inited = TabletModePositioner::CreateAndInitApplicationViewOperation(
                 (TabletModePositioner *)(a1 - 128),
                 v28,
                 (struct IApplicationViewOperation **)&v39);
      if ( inited >= 0 )
      {
        v42 = 0LL;
        v30 = *(_QWORD *)(a1 + 208);
        v31 = *(int (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v30 + 72LL);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v42);
        v22 = v31(v30, &v42) < 0 || (unsigned int)SHIsSameObject(v42, v38) != 0;
        ((void (__fastcall *)(struct IUnknown *, _QWORD))v39->lpVtbl[4].QueryInterface)(v39, 0LL);
        v32 = ((__int64 (__fastcall *)(struct IUnknown *, struct IUnknown *))v38->lpVtbl[13].AddRef)(v38, v39);
        if ( v32 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x46F,
            (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v32);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v42);
        v27 = (IUnknown **)(a1 - 128);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x462,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)inited);
        v22 = 1;
      }
      ((void (__fastcall *)(struct IUnknown *, struct tagRECT *))v38->lpVtbl[5].AddRef)(v38, &rc);
      OffsetRect(&rc, -rc.left, -rc.top);
      v40[0] = SCALE_100_PERCENT;
      ScaleFactor = TabletModePositioner::GetScaleFactor(v27, v40);
      if ( ScaleFactor < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x47A,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)ScaleFactor);
      rc.right += 2 * (v40[0] * GetSystemMetrics(5) / -100);
      rc.bottom += 2 * (v40[0] * GetSystemMetrics(6) / -100);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v39);
LABEL_45:
      if ( !v22 )
        goto LABEL_57;
      if ( v18 )
      {
        v34 = TabletModePositioner::SwitchToCustomLayoutHelper(a1 - 128, v18);
        v35 = retaddr;
        if ( v34 < 0 )
        {
          v36 = 1155LL;
LABEL_56:
          wil::details::in1diag3::_Log_Hr(
            v35,
            (void *)v36,
            (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v34);
        }
LABEL_57:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v44);
        goto LABEL_58;
      }
LABEL_49:
      if ( rc.left < rc.right && rc.top < rc.bottom )
        v17 = 0;
      p_rc = &rc;
      if ( v17 )
        p_rc = 0LL;
      v34 = TabletModePositioner::SwitchToAppHelper(a1 - 128, v38, 2LL, p_rc, 0LL);
      v35 = retaddr;
      if ( v34 >= 0 )
        goto LABEL_57;
      v36 = 1162LL;
      goto LABEL_56;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 + 144), (__int64 *)&v38);
    v19 = *(_QWORD *)(a1 + 136);
    if ( v19 && (*(unsigned int (__fastcall **)(__int64, struct IUnknown *))(*(_QWORD *)v19 + 184LL))(v19, v38) )
    {
      Microsoft::WRL::ComPtr<IAppLayout>::operator=(&v44, (__int64 *)(a1 + 136));
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 136));
      v18 = v44;
    }
    v39 = 0LL;
    v20 = *(_QWORD *)(a1 + 208);
    v21 = *(int (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v20 + 72LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v39);
    if ( v21(v20, &v39) < 0 || (unsigned int)SHIsSameObject(v39, v38) )
    {
      v22 = 1;
      goto LABEL_32;
    }
    v22 = 0;
    *(_QWORD *)v40 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v40);
    v24 = TabletModePositioner::CreateAndInitApplicationViewOperation(
            (TabletModePositioner *)(a1 - 128),
            v23,
            (struct IApplicationViewOperation **)v40);
    v25 = retaddr;
    if ( v24 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v40 + 96LL))(*(_QWORD *)v40, 0LL);
      v24 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD))v38->lpVtbl[13].AddRef)(v38, *(_QWORD *)v40);
      v25 = retaddr;
      if ( v24 >= 0 )
      {
LABEL_30:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v40);
LABEL_32:
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v39);
        goto LABEL_45;
      }
      v26 = 1114LL;
    }
    else
    {
      v26 = 1108LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v25,
      (void *)v26,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v24);
    goto LABEL_30;
  }
  v7 = *(_QWORD *)(a1 + 320);
  v8 = *(__int64 (__fastcall **)(__int64, __int64, struct IUnknown **))(*(_QWORD *)v7 + 32LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v38);
  v9 = v8(v7, 2LL, &v38);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x403,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v9);
  v10 = ((__int64 (__fastcall *)(struct IUnknown *, __int64))v38->lpVtbl[1].Release)(v38, 3LL);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x404,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v10);
  if ( (int)DwmpBeginTransitionRequest(91LL) >= 0 )
    DwmpEndTransitionRequest(91LL);
  TabletModePositioner::SetTabletMode(a1 - 128, v41);
  if ( (int)TabletModePositioner::CancelMoveSizeOperationForOperableView((TabletModePositioner *)(a1 - 128)) < 0 )
  {
    v11 = TabletModePositioner::InitializeAppLayoutForTabletModeEntry((TabletModePositioner *)(a1 - 128));
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x414,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v11);
  }
  v12 = *(_QWORD *)(a1 + 320);
  v13 = *(int (__fastcall **)(__int64, __int64, struct IUnknown **))(*(_QWORD *)v12 + 32LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v38);
  if ( v13(v12, 1LL, &v38) >= 0 )
  {
    v14 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD))v38->lpVtbl[1].Release)(v38, 0LL);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x41B,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v14);
  }
  *(_BYTE *)(a1 + 112) = 1;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v38);
LABEL_59:
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v46);
  TabletModeTraceLogging::TMPControlGained::~TMPControlGained((TabletModeTraceLogging::TMPControlGained *)v46);
}
