/*
 * XREFs of ?ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18050A244
 * Callers:
 *     ?OnApplicationViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18014EB50 (-OnApplicationViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?ViewMinimized@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x180509FF4 (-ViewMinimized@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Ta.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ReverseAppToAppSwitch@PEAUIAppLayout@@AEAPEAUIApplicationView@@W4AppCloseMethod@@@TabletModeTelemetry@@SAX$$QEAPEAUIAppLayout@@AEAPEAUIApplicationView@@$$QEAW4AppCloseMethod@@@Z @ 0x1804FF2EC (--$ReverseAppToAppSwitch@PEAUIAppLayout@@AEAPEAUIApplicationView@@W4AppCloseMethod@@@TabletModeT.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180500804 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x180502C98 (-EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?IsOldFullScreenView@TabletModePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180505190 (-IsOldFullScreenView@TabletModePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsSwitcherVisible@TabletModePositioner@@AEAA_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180505420 (-IsSwitcherVisible@TabletModePositioner@@AEAA_NW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ?TryClearFullScreenCachedAppLayout@TabletModePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x180509B30 (-TryClearFullScreenCachedAppLayout@TabletModePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabletModePositioner::ViewRemoved(TabletModePositioner *this, struct IApplicationView *a2)
{
  bool IsSwitcherVisible; // r15
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, GUID *, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  int (__fastcall *v9)(char *, __int64 *); // rbx
  __int64 v10; // r9
  __int64 v11; // rbx
  int (__fastcall *v12)(__int64, _QWORD, struct IApplicationView *, __int64, struct IUnknown **); // rdi
  struct IUnknown *v13; // rcx
  struct IUnknown *v14; // rcx
  unsigned int v16; // r8d
  int v17; // eax
  struct IUnknown *v18; // rcx
  __int64 v19; // [rsp+30h] [rbp-18h] BYREF
  __int64 v20; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  unsigned int v22; // [rsp+80h] [rbp+38h] BYREF
  struct IApplicationView *v23; // [rsp+88h] [rbp+40h] BYREF
  struct IUnknown *v24; // [rsp+90h] [rbp+48h] BYREF
  __int64 v25; // [rsp+98h] [rbp+50h] BYREF

  v23 = a2;
  TabletModePositioner::TryClearFullScreenCachedAppLayout(this, a2);
  if ( TabletModePositioner::IsOldFullScreenView(this, (struct IUnknown *)a2) )
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)this + 34);
  if ( !(*(unsigned int (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 31) + 184LL))(
          *((_QWORD *)this + 31),
          a2) )
    return 0LL;
  IsSwitcherVisible = TabletModePositioner::IsSwitcherVisible((__int64)this, 31LL);
  v19 = 0LL;
  v5 = *((_QWORD *)this + 31);
  v6 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v5 + 192LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
  v7 = v6(v5, &GUID_7baad876_2fc5_4561_93e1_17e868a174ed, &v19);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v25 = 0LL;
    v24 = 0LL;
    v9 = *(int (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 14) + 32LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
    if ( v9((char *)this + 112, &v25) < 0 )
      goto LABEL_16;
    v11 = v25;
    v12 = *(int (__fastcall **)(__int64, _QWORD, struct IApplicationView *, __int64, struct IUnknown **))(*(_QWORD *)v25 + 24LL);
    v13 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
    }
    LOBYTE(v10) = IsSwitcherVisible;
    if ( v12(v11, *((_QWORD *)this + 31), a2, v10, &v24) < 0
      || (int)TabletModePositioner::ApplyLayoutOperationHelper(this, v24) < 0 )
    {
LABEL_16:
      v16 = 8;
      if ( IsSwitcherVisible )
        v16 = 10;
      v17 = TabletModePositioner::EvictAppHelper(this, (__int64)a2, v16);
      v8 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x807,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v17);
        v18 = v24;
        if ( v24 )
        {
          v24 = 0LL;
          ((void (__fastcall *)(struct IUnknown *))v18->lpVtbl->Release)(v18);
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
        goto LABEL_22;
      }
    }
    else
    {
      v22 = 0;
      v20 = v19;
      TabletModeTelemetry::ReverseAppToAppSwitch<IAppLayout *,IApplicationView * &,enum AppCloseMethod>(
        &v20,
        &v23,
        &v22);
    }
    v14 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v14->lpVtbl->Release)(v14);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7F6,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v7);
LABEL_22:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
  return v8;
}
