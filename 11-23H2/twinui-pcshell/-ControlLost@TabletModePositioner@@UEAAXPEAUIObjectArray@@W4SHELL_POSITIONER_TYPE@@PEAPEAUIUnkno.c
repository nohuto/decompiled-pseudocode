/*
 * XREFs of ?ControlLost@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1805BABC0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000E158 (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BA56C (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18011050C (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1TMPControlLost@TabletModeTraceLogging@@QEAA@XZ @ 0x1805B87F8 (--1TMPControlLost@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ?EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1805BB474 (-EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z @ 0x1805BE408 (-SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z.c)
 *     ?StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1805C007C (-StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_.c)
 *     ?SwitchToEmptyLayoutHelper@TabletModePositioner@@AEAAJW4SwitchToEmptyLayoutFlags@@@Z @ 0x1805C1A68 (-SwitchToEmptyLayoutHelper@TabletModePositioner@@AEAAJW4SwitchToEmptyLayoutFlags@@@Z.c)
 *     ?TabletModePositionerHandoffContext_CreateInstance@@YAJPEAUIAppLayout@@_NAEBU_GUID@@PEAPEAX@Z @ 0x1805C657C (-TabletModePositionerHandoffContext_CreateInstance@@YAJPEAUIAppLayout@@_NAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall TabletModePositioner::ControlLost(__int64 a1, __int64 a2, unsigned int a3, void **a4)
{
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, GUID *, __int64 *); // rbx
  int v10; // eax
  __int64 (__fastcall *v11)(__int64, _QWORD, GUID *, void **); // rbx
  int v12; // eax
  const struct _GUID *v13; // r8
  int Instance; // eax
  HRESULT v15; // eax
  wil::details::in1diag3 *v16; // rcx
  __int64 v17; // rdx
  __int64 (__fastcall *v18)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // [rsp+30h] [rbp-D0h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v24[40]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  *a4 = 0LL;
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v24,
    (__int64)"TMPControlLost");
  v24[0] = &TabletModeTraceLogging::TMPControlLost::`vftable';
  TabletModeTraceLogging::TMPControlLost::StartActivity(v24, a2, a3);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 136));
  if ( a3 != 3 )
  {
    if ( ((a3 - 4) & 0xFFFFFFFD) != 0 )
    {
      (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 224) + 24LL))(*(_QWORD *)(a1 + 224), &v22);
      if ( (_DWORD)v22 == *(_DWORD *)(a1 + 108) )
        goto LABEL_30;
      if ( (int)DwmpBeginTransitionRequest(91LL) >= 0 )
        DwmpEndTransitionRequest(91LL);
      Instance = TabletModePositionerHandoffContext_CreateInstance(
                   *(struct IAppLayout **)(a1 + 120),
                   *(_BYTE *)(a1 + 112),
                   v13,
                   a4);
      if ( Instance < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3DC,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)Instance);
      TabletModePositioner::SetTabletMode(a1 - 128, (unsigned int)v22);
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
      v15 = IUnknown_QueryService(
              *(IUnknown **)(a1 - 112),
              (const GUID *const)&SID_VirtualDesktopTabletModePolicyService,
              &GUID_56b32065_0bb3_42e2_975d_a559de1316e8,
              &ppvOut);
      v16 = retaddr;
      if ( v15 >= 0 )
      {
        v15 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut + 24LL))(ppvOut, *(_QWORD *)(a1 + 120));
        v16 = retaddr;
        if ( v15 >= 0 )
        {
LABEL_22:
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
          goto LABEL_30;
        }
        v17 = 995LL;
      }
      else
      {
        v17 = 993LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v16,
        (void *)v17,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v15);
      goto LABEL_22;
    }
    v22 = 0LL;
    v18 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v22);
    v19 = v18(a2, 0LL, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v22);
    v20 = retaddr;
    if ( v19 >= 0 )
    {
      if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 120) + 184LL))(
              *(_QWORD *)(a1 + 120),
              v22) )
        goto LABEL_29;
      v19 = TabletModePositioner::EvictAppHelper(a1 - 128, v22, 8LL);
      v20 = retaddr;
      if ( v19 >= 0 )
        goto LABEL_29;
      v21 = 966LL;
    }
    else
    {
      v21 = 964LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v20,
      (void *)v21,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v19);
LABEL_29:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v22);
    goto LABEL_30;
  }
  v22 = 0LL;
  v8 = *(_QWORD *)(a1 + 120);
  v9 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v8 + 192LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
  v10 = v9(v8, &GUID_7baad876_2fc5_4561_93e1_17e868a174ed, &v22);
  if ( v10 >= 0 )
  {
    TabletModePositioner::SwitchToEmptyLayoutHelper(a1 - 128);
    if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 80LL))(v22, 5LL) > 1 )
    {
      ppvOut = 0LL;
      v11 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, void **))(*(_QWORD *)a2 + 32LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&ppvOut);
      v12 = v11(a2, 0LL, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &ppvOut);
      if ( v12 >= 0 )
      {
        if ( (*(unsigned int (__fastcall **)(__int64, void *))(*(_QWORD *)v22 + 184LL))(v22, ppvOut) )
          Microsoft::WRL::ComPtr<IAppLayout>::operator=((__int64 *)(a1 + 136), &v22);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3B6,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v12);
      }
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&ppvOut);
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3AA,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v10);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
LABEL_30:
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v24);
  TabletModeTraceLogging::TMPControlLost::~TMPControlLost((TabletModeTraceLogging::TMPControlLost *)v24);
}
