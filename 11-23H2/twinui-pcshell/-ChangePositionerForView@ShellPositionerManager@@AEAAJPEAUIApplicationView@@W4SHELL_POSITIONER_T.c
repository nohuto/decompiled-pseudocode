/*
 * XREFs of ?ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@_N@Z @ 0x1805A2B70
 * Callers:
 *     ?AddPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1805A28F0 (-AddPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE.c)
 *     ?RemovePositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1805A3C60 (-RemovePositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_T.c)
 * Callees:
 *     ?PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18001718C (-PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x1800F0008 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180109938 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803F0F08 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ??1ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAA@XZ @ 0x1805A26B4 (--1ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAA@XZ.c)
 *     ??4ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805A281C (--4ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@1@Z @ 0x1805A3418 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 *     ?StartActivity@ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAAXPEAUIApplicationView@@W4CompactOverlayExitReason@2@@Z @ 0x1805A3DB4 (-StartActivity@ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAAXPEAUIApplicationView@@W4.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationView@@@Z @ 0x1807461F0 (-GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationVie.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ShellPositionerManager::ChangePositionerForView(
        __int64 a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64),
        unsigned int a3,
        char a4)
{
  int PositionerPriorityForView; // eax
  unsigned int v9; // ebx
  unsigned int v10; // r15d
  __int64 v11; // rax
  unsigned int v12; // r12d
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, _QWORD, __int64 *); // rbx
  int v15; // eax
  struct IApplicationView *v16; // rdx
  struct IImmersiveApplication *ApplicationFromView; // rbx
  int v18; // eax
  int v19; // eax
  DWORD v20; // edx
  struct IShellPositionerPriority *v22; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v23; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v24[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v25[40]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v26[40]; // [rsp+180h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+308h] [rbp+208h]

  v22 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v22);
  PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(
                                (ShellPositionerManager *)a1,
                                a2,
                                &v22);
  v9 = PositionerPriorityForView;
  if ( PositionerPriorityForView >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v22 + 24LL))(v22);
    v11 = *(_QWORD *)v22;
    if ( a4 )
      (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(v11 + 48))(v22, a3);
    else
      (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(v11 + 40))(v22, a3);
    v12 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v22 + 24LL))(v22);
    if ( v12 != v10 )
    {
      v23 = 0LL;
      v13 = *(_QWORD *)(a1 + 176);
      v14 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 32LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
      v15 = v14(v13, (unsigned int)(*(_DWORD *)(a1 + 144) != 0) + 1, &v23);
      if ( v15 >= 0 )
      {
        ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView((ApplicationViewHelpers *)a2, v16);
        v24[0] = (__int64)ApplicationFromView;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v24);
        if ( ApplicationFromView )
        {
          v18 = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, __int64))(*(_QWORD *)ApplicationFromView
                                                                                   + 400LL))(
                  ApplicationFromView,
                  v23);
          if ( v18 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x41E,
              (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
              (const char *)(unsigned int)v18);
        }
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v24);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x419,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v15);
      }
      wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v25,
        (__int64)"ExitCompactOverlayModeForView");
      v25[0] = (__int64)&OverlayModeTelemetry::ExitCompactOverlayModeForView::`vftable';
      if ( v10 == 6 )
      {
        wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
          (struct wil::details::IFailureCallback *)v26,
          (__int64)"ExitCompactOverlayModeForView");
        v26[0] = &OverlayModeTelemetry::ExitCompactOverlayModeForView::`vftable';
        OverlayModeTelemetry::ExitCompactOverlayModeForView::StartActivity(v26, a2, 1LL);
        OverlayModeTelemetry::ExitCompactOverlayModeForView::operator=(v25, (__int64)v26);
        OverlayModeTelemetry::ExitCompactOverlayModeForView::~ExitCompactOverlayModeForView((OverlayModeTelemetry::ExitCompactOverlayModeForView *)v26);
      }
      v19 = ShellPositionerManager::PerformPositionerHandoff(a1, a2, v10, v12);
      v9 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x429,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v19);
        OverlayModeTelemetry::ExitCompactOverlayModeForView::~ExitCompactOverlayModeForView((OverlayModeTelemetry::ExitCompactOverlayModeForView *)v25);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
        goto LABEL_21;
      }
      if ( *(_DWORD *)v25[6] == 1 )
        wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
          v25,
          v20);
      OverlayModeTelemetry::ExitCompactOverlayModeForView::~ExitCompactOverlayModeForView((OverlayModeTelemetry::ExitCompactOverlayModeForView *)v25);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
    }
    ShellPositionerManager::PersistPositionerPriority((ShellPositionerManager *)a1, (struct IApplicationView *)a2);
    v9 = 0;
    goto LABEL_21;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x400,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)PositionerPriorityForView);
LABEL_21:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v22);
  return v9;
}
