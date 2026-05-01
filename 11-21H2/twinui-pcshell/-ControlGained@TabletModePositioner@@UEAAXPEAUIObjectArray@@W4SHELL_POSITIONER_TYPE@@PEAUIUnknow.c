/*
 * XREFs of ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x180501870
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002E638 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180036AA8 (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180091C4C (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800C40C0 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?GetScaleFactor@TabletModePositioner@@AEAAJPEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x18011B0B8 (-GetScaleFactor@TabletModePositioner@@AEAAJPEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1TMPControlGained@TabletModeTraceLogging@@QEAA@XZ @ 0x180500010 (--1TMPControlGained@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ?CancelMoveSizeOperationForOperableView@TabletModePositioner@@AEAAJXZ @ 0x1805012EC (-CancelMoveSizeOperationForOperableView@TabletModePositioner@@AEAAJXZ.c)
 *     ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x180502840 (-CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUI.c)
 *     ?InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ @ 0x180504C14 (-InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ.c)
 *     ?SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z @ 0x1805061C8 (-SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z.c)
 *     ?StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1805079F0 (-StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONE.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x180508F54 (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 *     ?SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x1805093C8 (-SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFla.c)
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
  DWORD v15; // edx
  __int64 (__fastcall *v16)(__int64, _QWORD, GUID *, struct IUnknown **); // rbx
  int v17; // eax
  char v18; // r12
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rsi
  int (__fastcall *v22)(__int64, __int64 *); // rdi
  __int64 *v23; // rax
  bool v24; // si
  struct IApplicationView *v25; // rdx
  int v26; // eax
  wil::details::in1diag3 *v27; // rcx
  __int64 v28; // rdx
  IUnknown **v29; // rdi
  struct IApplicationView *v30; // rdx
  int inited; // eax
  __int64 v32; // rsi
  int (__fastcall *v33)(__int64, __int64 *); // rdi
  __int64 *AddressOf; // rax
  int v35; // eax
  int ScaleFactor; // eax
  int v37; // eax
  wil::details::in1diag3 *v38; // rcx
  __int64 v39; // rdx
  struct tagRECT *p_rc; // r9
  struct IUnknown *v41; // [rsp+38h] [rbp-C8h] BYREF
  enum DEVICE_SCALE_FACTOR v42[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct IUnknown *v43; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v44; // [rsp+50h] [rbp-B0h] BYREF
  int v45; // [rsp+54h] [rbp-ACh] BYREF
  struct IUnknown *v46; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT rc; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v49[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v49,
    (__int64)"TMPControlGained");
  v49[0] = &TabletModeTraceLogging::TMPControlGained::`vftable';
  TabletModeTraceLogging::TMPControlGained::StartActivity(v49, a2, a3);
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 224) + 24LL))(*(_QWORD *)(a1 + 224), &v44);
  v6 = *(_DWORD *)(a1 + 108);
  v41 = 0LL;
  if ( v44 == v6 )
  {
    v16 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)a2 + 32LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v41);
    v17 = v16(a2, 0LL, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v41);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x430,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v17);
LABEL_58:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v41);
      goto LABEL_59;
    }
    if ( ((int (__fastcall *)(struct IUnknown *, int *))v41->lpVtbl[9].QueryInterface)(v41, &v45) < 0 || !v45 )
      goto LABEL_58;
    v18 = 1;
    v19 = 0LL;
    v47 = 0LL;
    rc = 0LL;
    if ( a3 != 3 )
    {
      if ( a3 != 6 )
        goto LABEL_49;
      v43 = 0LL;
      v29 = (IUnknown **)(a1 - 128);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v43);
      inited = TabletModePositioner::CreateAndInitApplicationViewOperation(
                 (TabletModePositioner *)(a1 - 128),
                 v30,
                 (struct IApplicationViewOperation **)&v43);
      if ( inited >= 0 )
      {
        v46 = 0LL;
        v32 = *(_QWORD *)(a1 + 208);
        v33 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 72LL);
        AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v46);
        v24 = v33(v32, AddressOf) < 0 || (unsigned int)SHIsSameObject(v46, v41) != 0;
        ((void (__fastcall *)(struct IUnknown *, _QWORD))v43->lpVtbl[4].QueryInterface)(v43, 0LL);
        v35 = ((__int64 (__fastcall *)(struct IUnknown *, struct IUnknown *))v41->lpVtbl[13].AddRef)(v41, v43);
        if ( v35 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x46F,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v35);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v46);
        v29 = (IUnknown **)(a1 - 128);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x462,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)inited);
        v24 = 1;
      }
      ((void (__fastcall *)(struct IUnknown *, struct tagRECT *))v41->lpVtbl[5].AddRef)(v41, &rc);
      OffsetRect(&rc, -rc.left, -rc.top);
      v42[0] = SCALE_100_PERCENT;
      ScaleFactor = TabletModePositioner::GetScaleFactor(v29, v42);
      if ( ScaleFactor < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x47A,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)ScaleFactor);
      rc.right += 2 * (v42[0] * GetSystemMetrics(5) / -100);
      rc.bottom += 2 * (v42[0] * GetSystemMetrics(6) / -100);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v43);
LABEL_45:
      if ( !v24 )
        goto LABEL_57;
      if ( v19 )
      {
        v37 = TabletModePositioner::SwitchToCustomLayoutHelper(a1 - 128, v19);
        v38 = retaddr;
        if ( v37 < 0 )
        {
          v39 = 1155LL;
LABEL_56:
          wil::details::in1diag3::_Log_Hr(
            v38,
            (void *)v39,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v37);
        }
LABEL_57:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v47);
        goto LABEL_58;
      }
LABEL_49:
      if ( rc.left < rc.right && rc.top < rc.bottom )
        v18 = 0;
      p_rc = &rc;
      if ( v18 )
        p_rc = 0LL;
      v37 = TabletModePositioner::SwitchToAppHelper(a1 - 128, v41, 2LL, p_rc, 0LL);
      v38 = retaddr;
      if ( v37 >= 0 )
        goto LABEL_57;
      v39 = 1162LL;
      goto LABEL_56;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 + 144), (__int64 *)&v41);
    v20 = *(_QWORD *)(a1 + 136);
    if ( v20 && (*(unsigned int (__fastcall **)(__int64, struct IUnknown *))(*(_QWORD *)v20 + 184LL))(v20, v41) )
    {
      Microsoft::WRL::ComPtr<IAppLayout>::operator=(&v47, (__int64 *)(a1 + 136));
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 136));
      v19 = v47;
    }
    v43 = 0LL;
    v21 = *(_QWORD *)(a1 + 208);
    v22 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 72LL);
    v23 = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v43);
    if ( v22(v21, v23) < 0 || (unsigned int)SHIsSameObject(v43, v41) )
    {
      v24 = 1;
      goto LABEL_32;
    }
    v24 = 0;
    *(_QWORD *)v42 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v42);
    v26 = TabletModePositioner::CreateAndInitApplicationViewOperation(
            (TabletModePositioner *)(a1 - 128),
            v25,
            (struct IApplicationViewOperation **)v42);
    v27 = retaddr;
    if ( v26 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v42 + 96LL))(*(_QWORD *)v42, 0LL);
      v26 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD))v41->lpVtbl[13].AddRef)(v41, *(_QWORD *)v42);
      v27 = retaddr;
      if ( v26 >= 0 )
      {
LABEL_30:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v42);
LABEL_32:
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v43);
        goto LABEL_45;
      }
      v28 = 1114LL;
    }
    else
    {
      v28 = 1108LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v27,
      (void *)v28,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v26);
    goto LABEL_30;
  }
  v7 = *(_QWORD *)(a1 + 320);
  v8 = *(__int64 (__fastcall **)(__int64, __int64, struct IUnknown **))(*(_QWORD *)v7 + 32LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v41);
  v9 = v8(v7, 2LL, &v41);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x403,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v9);
  v10 = ((__int64 (__fastcall *)(struct IUnknown *, __int64))v41->lpVtbl[1].Release)(v41, 3LL);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x404,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v10);
  if ( (int)DwmpBeginTransitionRequest(91LL) >= 0 )
    DwmpEndTransitionRequest(91LL);
  TabletModePositioner::SetTabletMode(a1 - 128, v44);
  if ( (int)TabletModePositioner::CancelMoveSizeOperationForOperableView((TabletModePositioner *)(a1 - 128)) < 0 )
  {
    v11 = TabletModePositioner::InitializeAppLayoutForTabletModeEntry((TabletModePositioner *)(a1 - 128));
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x414,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v11);
  }
  v12 = *(_QWORD *)(a1 + 320);
  v13 = *(int (__fastcall **)(__int64, __int64, struct IUnknown **))(*(_QWORD *)v12 + 32LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v41);
  if ( v13(v12, 1LL, &v41) >= 0 )
  {
    v14 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD))v41->lpVtbl[1].Release)(v41, 0LL);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x41B,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v14);
  }
  *(_BYTE *)(a1 + 112) = 1;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v41);
LABEL_59:
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v49, v15);
  TabletModeTraceLogging::TMPControlGained::~TMPControlGained((TabletModeTraceLogging::TMPControlGained *)v49);
}
