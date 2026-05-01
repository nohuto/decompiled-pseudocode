/*
 * XREFs of ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x1805C29C8
 * Callers:
 *     ?ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z @ 0x1805BE830 (-ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x1803CD4B8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18056FE30 (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ??1ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAA@XZ @ 0x1805B8774 (--1ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ?EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1805BB474 (-EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?FullScreenAppIgnored@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ @ 0x1805BB98C (-FullScreenAppIgnored@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ.c)
 *     ?GetFrameRectForView@TabletModePositioner@@CAXPEAUIApplicationView@@PEAUtagRECT@@@Z @ 0x1805BC150 (-GetFrameRectForView@TabletModePositioner@@CAXPEAUIApplicationView@@PEAUtagRECT@@@Z.c)
 *     ?IsOldFullScreenView@TabletModePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1805BD720 (-IsOldFullScreenView@TabletModePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsViewRectValid@TabletModePositioner@@AEAA_NAEBUtagRECT@@0@Z @ 0x1805BDA88 (-IsViewRectValid@TabletModePositioner@@AEAA_NAEBUtagRECT@@0@Z.c)
 *     ?ResizeViewHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@H@Z @ 0x1805BE060 (-ResizeViewHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@H@Z.c)
 *     ?RestoredAppAddedToLayout@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ @ 0x1805BE148 (-RestoredAppAddedToLayout@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x1805C141C (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 *     ?ViewForceEvicted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x1805C2038 (-ViewForceEvicted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView.c)
 *     ?ViewForceMaximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x1805C21B4 (-ViewForceMaximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationVi.c)
 *     ?ViewPositionAdjusted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x1805C25B8 (-ViewPositionAdjusted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplication.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TabletModePositioner::ViewRestored(
        __int64 a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64),
        TabletModeTraceLogging::ShellTrackedWindowPosChanged *a3)
{
  _DWORD *v6; // rcx
  bool v7; // bl
  struct IApplicationView *v8; // rdx
  HRESULT Service; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdi
  int (__fastcall *v13)(__int64, __int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), struct tagRECT *, _QWORD); // rbx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdi
  int (__fastcall *v20)(__int64, void **); // rbx
  int v21; // eax
  void *ppvOut[2]; // [rsp+38h] [rbp-48h] BYREF
  struct tagRECT v23; // [rsp+48h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v6 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   a1,
                   (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v6 > 5u )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)v6,
      (unsigned __int8 *)dword_18086B0A8,
      (const GUID *)(*((_QWORD *)a3 + 6) + 8LL),
      0LL,
      2u,
      &v24);
  v7 = 0;
  if ( TabletModePositioner::IsOldFullScreenView((TabletModePositioner *)a1, (struct IUnknown *)a2) )
  {
    ppvOut[0] = 0LL;
    v24 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)ppvOut);
    Service = IUnknown_QueryService(
                *(IUnknown **)(a1 + 16),
                &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                ppvOut);
    v10 = retaddr;
    if ( Service >= 0 )
    {
      Service = (*(__int64 (__fastcall **)(void *, struct _EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)ppvOut[0] + 72LL))(
                  ppvOut[0],
                  &v24);
      v10 = retaddr;
      if ( Service >= 0 )
      {
        v23 = 0LL;
        TabletModePositioner::GetFrameRectForView(a2, &v23);
        v7 = Geometry::operator==(&v23, &v24);
        if ( v7 )
          TabletModeTraceLogging::ShellTrackedWindowPosChanged::FullScreenAppIgnored(a3);
LABEL_11:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)ppvOut);
        if ( v7 )
          goto LABEL_31;
        goto LABEL_12;
      }
      v11 = 2109LL;
    }
    else
    {
      v11 = 2108LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v10,
      (void *)v11,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)Service);
    goto LABEL_11;
  }
LABEL_12:
  if ( TabletModePositionerHelpers::IsOperableView(a2, v8) )
  {
    *(_QWORD *)&v23.left = 0LL;
    v12 = *(_QWORD *)(a1 + 248);
    v13 = *(int (__fastcall **)(__int64, __int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), struct tagRECT *, _QWORD))(*(_QWORD *)v12 + 152LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v23.left);
    if ( v13(v12, a2, &v23, 0LL) < 0 )
    {
      ppvOut[0] = 0LL;
      v19 = *(_QWORD *)(a1 + 336);
      v20 = *(int (__fastcall **)(__int64, void **))(*(_QWORD *)v19 + 72LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)ppvOut);
      if ( v20(v19, ppvOut) >= 0 )
      {
        if ( (unsigned int)SHIsSameObject((struct IUnknown *)ppvOut[0], (struct IUnknown *)a2) )
        {
          TabletModeTraceLogging::ShellTrackedWindowPosChanged::RestoredAppAddedToLayout(a3);
          v21 = TabletModePositioner::SwitchToAppHelper(a1, (struct IApplicationView *)a2, 1u, 0LL, 0LL);
          if ( v21 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x887,
              (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
              (const char *)(unsigned int)v21);
        }
      }
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)ppvOut);
      goto LABEL_30;
    }
    v24 = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, struct _EVENT_DATA_DESCRIPTOR *))(**(_QWORD **)&v23.left + 56LL))(
      *(_QWORD *)&v23.left,
      0LL,
      &v24);
    *(_OWORD *)ppvOut = 0LL;
    TabletModePositioner::GetFrameRectForView(a2, (struct tagRECT *)ppvOut);
    if ( TabletModePositioner::IsViewRectValid(
           (TabletModePositioner *)a1,
           (const struct tagRECT *)ppvOut,
           (const struct tagRECT *)&v24) )
    {
      goto LABEL_30;
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64)))(**(_QWORD **)(a1 + 320) + 24LL))(
            *(_QWORD *)(a1 + 320),
            a2);
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( !v15 )
      {
        TabletModeTraceLogging::ShellTrackedWindowPosChanged::ViewForceMaximized(
          a3,
          (int (__fastcall ***)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *))a2,
          (const struct tagRECT *)&v24,
          (const struct tagRECT *)ppvOut);
        v16 = TabletModePositioner::SwitchToAppHelper(a1, (struct IApplicationView *)a2, 4u, 0LL, 0LL);
        v17 = retaddr;
        if ( v16 < 0 )
        {
          v18 = 2162LL;
          goto LABEL_24;
        }
LABEL_30:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v23.left);
        goto LABEL_31;
      }
      if ( v15 == 1 )
      {
        TabletModeTraceLogging::ShellTrackedWindowPosChanged::ViewForceEvicted(
          a3,
          (int (__fastcall ***)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *))a2,
          (const struct tagRECT *)&v24,
          (const struct tagRECT *)ppvOut);
        v16 = TabletModePositioner::EvictAppHelper((TabletModePositioner *)a1, (__int64)a2, 8u);
        v17 = retaddr;
        if ( v16 < 0 )
        {
          v18 = 2169LL;
LABEL_24:
          wil::details::in1diag3::_Log_Hr(
            v17,
            (void *)v18,
            (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v16);
          goto LABEL_30;
        }
        goto LABEL_30;
      }
    }
    TabletModeTraceLogging::ShellTrackedWindowPosChanged::ViewPositionAdjusted(
      a3,
      (int (__fastcall ***)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *))a2,
      (const struct tagRECT *)&v24,
      (const struct tagRECT *)ppvOut);
    v16 = TabletModePositioner::ResizeViewHelper(
            (TabletModePositioner *)a1,
            (struct IApplicationView *)a2,
            LODWORD(ppvOut[1]) - LODWORD(ppvOut[0]));
    v17 = retaddr;
    if ( v16 < 0 )
    {
      v18 = 2153LL;
      goto LABEL_24;
    }
    goto LABEL_30;
  }
LABEL_31:
  TabletModeTraceLogging::ShellTrackedWindowPosChanged::~ShellTrackedWindowPosChanged(a3);
}
