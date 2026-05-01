/*
 * XREFs of ?IsLauncherOrSwitcherVisibleOnThisMonitor@TabletModeViewManager@@AEAA_NXZ @ 0x1805C3B5C
 * Callers:
 *     ?StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x1805C497C (-StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@PEA_N@Z @ 0x1805978F8 (-IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@P.c)
 */

char __fastcall TabletModeViewManager::IsLauncherOrSwitcherVisibleOnThisMonitor(
        TabletModeViewManager *this,
        __int64 a2,
        __int64 a3,
        bool *a4)
{
  char v4; // bl
  __int64 *v5; // rdi
  bool v6; // zf
  IUnknown **v7; // r14
  HRESULT Service; // eax
  int IsLauncherVisibleOnMonitor; // eax
  _QWORD *v11; // rdi
  HRESULT v12; // eax
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v16; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v5 = (__int64 *)((char *)this + 168);
  v6 = *((_QWORD *)this + 21) == 0LL;
  v7 = (IUnknown **)((char *)this + 16);
  LOBYTE(v16) = 0;
  if ( v6 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v5);
    Service = IUnknown_QueryService(
                *v7,
                (const GUID *const)&SID_ImmersiveLauncher,
                &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
                (void **)v5);
    if ( Service < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2EE,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)Service);
  }
  if ( !*v5 )
    goto LABEL_8;
  IsLauncherVisibleOnMonitor = ImmersiveMultimonHelpers::IsLauncherVisibleOnMonitor(
                                 *v7,
                                 (struct IUnknown *)*v5,
                                 (struct IImmersiveLauncher *)&v16,
                                 a4);
  if ( IsLauncherVisibleOnMonitor < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2F3,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
      (const char *)(unsigned int)IsLauncherVisibleOnMonitor);
  v4 = v16;
  if ( !(_BYTE)v16 )
  {
LABEL_8:
    v11 = (_QWORD *)((char *)this + 176);
    if ( !*((_QWORD *)this + 22) )
    {
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 22);
      v12 = IUnknown_QueryService(
              *v7,
              (const GUID *const)&SID_MultitaskingViewVisibilityService,
              &GUID_ac11cda3_1601_4ad7_a40e_fe2ced187307,
              (void **)this + 22);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2FA,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
          (const char *)(unsigned int)v12);
    }
    if ( *v11 )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(*(_QWORD *)*v11 + 24LL))(*v11, 11LL, &v16);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x301,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
          (const char *)(unsigned int)v13);
      return v16 != 0;
    }
  }
  return v4;
}
