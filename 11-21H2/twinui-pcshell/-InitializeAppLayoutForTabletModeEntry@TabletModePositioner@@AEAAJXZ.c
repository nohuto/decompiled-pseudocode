/*
 * XREFs of ?InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ @ 0x180504C14
 * Callers:
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x180501870 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 *     ?TabletModeChanged@TabletModePositioner@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x180509A70 (-TabletModeChanged@TabletModePositioner@@UEAAJW4_TABLETMODESTATE@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18011AF94 (-GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?SetAppLayout@TabletModePositioner@@AEAAJPEAUIAppLayout@@@Z @ 0x18011B224 (-SetAppLayout@TabletModePositioner@@AEAAJPEAUIAppLayout@@@Z.c)
 *     ?CreateEmptyAppLayout@TabletModePositioner@@CAJAEBULAYOUT_ENVIRONMENT_DETAILS@@PEAPEAUIAppLayout@@@Z @ 0x18011D308 (-CreateEmptyAppLayout@TabletModePositioner@@CAJAEBULAYOUT_ENVIRONMENT_DETAILS@@PEAPEAUIAppLayout.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z @ 0x180501508 (-CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z.c)
 *     ?ShowLauncher@TabletModePositioner@@AEAAJ_N@Z @ 0x180506A68 (-ShowLauncher@TabletModePositioner@@AEAAJ_N@Z.c)
 *     ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x180509670 (-SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositioner::InitializeAppLayoutForTabletModeEntry(IUnknown **this)
{
  int CurrentLayoutEnvironment; // eax
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rdx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  struct IAppLayout *v10; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v11[40]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  CurrentLayoutEnvironment = TabletModePositioner::GetCurrentLayoutEnvironment(
                               this,
                               (struct LAYOUT_ENVIRONMENT_DETAILS *)v11);
  v3 = CurrentLayoutEnvironment;
  if ( CurrentLayoutEnvironment >= 0 )
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v10);
    v4 = TabletModePositioner::CreateEmptyAppLayout((const struct LAYOUT_ENVIRONMENT_DETAILS *)v11, &v10);
    v3 = v4;
    if ( v4 >= 0 )
    {
      v4 = TabletModePositioner::SetAppLayout((TabletModePositioner *)this, v10);
      v3 = v4;
      if ( v4 >= 0 )
      {
        ((void (__fastcall *)(IUnknown *, __int64))this[39]->lpVtbl[2].QueryInterface)(this[39], 17LL);
        v6 = TabletModePositioner::SwitchToSanitizedAppLayout(this, 1LL);
        if ( v6 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x6AD,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v6);
          v7 = TabletModePositioner::CleanupBackgroundViews((__int64)this, 0LL, 1);
          if ( v7 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x6B0,
              (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
              (const char *)(unsigned int)v7);
          v8 = TabletModePositioner::ShowLauncher((TabletModePositioner *)this, 0);
          if ( v8 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x6B1,
              (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
              (const char *)(unsigned int)v8);
        }
        v3 = 0;
        goto LABEL_14;
      }
      v5 = 1704LL;
    }
    else
    {
      v5 = 1703LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v4);
LABEL_14:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v10);
    return v3;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6A5,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)CurrentLayoutEnvironment);
  return v3;
}
