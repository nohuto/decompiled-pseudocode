/*
 * XREFs of ?EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1805BB474
 * Callers:
 *     ?ControlLost@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1805BABC0 (-ControlLost@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnkno.c)
 *     ?SetViewStateForDesiredAppState@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x1805BE6E0 (-SetViewStateForDesiredAppState@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_D.c)
 *     ?ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1805C2734 (-ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x1805C29C8 (-ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Tab.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x1801BDC18 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1805B8FC4 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1805BCE54 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabletModePositioner::EvictAppHelper(TabletModePositioner *a1, __int64 a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int inited; // eax
  __int64 v10; // rdx
  struct IUnknown *v12; // [rsp+30h] [rbp-10h] BYREF
  struct IUnknown *v13; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v15; // [rsp+78h] [rbp+38h] BYREF

  if ( !IsSurfaceHubWithWin32VtcEnabled() )
  {
LABEL_15:
    v13 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
    inited = TabletModePositioner::InitLayoutOperationHelper(
               a1,
               &CLSID_AppSwitchOperation,
               &GUID_b3b709e2_bf68_4d75_b725_6b7d34fa01d3,
               (void **)&v13);
    v7 = inited;
    if ( inited >= 0 )
    {
      inited = ((__int64 (__fastcall *)(struct IUnknown *, __int64, _QWORD))v13->lpVtbl[2].AddRef)(v13, a2, a3);
      v7 = inited;
      if ( inited >= 0 )
      {
        inited = TabletModePositioner::ApplyLayoutOperationHelper(a1, v13);
        v7 = inited;
        if ( inited >= 0 )
        {
          v7 = 0;
          goto LABEL_23;
        }
        v10 = 2886LL;
      }
      else
      {
        v10 = 2885LL;
      }
    }
    else
    {
      v10 = 2884LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)inited);
LABEL_23:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
    return v7;
  }
  v15 = 0;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
  v6 = TabletModePositioner::InitLayoutOperationHelper(
         a1,
         &CLSID_PPIWin32VtcLayoutOperation,
         &GUID_7f4d2785_4b93_429e_9250_0e9670706fba,
         (void **)&v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 2873LL;
    goto LABEL_11;
  }
  v6 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, __int64, int *))v12->lpVtbl[2].AddRef)(v12, a2, 1LL, &v15);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 2874LL;
    goto LABEL_11;
  }
  if ( !v15 )
  {
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
    goto LABEL_15;
  }
  v6 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, _QWORD))v12->lpVtbl[2].QueryInterface)(v12, a2, a3);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v6 = TabletModePositioner::ApplyLayoutOperationHelper(a1, v12);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v7 = 0;
      goto LABEL_13;
    }
    v8 = 2878LL;
  }
  else
  {
    v8 = 2877LL;
  }
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v6);
LABEL_13:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
  return v7;
}
