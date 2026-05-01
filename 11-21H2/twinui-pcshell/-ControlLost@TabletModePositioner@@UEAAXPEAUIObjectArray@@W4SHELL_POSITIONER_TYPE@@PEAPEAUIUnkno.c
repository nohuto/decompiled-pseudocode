/*
 * XREFs of ?ControlLost@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x180502420
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180036AA8 (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180091C4C (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800C40C0 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1TMPControlLost@TabletModeTraceLogging@@QEAA@XZ @ 0x18050003C (--1TMPControlLost@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ?EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x180502C98 (-EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z @ 0x1805061C8 (-SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z.c)
 *     ?StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x180507B60 (-StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_.c)
 *     ?SwitchToEmptyLayoutHelper@TabletModePositioner@@AEAAJW4SwitchToEmptyLayoutFlags@@@Z @ 0x1805095A0 (-SwitchToEmptyLayoutHelper@TabletModePositioner@@AEAAJW4SwitchToEmptyLayoutFlags@@@Z.c)
 *     ?TabletModePositionerHandoffContext_CreateInstance@@YAJPEAUIAppLayout@@_NAEBU_GUID@@PEAPEAX@Z @ 0x18050E0CC (-TabletModePositionerHandoffContext_CreateInstance@@YAJPEAUIAppLayout@@_NAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall TabletModePositioner::ControlLost(__int64 a1, __int64 a2, unsigned int a3, void **a4)
{
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, GUID *, __int64 *); // rbx
  int v10; // eax
  __int64 (__fastcall *v11)(__int64, _QWORD, GUID *, void **); // rbx
  int v12; // eax
  DWORD v13; // edx
  const struct _GUID *v14; // r8
  int Instance; // eax
  HRESULT v16; // eax
  wil::details::in1diag3 *v17; // rcx
  __int64 v18; // rdx
  __int64 (__fastcall *v19)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int v20; // eax
  wil::details::in1diag3 *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // [rsp+30h] [rbp-D0h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v25[40]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  *a4 = 0LL;
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v25,
    (__int64)"TMPControlLost");
  v25[0] = &TabletModeTraceLogging::TMPControlLost::`vftable';
  TabletModeTraceLogging::TMPControlLost::StartActivity(v25, a2, a3);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 136));
  if ( a3 != 3 )
  {
    if ( ((a3 - 4) & 0xFFFFFFFD) != 0 )
    {
      (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 224) + 24LL))(*(_QWORD *)(a1 + 224), &v23);
      if ( (_DWORD)v23 == *(_DWORD *)(a1 + 108) )
        goto LABEL_30;
      if ( (int)DwmpBeginTransitionRequest(91LL) >= 0 )
        DwmpEndTransitionRequest(91LL);
      Instance = TabletModePositionerHandoffContext_CreateInstance(
                   *(struct IAppLayout **)(a1 + 120),
                   *(_BYTE *)(a1 + 112),
                   v14,
                   a4);
      if ( Instance < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3DC,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)Instance);
      TabletModePositioner::SetTabletMode(a1 - 128, (unsigned int)v23);
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
      v16 = IUnknown_QueryService(
              *(IUnknown **)(a1 - 112),
              (const GUID *const)&SID_VirtualDesktopTabletModePolicyService,
              &GUID_56b32065_0bb3_42e2_975d_a559de1316e8,
              &ppvOut);
      v17 = retaddr;
      if ( v16 >= 0 )
      {
        v16 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut + 24LL))(ppvOut, *(_QWORD *)(a1 + 120));
        v17 = retaddr;
        if ( v16 >= 0 )
        {
LABEL_22:
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
          goto LABEL_30;
        }
        v18 = 995LL;
      }
      else
      {
        v18 = 993LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v17,
        (void *)v18,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v16);
      goto LABEL_22;
    }
    v23 = 0LL;
    v19 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v23);
    v20 = v19(a2, 0LL, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v23);
    v21 = retaddr;
    if ( v20 >= 0 )
    {
      if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 120) + 184LL))(
              *(_QWORD *)(a1 + 120),
              v23) )
        goto LABEL_29;
      v20 = TabletModePositioner::EvictAppHelper(a1 - 128, v23, 8LL);
      v21 = retaddr;
      if ( v20 >= 0 )
        goto LABEL_29;
      v22 = 966LL;
    }
    else
    {
      v22 = 964LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v21,
      (void *)v22,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v20);
LABEL_29:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v23);
    goto LABEL_30;
  }
  v23 = 0LL;
  v8 = *(_QWORD *)(a1 + 120);
  v9 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v8 + 192LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
  v10 = v9(v8, &GUID_7baad876_2fc5_4561_93e1_17e868a174ed, &v23);
  if ( v10 >= 0 )
  {
    TabletModePositioner::SwitchToEmptyLayoutHelper(a1 - 128);
    if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 80LL))(v23, 5LL) > 1 )
    {
      ppvOut = 0LL;
      v11 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, void **))(*(_QWORD *)a2 + 32LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&ppvOut);
      v12 = v11(a2, 0LL, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &ppvOut);
      if ( v12 >= 0 )
      {
        if ( (*(unsigned int (__fastcall **)(__int64, void *))(*(_QWORD *)v23 + 184LL))(v23, ppvOut) )
          Microsoft::WRL::ComPtr<IAppLayout>::operator=((__int64 *)(a1 + 136), &v23);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3B6,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
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
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v10);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
LABEL_30:
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v25, v13);
  TabletModeTraceLogging::TMPControlLost::~TMPControlLost((TabletModeTraceLogging::TMPControlLost *)v25);
}
